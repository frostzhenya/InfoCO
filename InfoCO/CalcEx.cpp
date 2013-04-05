/*
*
*/

#include "CalcEx.h"
#include <QtCore\QTextCodec>
#include <cmath>
#include <string>
#include "infoco.h"

CalcEx::CalcEx(QWidget *parent): QDialog(parent, Qt::WindowStaysOnTopHint | Qt::CustomizeWindowHint)
{
	ui.setupUi(this);

	// используем кодировку CP1251
	QTextCodec *langcodec = QTextCodec::codecForName("Windows-1251");
    QTextCodec::setCodecForTr(langcodec);
	QTextCodec::setCodecForCStrings(langcodec);
	QTextCodec::setCodecForLocale(langcodec);

	QRegExp RegExp("[0-9]{0,3}");
	ui.EditCurrentNumLvl->setValidator(new QRegExpValidator(RegExp, this));
	ui.EditDesiredNumLvl->setValidator(new QRegExpValidator(RegExp, this));

	connect(ui.ButtomClose,SIGNAL(clicked()),this,SLOT(ButtonBack()));
	connect(ui.ButtomCalc,SIGNAL(clicked()),this,SLOT(CalcToExp()));
}

void CalcEx::CalcToExp()
{
	int currentEx;
	int desiredEx;
	currentEx = returnExp(ui.EditCurrentNumLvl->text().toInt());
	desiredEx = returnExp(ui.EditDesiredNumLvl->text().toInt());
	int result = desiredEx - currentEx;

	char buf1[20],buf2[3];
    sprintf(buf1,"%d",result);
	sprintf(buf2,"%d",ui.EditDesiredNumLvl->text().toInt());

	std::string fullStr = "Для повышения ";
	fullStr += buf2;
	fullStr += "-го уровня вам понадобится ";
	fullStr += buf1;
	fullStr += " опыта.";
	ui.ResultTxt->setText(QObject::tr(fullStr.c_str()));

}

CalcEx::~CalcEx()
{

}

void CalcEx::ButtonBack()
{
	InfoCO sZoneInfo;
	close();
	sZoneInfo.exec();
}

int CalcEx::returnExp(int lvl)
{
	int currentEx;

	switch(lvl)
	{
	case 1:
		currentEx = 0;
		break;
	case 2:
		currentEx = 1000;
		break;
	case 3:
		currentEx = 2718;
		break;
	case 4:
		currentEx = 7389;
		break;
	case 5:
		currentEx = 20085;
		break;
	case 6:
		currentEx = 54598;
		break;
	case 7:
		currentEx = 148413;
		break;
	case 8:
		currentEx = 403428;
		break;
	case 9:
		currentEx = 1096633;
		break;
	case 10:
		currentEx = 2200000;
		break;
	case 11:
		currentEx = 3200000;
		break;
	case 12:
		currentEx = 4200000;
		break;
	case 13:
		currentEx = 5200000;
		break;
	case 14:
		currentEx = 6200000;
		break;
	case 15:
		currentEx = 7200000;
		break;
	case 16:
		currentEx = 8200000;
		break;
	case 17:
		currentEx = 9200000;
		break;
	case 18:
		currentEx = 10200000;
		break;
	case 19:
		currentEx = 11200000;
		break;
	case 20:
		currentEx = 12200000;
		break;
	case 21:
		currentEx = 17200000;
		break;
	case 22:
		currentEx = 22200000;
		break;
	case 23:
		currentEx = 27200000;
		break;
	case 24:
		currentEx = 32200000;
		break;
	case 25:
		currentEx = 37200000;
		break;
	case 26:
		currentEx = 42200000;
		break;
	case 27:
		currentEx = 47200000;
		break;
	case 28:
		currentEx = 52200000;
		break;
	case 29:
		currentEx = 57200000;
		break;
	case 30:
		currentEx = 62200000;
		break;
	}

	return currentEx;
}