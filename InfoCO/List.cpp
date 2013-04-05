/*
*
*
*/

#include <QtCore/qtextcodec.h>
#include "List.h"
#include "infoco.h"

List::List(QWidget *parent): QDialog(parent, Qt::WindowStaysOnTopHint | Qt::CustomizeWindowHint)
{
	ui.setupUi(this);

	// используем кодировку CP1251
	QTextCodec *langcodec = QTextCodec::codecForName("Windows-1251");
    QTextCodec::setCodecForTr(langcodec);
	QTextCodec::setCodecForCStrings(langcodec);
	QTextCodec::setCodecForLocale(langcodec);

	// нач. настройки формы
	ui.groupBoxTypeClan->setEnabled(false);
	ui.groupBoxTypeStalkers->setEnabled(false);

	connect(ui.ButtomAcceptList,SIGNAL(clicked()),this,SLOT(ShowListClic()));
	connect(ui.ButtomClose,SIGNAL(clicked()),this,SLOT(ButtonBack()));
	connect(ui.OptList,SIGNAL(currentIndexChanged(int)),this,SLOT(OptChanged()));

	DB.createConnection();
}

List::~List()
{
}

void List::ShowListClic()
{
	ui.ListView->clear();

	if(ui.OptList->currentIndex() == 0)
		ui.ListView->clear();
	else if(ui.OptList->currentIndex() == 1)
	{
		if(ui.radioBpk->isChecked())
		{
			DB.ShowQListWidget(ui.ListView,"SELECT * FROM listStalkers WHERE type = '0';");
			saveOptStr = ui.radioBpk->text();
		}
		else if(ui.radioBkd->isChecked())
		{
			DB.ShowQListWidget(ui.ListView,"SELECT * FROM listStalkers WHERE type = '1';");
			saveOptStr = ui.radioBkd->text();
		}
	}
	else if(ui.OptList->currentIndex() == 2)
	{
		if(ui.radioBAPK->isChecked())
		{
			//listKlanAPK
			DB.ShowQListWidget(ui.ListView,"SELECT * FROM listClan WHERE type = '0';");
			saveOptStr = ui.radioBAPK->text();
		}
		else if(ui.radioBPK->isChecked())
		{
			//listKlanPK
			DB.ShowQListWidget(ui.ListView,"SELECT * FROM listClan WHERE type = '1';");
			saveOptStr = ui.radioBPK->text();
		}
		else if(ui.radioBM->isChecked())
		{
			//listKlanM
			DB.ShowQListWidget(ui.ListView,"SELECT * FROM listClan WHERE type = '2';");
			saveOptStr = ui.radioBM->text();
		}
		else if(ui.radioBRP->isChecked())
		{
			//listKlanRP
			DB.ShowQListWidget(ui.ListView,"SELECT * FROM listClan WHERE type = '3';");
			saveOptStr = ui.radioBRP->text();
		}
		else if(ui.radioBN->isChecked())
		{
			//listKlan
			DB.ShowQListWidget(ui.ListView,"SELECT * FROM listClan WHERE type = '4';");
			saveOptStr = ui.radioBN->text();
		}
		else if(ui.radioN->isChecked())
		{
			DB.ShowQListWidget(ui.ListView,"SELECT * FROM listClan WHERE type = '5';");
			saveOptStr = ui.radioBN->text();
		}
	} //Далее поиск
	else if(ui.OptList->currentIndex() == 3)
	{
		if(ui.radioBpk->isChecked())
			DB.SeachQListWidget(ui.ListView,"SELECT * FROM listStalkers WHERE type = '0';", ui.LaineNameSeach->text());
		else if(ui.radioBkd->isChecked())
			DB.SeachQListWidget(ui.ListView,"SELECT * FROM listStalkers WHERE type = '1';", ui.LaineNameSeach->text());
	}
	else if(ui.OptList->currentIndex() == 4)
	{
		if(ui.radioBAPK->isChecked())
			DB.SeachQListWidget(ui.ListView,"SELECT * FROM listClan WHERE type = '0';", ui.LaineNameSeach->text());
		else if(ui.radioBPK->isChecked())
			DB.SeachQListWidget(ui.ListView,"SELECT * FROM listClan WHERE type = '1';", ui.LaineNameSeach->text());
		else if(ui.radioBM->isChecked())
			DB.SeachQListWidget(ui.ListView,"SELECT * FROM listClan WHERE type = '2';", ui.LaineNameSeach->text());
		else if(ui.radioBRP->isChecked())
			DB.SeachQListWidget(ui.ListView,"SELECT * FROM listClan WHERE type = '3';", ui.LaineNameSeach->text());
		else if(ui.radioBN->isChecked())
			DB.SeachQListWidget(ui.ListView,"SELECT * FROM listClan WHERE type = '4';", ui.LaineNameSeach->text());
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

void List::ButtonBack()
{
	InfoCO sZoneInfo;
	close();
	sZoneInfo.exec();
}