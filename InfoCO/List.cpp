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
	ui.EditDebug->setGeometry(10,370,999,999);
	ui.ListView->setGeometry(220,20,999,999);
	ui.groupBoxTypeClan->setEnabled(false);
	ui.groupBoxTypeStalkers->setEnabled(false);

	connect(ui.ButtomAcceptList,SIGNAL(clicked()),this,SLOT(ShowListClic()));
	connect(ui.ButtomClose,SIGNAL(clicked()),this,SLOT(accept()));
	connect(ui.ButtomEditList,SIGNAL(clicked()),this,SLOT(OpenOptionList()));
	connect(ui.ButtomEditListClose,SIGNAL(clicked()),this,SLOT(CloseOptionList()));
	connect(ui.ButtomAddName,SIGNAL(clicked()),this,SLOT(addNameToList()));
	connect(ui.OptList,SIGNAL(currentIndexChanged(int)),this,SLOT(OptChanged()));

	xml = new xmlData("InfoCOData.xml");
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
	ui.ListView->clear();
	xml->DisableSearchNameToList(); //fixed bugs

	if(LoadXML)
	{
		if(ui.OptList->currentIndex() == 0)
			ui.ListView->clear();
		else if(ui.OptList->currentIndex() == 1)
		{
			if(ui.radioBpk->isChecked())
			{
				xml->ShowXmlfullQListWidget(ui.ListView,"listPK");
				saveOptStr = ui.radioBpk->text();
			}
			else if(ui.radioBkd->isChecked())
			{
				xml->ShowXmlfullQListWidget(ui.ListView,"listKD");
				saveOptStr = ui.radioBkd->text();
			}
		}
		else if(ui.OptList->currentIndex() == 2)
		{
			if(ui.radioBAPK->isChecked())
			{
				xml->ShowXmlfullQListWidget(ui.ListView,"listKlanAPK");
				saveOptStr = ui.radioBAPK->text();
			}
			else if(ui.radioBPK->isChecked())
			{
				xml->ShowXmlfullQListWidget(ui.ListView,"listKlanPK");
				saveOptStr = ui.radioBPK->text();
			}
			else if(ui.radioBM->isChecked())
			{
				xml->ShowXmlfullQListWidget(ui.ListView,"listKlanM");
				saveOptStr = ui.radioBM->text();
			}
			else if(ui.radioBRP->isChecked())
			{
				xml->ShowXmlfullQListWidget(ui.ListView,"listKlanRP");
				saveOptStr = ui.radioBRP->text();
			}
			else if(ui.radioBN->isChecked())
			{
				xml->ShowXmlfullQListWidget(ui.ListView,"listKlan");
				saveOptStr = ui.radioBN->text();
			}
		}
		else if(ui.OptList->currentIndex() == 3)
		{
			if(ui.radioBpk->isChecked())
			{
				xml->AllowSearchNameToList(ui.LaineNameSeach);
				xml->ShowXmlfullQListWidget(ui.ListView,"listPK");
				if(!xml->seach())
					ui.ListView->addItem(QObject::tr("Не найдено!!!"));
			}
			else if(ui.radioBkd->isChecked())
			{
				xml->AllowSearchNameToList(ui.LaineNameSeach);
				xml->ShowXmlfullQListWidget(ui.ListView,"listKD");
				if(!xml->seach())
					ui.ListView->addItem(QObject::tr("Не найдено!!!"));
			}
		}
		else if(ui.OptList->currentIndex() == 4)
		{
			if(ui.radioBAPK->isChecked())
			{
			}
			else if(ui.radioBPK->isChecked())
			{
				xml->AllowSearchNameToList(ui.LaineNameSeach);
				xml->ShowXmlfullQListWidget(ui.ListView,"listKlanPK");
				if(!xml->seach())
					ui.ListView->addItem(QObject::tr("Не найдено!!!"));
			}
			else if(ui.radioBM->isChecked())
			{
				xml->AllowSearchNameToList(ui.LaineNameSeach);
				xml->ShowXmlfullQListWidget(ui.ListView,"listKlanM");
				if(!xml->seach())
					ui.ListView->addItem(QObject::tr("Не найдено!!!"));
			}
			else if(ui.radioBRP->isChecked())
			{
				xml->AllowSearchNameToList(ui.LaineNameSeach);
				xml->ShowXmlfullQListWidget(ui.ListView,"listKlanRP");
				if(!xml->seach())
					ui.ListView->addItem(QObject::tr("Не найдено!!!"));
			}
			else if(ui.radioBN->isChecked())
			{
				xml->AllowSearchNameToList(ui.LaineNameSeach);
				xml->ShowXmlfullQListWidget(ui.ListView,"listKlan");
				if(!xml->seach())
					ui.ListView->addItem(QObject::tr("Не найдено!!!"));
			}
		}
	}
	else
		ui.groupBox->setEnabled(false);
}

void List::OpenOptionList()
{
	if(ui.OptList->currentIndex() == 0 || ui.OptList->currentIndex() == 3 || ui.OptList->currentIndex() == 4)
	{
		ui.EditDebug->setText(QObject::tr("Вы не выбрали Тип Списка"));
	}
	else
	{
		ShowListClic();
		ui.ButtomAcceptList->setEnabled(false);
		ui.OptList->setEnabled(false);
		ui.LaineNameSeach->setEnabled(false);
		ui.EditDebug->setGeometry(10,370,999,1);
		ui.ListView->setGeometry(220,20,999,1);
		ui.ButtomEditList->setEnabled(false);
		ui.ButtomClose->setEnabled(false);

		ui.groupBoxEdit->setHidden(false);
		ui.groupBoxEdit->setEnabled(true);

		ui.groupBoxTypeClan->setEnabled(false);
		ui.groupBoxTypeStalkers->setEnabled(false);

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
	ui.EditDebug->setGeometry(10,370,999,999);
	ui.ListView->setGeometry(220,20,999,999);
	ui.ButtomEditList->setEnabled(true);
	ui.ButtomClose->setEnabled(true);

	ui.groupBoxEdit->setEnabled(false);
	ui.groupBoxEdit->setHidden(true);

	ui.groupBoxTypeClan->setEnabled(true);
	ui.groupBoxTypeStalkers->setEnabled(true);

	// fixed bugs
	if(ui.OptList->currentIndex() == 1)
	{
		ui.groupBoxTypeStalkers->setEnabled(true);
		ui.groupBoxTypeClan->setEnabled(false);
	}
	else if(ui.OptList->currentIndex() == 2)
	{
		ui.groupBoxTypeStalkers->setEnabled(false);
		ui.groupBoxTypeClan->setEnabled(true);
	}

	ShowListClic();
}

void List::addNameToList()
{
	if(ui.OptList->currentIndex() == 1)
	{
		if(ui.radioBpk->isChecked())
		{
			xml->addElementToFile("listPK",ui.EditName->text());
			ShowListClic();
			ui.EditName->clear();
		}
		else if(ui.radioBkd->isChecked())
		{
			xml->addElementToFile("listKD",ui.EditName->text());
			ShowListClic();
			ui.EditName->clear();
		}
	}
	else if(ui.OptList->currentIndex() == 2)
	{
		if(ui.radioBAPK->isChecked())
		{
			xml->addElementToFile("listKlanAPK",ui.EditName->text());
			ShowListClic();
			ui.EditName->clear();
		}
		else if(ui.radioBPK->isChecked())
		{
			xml->addElementToFile("listKlanPK",ui.EditName->text());
			ShowListClic();
			ui.EditName->clear();
		}
		else if(ui.radioBM->isChecked())
		{
			xml->addElementToFile("listKlanM",ui.EditName->text());
			ShowListClic();
			ui.EditName->clear();
		}
		else if(ui.radioBRP->isChecked())
		{
			xml->addElementToFile("listKlanRP",ui.EditName->text());
			ShowListClic();
			ui.EditName->clear();
		}
		else if(ui.radioBN->isChecked())
		{
			xml->addElementToFile("listKlan",ui.EditName->text());
			ShowListClic();
			ui.EditName->clear();
		}
	}
}

void List::OptChanged()
{
	int currentIndex = ui.OptList->currentIndex();

	switch(currentIndex)
	{
	case 1:
		ui.groupBoxTypeClan->setEnabled(false);
		ui.groupBoxTypeStalkers->setEnabled(true);
		break;
	case 2:
		ui.groupBoxTypeClan->setEnabled(true);
		ui.groupBoxTypeStalkers->setEnabled(false);
		break;
	case 3:
		ui.groupBoxTypeClan->setEnabled(false);
		ui.groupBoxTypeStalkers->setEnabled(true);
		break;
	case 4:
		ui.groupBoxTypeClan->setEnabled(true);
		ui.groupBoxTypeStalkers->setEnabled(false);
		break;
	default:
		ui.groupBoxTypeClan->setEnabled(false);
		ui.groupBoxTypeStalkers->setEnabled(false);
		break;
	}
}