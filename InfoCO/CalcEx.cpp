/*
*
*/

#include "CalcEx.h"
#include <QtCore\QTextCodec>
#include <cmath>
#include <string>

CalcEx::CalcEx(QWidget *parent, Qt::WFlags flags)
	: QDialog(parent, flags)
{
	ui.setupUi(this);

	// ���������� ��������� CP1251
	QTextCodec *langcodec = QTextCodec::codecForName("Windows-1251");
    QTextCodec::setCodecForTr(langcodec);
	QTextCodec::setCodecForCStrings(langcodec);
	QTextCodec::setCodecForLocale(langcodec);

	QRegExp RegExp("[0-9]{0,3}");
	ui.EditCurrentNumLvl->setValidator(new QRegExpValidator(RegExp, this));
	ui.EditDesiredNumLvl->setValidator(new QRegExpValidator(RegExp, this));

	connect(ui.ButtomClose,SIGNAL(clicked()),this,SLOT(accept()));
	connect(ui.ButtomCalc,SIGNAL(clicked()),this,SLOT(CalcToExp()));
}

void CalcEx::CalcToExp()
{
	int currentEx;
	int desiredEx;
	currentEx = 1000*exp(double(ui.EditCurrentNumLvl->text().toInt() - 2));
	desiredEx = 1000*exp(double(ui.EditDesiredNumLvl->text().toInt() - 2));
	int result = desiredEx - currentEx;

	char buf1[20],buf2[3];
    sprintf(buf1,"%d",result);
	sprintf(buf2,"%d",ui.EditDesiredNumLvl->text().toInt());

	std::string fullStr = "��� ��������� ";
	fullStr += buf2;
	fullStr += "-�� ������ ��� ����������� ";
	fullStr += buf1;
	fullStr += " �����.";
	ui.ResultTxt->setText(QObject::tr(fullStr.c_str()));
}

CalcEx::~CalcEx()
{

}