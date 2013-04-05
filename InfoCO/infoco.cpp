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

// для теста
#include "QuestMap.h"

InfoCO::InfoCO(QWidget *parent): QDialog(parent, Qt::WindowSystemMenuHint | Qt::WindowMinimizeButtonHint | Qt::WindowStaysOnTopHint)
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

	// настройки trayIcon
	restoreAction = new QAction(QString("Возобновить"), this);
	quitAction = new QAction(QString("Выход"), this);

	QFont fontRA;
	fontRA.setFamily(QString("Segoe Print"));
	restoreAction->setFont(fontRA);

	QFont fontQA;
	fontQA.setFamily(QString("Segoe Print"));
	quitAction->setFont(fontRA);

	connect(restoreAction, SIGNAL(triggered()), this, SLOT(showNormal()));
    connect(quitAction, SIGNAL(triggered()), qApp, SLOT(quit()));

	trayIconMenu = new QMenu(this);
    trayIconMenu->addAction(restoreAction);
    trayIconMenu->addSeparator();
    trayIconMenu->addAction(quitAction);

    trayIcon = new QSystemTrayIcon(this);
    trayIcon->setContextMenu(trayIconMenu);
	trayIcon->setIcon(QIcon("img/sZOInfo.png"));
	// Временно, пока нет опций
	setVisible(true);

	connect(trayIcon, SIGNAL(activated(QSystemTrayIcon::ActivationReason)),this, SLOT(RenewDoubleClick(QSystemTrayIcon::ActivationReason)));

	trayIcon->show();
}

void InfoCO::ButtonCalcClick()
{
	CalcEx CalcForm;
	close();
	CalcForm.exec();
}

void InfoCO::ButtonListClick()
{
	List listForm;
	close();
	listForm.exec();
}

void InfoCO::ButtonMapsClick()
{
	Maps mapsForm;
	close();
	mapsForm.exec();
}

void InfoCO::ButtonQuestClic()
{
	/*quest questForm;
	questForm.setGeometry(300,300,20,20);
	questForm.exec();*/
	QuestMap QuestMapForm;
	close();
	QuestMapForm.exec();
}

void InfoCO::ButtonBlocClick()
{
	miniNotebook miniNotebookForm;
	close();
	miniNotebookForm.exec();
}

void InfoCO::ButtoninfoClick()
{
	InfoProg progForm;
	close();
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

// tray
void InfoCO::changeEvent(QEvent* event)
{
	if(event->type() == QEvent::WindowStateChange && isMinimized())
	{
		QTimer::singleShot(0, this, SLOT(hide()));
		event->ignore();
	}
}

void InfoCO::RenewDoubleClick(QSystemTrayIcon::ActivationReason reason)
{
	if(reason == 2)
	{
		showNormal();
	}

	switch (reason)
	{
    case QSystemTrayIcon::Trigger:
    case QSystemTrayIcon::DoubleClick:
		//showNormal();
        break;
    case QSystemTrayIcon::MiddleClick:
        break;
	}
}