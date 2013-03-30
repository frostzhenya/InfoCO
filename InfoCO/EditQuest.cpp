/*
*
*/

#include "EditQuest.h"
#include <QtCore/qtextstream.h>
#include <QtGui/qtextdocument.h>
#include <QTextBlock>
#include <QTableWidgetItem>
#include "MapsGeometry.h"

/*typedef */struct dataQuest
{
	QString idNPC;
	QString nameQuest;
	QString textQuest;
	QString dailyQuest;
	QString award;
	QString item;
	QString rep;
	QString x0;
	QString y0;
	QString x1;
	QString y1;
	QString x2;
	QString y2;
	QString x3;
	QString y3;
	QString map0;
	QString map1;
	QString map2;
	QString map3;
	QString goalQuest;

};

// преобразование
QString EditQuest::IntToQStr(int integer)
{
	char buf[10];
	sprintf(buf,"%d",integer);
	return buf;
}

EditQuest::EditQuest(QWidget *parent): QDialog(parent)
{
	ui.setupUi(this);
	DB.createConnection();

	connect(ui.ButtonClose,SIGNAL(clicked()),this,SLOT(accept()));
	connect(ui.comboBoxMap,SIGNAL(currentIndexChanged(int)),this,SLOT(comboBoxMapChanged()));
	connect(ui.ButtonNPC,SIGNAL(clicked()),this,SLOT(ButtonNPCClick()));
	connect(ui.ButtonQuest,SIGNAL(clicked()),this,SLOT(ButtonQuestClick()));
	connect(ui.ButtonClear,SIGNAL(clicked()),this,SLOT(ButtonClearClick()));
	connect(ui.ButtonAddQuest,SIGNAL(clicked()),this,SLOT(ButtonAddQuestClick()));
	connect(ui.ButtonEditQuest,SIGNAL(clicked()),this,SLOT(ButtonEditQuestClick()));
	connect(ui.ButtonDeleteQuest,SIGNAL(clicked()),this,SLOT(ButtonDeleteQuestClick()));

	connect(ui.ButtonGeometr0, SIGNAL(clicked()),this,SLOT(ButtomButtonGeometr0Click()));
}


EditQuest::~EditQuest()
{
}

void EditQuest::comboBoxMapChanged()
{
	ui.comboBoxNpc->clear();
	idMap = ui.comboBoxMap->currentIndex()-1;

	DB.ShowQComboBoxNameNpc(ui.comboBoxNpc,"SELECT name FROM questNPC WHERE map = '"+IntToQStr(idMap)+"';");

	//ShowDataTable();
}

void EditQuest::ButtonNPCClick()
{
	ui.comboBoxQuest->clear();

	QSqlQuery idNPCquery = DB.query("SELECT id FROM questNPC WHERE name = '"+ui.comboBoxNpc->currentText()+"';");

	QSqlRecord recIdNpc = idNPCquery.record();

	while (idNPCquery.next())
	{
		idNPC = idNPCquery.value(recIdNpc.indexOf("id")).toInt();
	}

	DB.ShowQComboBoxNameQuest(ui.comboBoxQuest,"SELECT nameQuest FROM quest WHERE idNPC = "+IntToQStr(idNPC)+";");

	ShowDataTable();
}

void EditQuest::ButtonQuestClick()
{
	// сначала присваиваем ид
	QSqlQuery queryIDQuest = DB.query("SELECT id FROM quest WHERE nameQuest = '"+ui.comboBoxQuest->currentText()+"';");
	QSqlRecord recIDQuest = queryIDQuest.record();
	while (queryIDQuest.next())
	{
		idQuestEdit = queryIDQuest.value(recIDQuest.indexOf("id")).toInt();
	}

	query = DB.query("SELECT * FROM quest WHERE id = '"+IntToQStr(idQuestEdit)+"';");
	

	QSqlRecord rec = query.record();
	QString yes = "да";
	QString no = "нет";

	while (query.next())
	{
		ui.EditNameQuest->setText(query.value(rec.indexOf("nameQuest")).toString());
		ui.textEditQuest->setText(query.value(rec.indexOf("textQuest")).toString());

		if (query.value(rec.indexOf("dailyQuest")).toString() == no)
			ui.comboBoxDalyQuest->setCurrentIndex(0);
		else if (query.value(rec.indexOf("dailyQuest")).toString() == yes)
			ui.comboBoxDalyQuest->setCurrentIndex(1);

		ui.textEditExp->setText(query.value(rec.indexOf("award")).toString());
		ui.textEditItem->setText(query.value(rec.indexOf("item")).toString());
		ui.textEditRep->setText(query.value(rec.indexOf("rep")).toString());
		ui.EditX0->setText(query.value(rec.indexOf("x0")).toString());
		ui.EditX1->setText(query.value(rec.indexOf("x1")).toString());
		ui.EditX2->setText(query.value(rec.indexOf("x2")).toString());
		ui.EditX3->setText(query.value(rec.indexOf("x3")).toString());
		ui.EditY0->setText(query.value(rec.indexOf("y0")).toString());
		ui.EditY1->setText(query.value(rec.indexOf("y1")).toString());
		ui.EditY2->setText(query.value(rec.indexOf("y2")).toString());
		ui.EditY3->setText(query.value(rec.indexOf("y3")).toString());
		ui.comboBoxMap0->setCurrentIndex(query.value(rec.indexOf("map0")).toInt());
		ui.comboBoxMap1->setCurrentIndex(query.value(rec.indexOf("map1")).toInt());
		ui.comboBoxMap2->setCurrentIndex(query.value(rec.indexOf("map2")).toInt());
		ui.comboBoxMap3->setCurrentIndex(query.value(rec.indexOf("map3")).toInt());

		if(!query.value(rec.indexOf("goalQuest")).toBool())
			ui.comboBoxGoalQuest->setCurrentIndex(0);
		else
			ui.comboBoxGoalQuest->setCurrentIndex(1);
	}
	ShowDataTable();
}

void EditQuest::ButtonClearClick()
{
	ui.EditNameQuest->clear();
	ui.textEditQuest->clear();
	ui.comboBoxDalyQuest->setCurrentIndex(0);
	ui.textEditExp->clear();
	ui.textEditItem->clear();
	ui.textEditRep->clear();
	ui.EditX0->setText(IntToQStr(0));
	ui.EditX1->setText(IntToQStr(0));
	ui.EditX2->setText(IntToQStr(0));
	ui.EditX3->setText(IntToQStr(0));
	ui.EditY0->setText(IntToQStr(0));
	ui.EditY1->setText(IntToQStr(0));
	ui.EditY2->setText(IntToQStr(0));
	ui.EditY3->setText(IntToQStr(0));
	ui.comboBoxMap0->setCurrentIndex(0);
	ui.comboBoxMap1->setCurrentIndex(0);
	ui.comboBoxMap2->setCurrentIndex(0);
	ui.comboBoxMap3->setCurrentIndex(0);
	ui.comboBoxGoalQuest->setCurrentIndex(0);
}

void EditQuest::ButtonAddQuestClick()
{
	dataQuest d;
	// запоняем структуру
	d.idNPC = IntToQStr(idNPC)+", ";
	d.nameQuest = "'"+ui.EditNameQuest->text()+"', ";
	d.textQuest = "'"+toText(ui.textEditQuest)+"', ";
	d.dailyQuest = "'"+ui.comboBoxDalyQuest->currentText()+"', ";
	d.award = "'"+toText(ui.textEditExp)+"', ";
	d.item = "'"+toText(ui.textEditItem)+"', ";
	d.rep = "'"+toText(ui.textEditRep)+"', ";
	d.x0 = ui.EditX0->text()+", ";
	d.y0 = ui.EditY0->text()+", ";
	d.x1 = ui.EditX1->text()+", ";
	d.y1 = ui.EditY1->text()+", ";
	d.x2 = ui.EditX2->text()+", ";
	d.y2 = ui.EditY2->text()+", ";
	d.x3 = ui.EditX3->text()+", ";
	d.y3 = ui.EditY3->text()+", ";
	d.map0 = IntToQStr(ui.comboBoxMap0->currentIndex())+", ";
	d.map1 = IntToQStr(ui.comboBoxMap1->currentIndex())+", ";
	d.map2 = IntToQStr(ui.comboBoxMap2->currentIndex())+", ";
	d.map3 = IntToQStr(ui.comboBoxMap3->currentIndex())+", ";
	d.goalQuest = IntToQStr(ui.comboBoxGoalQuest->currentIndex())+"";

	QString resultData = d.idNPC+d.nameQuest+d.textQuest+d.dailyQuest+d.award+d.item+d.rep+d.x0+d.y0+d.x1+d.y1+d.x2+d.y2+d.x3+d.y3+d.map0+d.map1+d.map2+d.map3+d.goalQuest;
	QString resultSQL = "INSERT INTO quest (idNPC, nameQuest, textQuest, dailyQuest, award, item, rep, x0, y0, x1, y1, x2, y2, x3, y3, map0, map1, map2, map3, goalQuest) VALUES ("+resultData+");";
	
	ui.textEditResultSQL->setText(resultSQL);
	DB.query(resultSQL);
	ButtonClearClick();
	ShowDataTable();
}

void EditQuest::ButtonEditQuestClick()
{
	dataQuest d;
	// запоняем структуру
	d.idNPC = "idNPC="+IntToQStr(idNPC)+", ";
	d.nameQuest = "nameQuest='"+ui.EditNameQuest->text()+"', ";
	d.textQuest = "textQuest='"+toText(ui.textEditQuest)+"', ";
	d.dailyQuest = "dailyQuest='"+ui.comboBoxDalyQuest->currentText()+"', ";
	d.award = "award='"+toText(ui.textEditExp)+"', ";
	d.item = "item='"+toText(ui.textEditItem)+"', ";
	d.rep = "rep='"+toText(ui.textEditRep)+"', ";
	d.x0 = "x0="+ui.EditX0->text()+", ";
	d.y0 = "y0="+ui.EditY0->text()+", ";
	d.x1 = "x1="+ui.EditX1->text()+", ";
	d.y1 = "y1="+ui.EditY1->text()+", ";
	d.x2 = "x2="+ui.EditX2->text()+", ";
	d.y2 = "y2="+ui.EditY2->text()+", ";
	d.x3 = "x3="+ui.EditX3->text()+", ";
	d.y3 = "y3="+ui.EditY3->text()+", ";
	d.map0 = "map0="+IntToQStr(ui.comboBoxMap0->currentIndex())+", ";
	d.map1 = "map1="+IntToQStr(ui.comboBoxMap1->currentIndex())+", ";
	d.map2 = "map2="+IntToQStr(ui.comboBoxMap2->currentIndex())+", ";
	d.map3 = "map3="+IntToQStr(ui.comboBoxMap3->currentIndex())+", ";
	d.goalQuest = "goalQuest="+IntToQStr(ui.comboBoxGoalQuest->currentIndex());

	QString resultData = d.idNPC+d.nameQuest+d.textQuest+d.dailyQuest+d.award+d.item+d.rep+d.x0+d.y0+d.x1+d.y1+d.x2+d.y2+d.x3+d.y3+d.map0+d.map1+d.map2+d.map3+d.goalQuest;
	QString resultSQL = "UPDATE quest SET "+resultData+" WHERE id="+IntToQStr(idQuestEdit)+";";
	
	ui.textEditResultSQL->setText(resultSQL);
	DB.query(resultSQL);
	ButtonClearClick();
	ShowDataTable();
}

QString EditQuest::toText(QTextEdit* te)
{
	QString buf;
	for (int i = 0; i < te->document()->lineCount(); i++)
		buf.append(te->document()->findBlockByLineNumber(i).text());
	return buf;
}

void EditQuest::ButtonDeleteQuestClick()
{
	QString resultSQL = "DELETE FROM quest WHERE (`id`='"+IntToQStr(idQuestEdit)+"');";
	
	ui.textEditResultSQL->setText(resultSQL);
	DB.query(resultSQL);
}

void EditQuest::ShowDataTable()
{
	QTableWidgetItem * items;

	QString strSql = "SELECT * FROM quest;";
	QSqlQuery sql = DB.query(strSql);

	ui.tableWidget->setRowCount(sql.numRowsAffected());

	QSqlRecord rec = sql.record();
	
	int i = 0;
	/*while (sql.next())
	{
		items = new QTableWidgetItem(sql.value(rec.indexOf("id")).toString());
		ui.tableWidget->setItem(i,0,items);

		items = new QTableWidgetItem(sql.value(rec.indexOf("idNPC")).toString());
		ui.tableWidget->setItem(i,1,items);

		i++;
	}*/
}

// geometry
void EditQuest::ButtomButtonGeometr0Click()
{
	MapsGeometry m(0, ui.EditX0, ui.EditY0, ui.comboBoxMap0->currentIndex());
	m.exec();
}

void EditQuest::ButtomButtonGeometr1Click()
{
	MapsGeometry m(0, ui.EditX1, ui.EditY1, ui.comboBoxMap1->currentIndex());
	m.exec();
}

void EditQuest::ButtomButtonGeometr3Click()
{
	MapsGeometry m(0, ui.EditX2, ui.EditY2, ui.comboBoxMap2->currentIndex());
	m.exec();
}

void EditQuest::ButtomButtonGeometr4Click()
{
	MapsGeometry m(0, ui.EditX3, ui.EditY3, ui.comboBoxMap3->currentIndex());
	m.exec();
}
