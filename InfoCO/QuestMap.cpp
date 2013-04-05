/*
*
*/

#include "QuestMap.h"
#include "infoco.h"
#include "QuestInfo.h"

QuestMap::QuestMap(QWidget *parent): QDialog(parent, Qt::WindowStaysOnTopHint | Qt::CustomizeWindowHint)
{
	ui.setupUi(this);

	// используем кодировку CP1251
	QTextCodec *langcodec = QTextCodec::codecForName("Windows-1251");
    QTextCodec::setCodecForTr(langcodec);
	QTextCodec::setCodecForCStrings(langcodec);
	QTextCodec::setCodecForLocale(langcodec);

	connect(ui.ButtonBack,SIGNAL(clicked()),this,SLOT(ButtonBackClick()));
	connect(ui.ButtonAccept,SIGNAL(clicked()),this,SLOT(ButtonAcceptClick()));
}


QuestMap::~QuestMap()
{

}

void QuestMap::ButtonBackClick()
{
	InfoCO sZoneInfo;
	close();
	sZoneInfo.exec();
}

void QuestMap::ButtonAcceptClick()
{

	QuestInfo QuestInfoForm(0, resultIdMap());
	close();
	QuestInfoForm.exec();
}

int QuestMap::resultIdMap()
{
	int IdMap = 0;
	if(ui.rBLoc0->isChecked())
		IdMap = 0;
	else if(ui.rBLoc1->isChecked())
		IdMap = 1;
	else if(ui.rBLoc2->isChecked())
		IdMap = 2;
	else if(ui.rBLoc3->isChecked())
		IdMap = 3;
	else if(ui.rBLoc4->isChecked())
		IdMap = 4;
	else if(ui.rBLoc5->isChecked())
		IdMap = 5;

	return IdMap;
}