/*
*
*/

#include "infoco.h"
#include "CalcEx.h"
#include "List.h"
#include "Maps.h"
#include "quest.h"
#include "miniNotebook.h"
#include "InfoProgram.h"
#include "EditQuest.h"
#include <QtCore/qtextcodec.h>
#include <QtGui/qmessagebox.h>
#include <QtSql>
#include "SqlliteDB.h"

InfoCO::InfoCO(QWidget *parent): QDialog(parent)
{
	ui.setupUi(this);

	QTextCodec *langcodec = QTextCodec::codecForName("Windows-1251");
    QTextCodec::setCodecForTr(langcodec);
	QTextCodec::setCodecForCStrings(langcodec);
	QTextCodec::setCodecForLocale(langcodec);

	connect(ui.ButtonList,SIGNAL(clicked()),this,SLOT(ButtonListClick()));
	connect(ui.ButtonCalc,SIGNAL(clicked()),this,SLOT(ButtonCalcClick()));
	connect(ui.ButtonMaps,SIGNAL(clicked()),this,SLOT(ButtonMapsClick()));
	connect(ui.ButtonQuest,SIGNAL(clicked()),this,SLOT(ButtonQuestClic()));
	connect(ui.ButtonBloc,SIGNAL(clicked()),this,SLOT(ButtonBlocClick()));
	connect(ui.ButtonInfo,SIGNAL(clicked()),this,SLOT(ButtoninfoClick()));
	//скрытые
	connect(ui.ButtonEditQuest,SIGNAL(clicked()),this,SLOT(ButtonEditQuestClick()));
}

void InfoCO::ButtonListClick()
{
	List listForm;
	listForm.exec();
}

void InfoCO::ButtonCalcClick()
{
	CalcEx CalcForm;
	CalcForm.exec();
}

void InfoCO::ButtonMapsClick()
{
	Maps mapsForm;
	mapsForm.exec();
}

void InfoCO::ButtonQuestClic()
{
	quest questForm;
	questForm.setGeometry(300,300,20,20);
	questForm.exec();
}

void InfoCO::ButtonBlocClick()
{
	miniNotebook miniNotebookForm;
	miniNotebookForm.exec();
}

void InfoCO::ButtoninfoClick()
{
	InfoProg progForm;
	progForm.exec();
}

InfoCO::~InfoCO()
{

}

//скрытые
void InfoCO::ButtonEditQuestClick()
{
	EditQuest EditQuestForm;
	EditQuestForm.exec();
}