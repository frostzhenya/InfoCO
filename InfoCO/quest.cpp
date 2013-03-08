/*
*
*/

#include "quest.h"

quest::quest(QWidget *parent): QDialog(parent)
{
	ui.setupUi(this);

	connect(ui.ButtomChoice,SIGNAL(clicked()),this,SLOT(ButtomChoiceClick()));
	connect(ui.ButtomChoiceName,SIGNAL(clicked()),this,SLOT(ButtomButtomChoiceNameClick()));

	xml = new xmlData("QuestData.xml");
	xml->OpenXml(); // требуется проверка загрузился ли файл

	// нач. настройки
	ui.OptDopBox->setVisible(false);
	ui.MainBox->setVisible(false);
}

quest::~quest()
{
}

void quest::ButtomChoiceClick()
{
	int currentindex = ui.LocBox->currentIndex();

	ui.OptDopBox->setVisible(true);
	ui.MainBox->setVisible(true);

	ui.NameBox->clear();

	switch(currentindex)
	{
	case 0:
		xml->ShowXmlfullQComboBox(ui.NameBox, "NameNpcStation");
		break;
	case 1:
		xml->ShowXmlfullQComboBox(ui.NameBox, "NameNpcTerminal");
		break;
	case 2:
		xml->ShowXmlfullQComboBox(ui.NameBox, "NameNpcForest");
		break;
	case 3:
		xml->ShowXmlfullQComboBox(ui.NameBox, "NameNpcVesuvius");
		break;
	case 4:
		xml->ShowXmlfullQComboBox(ui.NameBox, "NameNpcTheNewEarth");
		break;
	case 5:
		xml->ShowXmlfullQComboBox(ui.NameBox, "NameNpcTunguska");
		break;
	}
}

void quest::ButtomButtomChoiceNameClick()
{
	int currentindexName = ui.NameBox->currentIndex();
	int currentindex = ui.LocBox->currentIndex();

	ui.textEdit->clear();
	//xml->ShowXmlQuest(ui.textEdit, "QuestStation", xml->ReturnDomElement(), currentindexName);
	switch(currentindex)
	{
	case 0:
		xml->ShowXmlQuest(ui.textEdit, "QuestStation", xml->ReturnDomElement(), currentindexName);
		break;
	case 1:
		xml->ShowXmlQuest(ui.textEdit, "QuestTerminal", xml->ReturnDomElement(), currentindexName);
		break;
	case 2:
		xml->ShowXmlQuest(ui.textEdit, "QuestForest", xml->ReturnDomElement(), currentindexName);
		break;
	case 3:
		xml->ShowXmlQuest(ui.textEdit, "QuestVesuvius", xml->ReturnDomElement(), currentindexName);
		break;
	case 4:
		xml->ShowXmlQuest(ui.textEdit, "QuestTheNewEarth", xml->ReturnDomElement(), currentindexName);
		break;
	case 5:
		xml->ShowXmlQuest(ui.textEdit, "NameNpcTunguska", xml->ReturnDomElement(), currentindexName);
		break;
	}
}