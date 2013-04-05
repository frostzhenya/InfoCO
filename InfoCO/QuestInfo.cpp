/*
*
*/

#include "QuestInfo.h"
#include "infoco.h"
#include "QuestMap.h"
#include "GoalMaps.h"
#include "Sleeper.h"
#include <QtSql/QSqlQuery>

// преобразование
QString QuestInfo::IntToQStr(int integer)
{
	char buf[10];
	sprintf(buf,"%d",integer);
	return buf;
}

QuestInfo::QuestInfo(QWidget *parent, int Map): QDialog(parent, Qt::WindowStaysOnTopHint | Qt::CustomizeWindowHint)
{
	ui.setupUi(this);

	// используем кодировку CP1251
	QTextCodec *langcodec = QTextCodec::codecForName("Windows-1251");
    QTextCodec::setCodecForTr(langcodec);
	QTextCodec::setCodecForCStrings(langcodec);
	QTextCodec::setCodecForLocale(langcodec);

	QuestInfo::setGeometry(300,300,0,0);
	ui.ButtonCloseP->setVisible(false);

	connect(ui.ButtonCloseP,SIGNAL(clicked()),this,SLOT(ButtomClosePClick()));
	connect(ui.ButtonOpenP,SIGNAL(clicked()),this,SLOT(ButtomOpenPClick()));
	connect(ui.ButtonBack,SIGNAL(clicked()),this,SLOT(ButtonBackClick()));
	connect(ui.ButtonToMain,SIGNAL(clicked()),this,SLOT(ButtonToMainClick()));
	connect(ui.listNpc,SIGNAL(itemDoubleClicked(QListWidgetItem*)),this,SLOT(ListNpcClick()));
	connect(ui.listQuest,SIGNAL(itemDoubleClicked(QListWidgetItem*)),this,SLOT(ListQuestClick()));
	connect(ui.ButtonGoalToMaps,SIGNAL(clicked()),this,SLOT(ButtonGoalToMapsClick()));
	connect(ui.ButtonShowNpcMap,SIGNAL(clicked()),this,SLOT(ButtomShowNpcMapClick()));

	DB.createConnection();

	IDMap = Map;

	DB.ShowQListWidget(ui.listNpc,"SELECT name FROM questNPC WHERE map = '"+IntToQStr(IDMap)+"';");
}


QuestInfo::~QuestInfo()
{

}

void QuestInfo::ButtonBackClick()
{
	QuestMap QuestMapForm;
	close();
	QuestMapForm.exec();
}

void QuestInfo::ButtonToMainClick()
{
	InfoCO sZoneInfo;
	close();
	sZoneInfo.exec();
}

void QuestInfo::ButtomOpenPClick()
{
	/*for(int i = 226; i < 591; i++)
	{
		Sleeper::msleep(1);
		QuestInfo::setGeometry(300,300,i,590);
	}*/
	QuestInfo::setGeometry(300,300,590,590);
	ui.ButtonCloseP->setVisible(true);
	ui.ButtonOpenP->setVisible(false);
}

void QuestInfo::ButtomClosePClick()
{
	//QuestInfo::setGeometry(300,300,0,0);
	for(int i = 590; i > 227; i--)
	{
		Sleeper::msleep(1);
		QuestInfo::setGeometry(300,300,i,590);
	}
	ui.ButtonCloseP->setVisible(false);
	ui.ButtonOpenP->setVisible(true);
}

void QuestInfo::ListNpcClick()
{
	ButtomOpenPClick();
	ui.listQuest->clear();

	QMessageBox a;

	QSqlQuery idNPCquery;
	idNPCquery = DB.query("SELECT id FROM questNPC WHERE name = '"+ui.listNpc->currentItem()->text()+"';");

	QSqlRecord recIdNpc = idNPCquery.record();

	while (idNPCquery.next())
	{
		idNPC = idNPCquery.value(recIdNpc.indexOf("id")).toInt();
	}

	QSqlQuery NameQuest = DB.query("SELECT nameQuest FROM quest WHERE idNPC = '"+IntToQStr(idNPC)+"';");

	QSqlRecord recNameQuest = NameQuest.record();

	while (NameQuest.next())
	{
		ui.listQuest->addItem(NameQuest.value(recNameQuest.indexOf("nameQuest")).toString());
	}
}

void QuestInfo::ListQuestClick()
{
	ui.lineDaly->clear();
	ui.lineInfo->clear();
	ui.textAward->clear();
	ui.textItem->clear();
	ui.textRep->clear();

	QSqlQuery result, posNpcData;
	bool goalQuest;

	result = DB.query("SELECT * FROM quest WHERE idNPC = '"+IntToQStr(idNPC)+"' AND nameQuest = '"+ui.listQuest->currentItem()->text()+"';");
	posNpcData = DB.query("SELECT * FROM questNPC WHERE id =  '"+IntToQStr(idNPC)+"';");

	// Данные по квесту
	QSqlRecord rec = result.record();
	while (result.next())
	{
		ui.lineDaly->setText(result.value(rec.indexOf("dailyQuest")).toString());
		ui.lineInfo->setText(result.value(rec.indexOf("textQuest")).toString());
		ui.textAward->setText(result.value(rec.indexOf("award")).toString());
		ui.textItem->setText(result.value(rec.indexOf("item")).toString());
		ui.textRep->setText(result.value(rec.indexOf("rep")).toString());
		mapX[0] = result.value(rec.indexOf("x0")).toInt();
		mapX[1] = result.value(rec.indexOf("x1")).toInt();
		mapX[2] = result.value(rec.indexOf("x2")).toInt();
		mapX[3] = result.value(rec.indexOf("x3")).toInt();
		mapY[0] = result.value(rec.indexOf("y0")).toInt();
		mapY[1] = result.value(rec.indexOf("y1")).toInt();
		mapY[2] = result.value(rec.indexOf("y2")).toInt();
		mapY[3] = result.value(rec.indexOf("y3")).toInt();
		Tmap[0] = result.value(rec.indexOf("map0")).toInt();
		Tmap[1] = result.value(rec.indexOf("map1")).toInt();
		Tmap[2] = result.value(rec.indexOf("map2")).toInt();
		Tmap[3] = result.value(rec.indexOf("map3")).toInt();

		/*if(goalQuest = result.value(rec.indexOf("goalQuest")).toInt())
			ui.ButtonGoalToMaps->enabledChange(true);
		else
			ui.ButtonGoalToMaps->enabledChange(true);*/
	}

	//данныe по NPC
	QSqlRecord recPosNpcData = posNpcData.record();
	while (posNpcData.next())
	{
		posNpcX = posNpcData.value(recPosNpcData.indexOf("x")).toInt();
		posNpcY = posNpcData.value(recPosNpcData.indexOf("y")).toInt();
		posNpcMap = posNpcData.value(recPosNpcData.indexOf("map")).toInt();
	}
}

void QuestInfo::ButtonGoalToMapsClick()
{
	GoalMaps form(0,mapX[0], mapY[0], Tmap[0], 1, returnCountGoal());
	form.setCoordinates(mapX, mapY, Tmap);
	form.exec();
}

void QuestInfo::ButtomShowNpcMapClick()
{
	GoalMaps form(0,posNpcX, posNpcY, posNpcMap, 0, 0);
	form.exec();
}

int QuestInfo::returnCountGoal()
{
	int count = 0;

	for(int i=0; i < 4; i++)
	{
		if(mapX[i] != 0 && mapY[i] != 0)
			count++;
		else
			break;
	}
	return count;
}