/*
*
*/

#include "quest.h"
#include <QtSql/QSqlQuery>
#include "GoalMaps.h"

// преобразование
QString IntToQStr(int integer)
{
	char buf[10];
	sprintf(buf,"%d",integer);
	return buf;
}

quest::quest(QWidget *parent): QDialog(parent)
{
	ui.setupUi(this);

	connect(ui.ButtomChoice,SIGNAL(clicked()),this,SLOT(ButtomChoiceClick()));
	connect(ui.ButtomChoiceName,SIGNAL(clicked()),this,SLOT(ButtomChoiceNameClick()));
	connect(ui.ButtomChoiceQuest,SIGNAL(clicked()),this,SLOT(ButtomChoiceQuestClick()));
	connect(ui.ButtonClose,SIGNAL(clicked()),this,SLOT(accept()));
	connect(ui.ButtonGoalToMaps,SIGNAL(clicked()),this,SLOT(ButtonGoalToMapsClick()));
	connect(ui.ButtonShowNpcMap,SIGNAL(clicked()),this,SLOT(ButtomShowNpcMapClick()));

	// нач. настройки
	ui.OptDopBox->setVisible(false);
	ui.MainBox->setVisible(false);
	ui.OptQuestBox->setVisible(false);
	
	DB.createConnection();
}

quest::~quest()
{
}

/*
* ui.LocBox - локация
*/
void quest::ButtomChoiceClick()
{
	ui.OptDopBox->setVisible(true);
	ui.NameBox->clear();

	DB.ShowQComboBoxNameNpc(ui.NameBox,"SELECT name FROM questNPC WHERE map = '"+IntToQStr(ui.LocBox->currentIndex())+"';");
}

void quest::ButtomChoiceNameClick()
{
	ui.OptQuestBox->setVisible(true);
	ui.QuestBox->clear();

	QSqlQuery idNPCquery;
	idNPCquery = DB.query("SELECT id FROM questNPC WHERE name = '"+ui.NameBox->currentText()+"';");

	QSqlRecord recIdNpc = idNPCquery.record();

	while (idNPCquery.next())
	{
		idNPC = idNPCquery.value(recIdNpc.indexOf("id")).toInt();
	}

	DB.ShowQComboBoxNameQuest(ui.QuestBox,"SELECT nameQuest FROM quest WHERE idNPC = "+IntToQStr(idNPC)+";");
}

void quest::ButtomChoiceQuestClick()
{
	ui.MainBox->setVisible(true);
	ui.lineDaly->clear();
	ui.lineInfo->clear();
	ui.textAward->clear();
	ui.textItem->clear();
	ui.textRep->clear();

	QSqlQuery result, posNpcData;
	bool goalQuest;

	result = DB.query("SELECT * FROM quest WHERE idNPC = '"+IntToQStr(idNPC)+"' AND nameQuest = '"+ui.QuestBox->currentText()+"';");
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

void quest::ButtonGoalToMapsClick()
{
	GoalMaps form(0,mapX[0], mapY[0], Tmap[0], 1, returnCountGoal());
	form.setCoordinates(mapX, mapY, Tmap);
	form.exec();
}

void quest::ButtomShowNpcMapClick()
{
	GoalMaps form(0,posNpcX, posNpcY, posNpcMap, 0, 0);
	form.exec();
}

int quest::returnCountGoal()
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