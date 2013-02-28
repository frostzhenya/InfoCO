/*
*
*
*/

#include <QtCore/qtextcodec.h>
#include "List.h"

List::List(QWidget *parent, Qt::WFlags flags): QDialog(parent, flags)
{
	ui.setupUi(this);

	// используем кодировку CP1251
	QTextCodec *langcodec = QTextCodec::codecForName("Windows-1251");
    QTextCodec::setCodecForTr(langcodec);
	QTextCodec::setCodecForCStrings(langcodec);
	QTextCodec::setCodecForLocale(langcodec);

	// нач. настройки формы
	ui.groupBoxEdit->setHidden(true);
	ui.EditDebug->setGeometry(10,170,999,999);
	ui.ListView->setGeometry(220,40,999,999);

	connect(ui.ButtomAcceptList,SIGNAL(clicked()),this,SLOT(ShowListClic()));
	connect(ui.ButtomClose,SIGNAL(clicked()),this,SLOT(accept()));
	connect(ui.ButtomEditList,SIGNAL(clicked()),this,SLOT(OpenOptionList()));
	connect(ui.ButtomEditListClose,SIGNAL(clicked()),this,SLOT(CloseOptionList()));
	connect(ui.ButtomAddName,SIGNAL(clicked()),this,SLOT(addNameToList()));

	xml = new xmlData();
	if(!xml->OpenXml())
	{
		LoadXML = false;
		ui.EditDebug->setText(QObject::tr("Данных по спискам не найдены!\nУбедитесь что файл InfoCOData.xml лежит в папке с программой!"));
	}
	else
	{
		ui.groupBox->setEnabled(true);
		LoadXML = true;
	}
}

List::~List()
{
}

void List::ShowListClic()
{
	int TypeOpt = ui.OptList->currentIndex();
	ui.ListView->clear();

	if(LoadXML)
	{
		switch(TypeOpt)
		{
		case 0:
			ui.ListView->clear();
			break;
		case 1:
			xml->ShowXmlfull(ui.ListView,"listPK");
			break;
		case 2:
			xml->ShowXmlfull(ui.ListView,"listKD");
			break;
		case 3:
			xml->ShowXmlfull(ui.ListView,"listKlan");
			break;
		case 4:
			xml->ShowXmlfull(ui.ListView,"listKlanPK");
			break;
		}
	}
	else
		ui.groupBox->setEnabled(false);

	saveOptStr = ui.OptList->currentText();
///////////////////////////////////////////////////
	char buf[3];
	sprintf(buf,"%d",TypeOpt);
	std::string s = "Num option sucessful:";
	s += buf;
//////////////////////////////////////////////////
	ui.EditDebug->setText(QObject::tr(s.c_str()));
}

void List::OpenOptionList()
{
	if(ui.OptList->currentIndex() == 0)
	{
		ui.EditDebug->setText(QObject::tr("Вы не выбрали Тип Списка"));
	}
	else
	{
		ShowListClic();
		ui.ButtomAcceptList->setEnabled(false);
		ui.OptList->setEnabled(false);
		ui.LaineNameSeach->setEnabled(false);
		ui.EditDebug->setGeometry(10,170,999,1);
		ui.ListView->setGeometry(220,40,999,1);
		ui.ButtomEditList->setEnabled(false);
		ui.ButtomClose->setEnabled(false);

		ui.groupBoxEdit->setHidden(false);
		ui.groupBoxEdit->setEnabled(true);

		QString s = QObject::tr("Имя будет добавляться в: ");
		s += saveOptStr;
		ui.TxtEditList->setText(s);
	}
}

void List::CloseOptionList()
{
	ui.ButtomAcceptList->setEnabled(true);
	ui.OptList->setEnabled(true);
	ui.LaineNameSeach->setEnabled(true);
	ui.EditDebug->setGeometry(10,170,999,999);
	ui.ListView->setGeometry(220,40,999,999);
	ui.ButtomEditList->setEnabled(true);
	ui.ButtomClose->setEnabled(true);

	ui.groupBoxEdit->setEnabled(false);
	ui.groupBoxEdit->setHidden(true);

	ShowListClic();
}

void List::addNameToList()
{
	int TypeOpt = ui.OptList->currentIndex();

	switch(TypeOpt)
	{
	case 1:
		xml->addElementToFile("listPK",ui.EditName->text());
		ShowListClic();
		ui.EditName->clear();
		break;
	case 2:
		xml->addElementToFile("listKD",ui.EditName->text());
		ShowListClic();
		ui.EditName->clear();
		break;
	case 3:
		xml->addElementToFile("listKlan",ui.EditName->text());
		ShowListClic();
		ui.EditName->clear();
		break;
	case 4:
		xml->addElementToFile("listKlanPK",ui.EditName->text());
		ShowListClic();
		ui.EditName->clear();
		break;
	}
}