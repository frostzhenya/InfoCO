/*
*
*/
#ifndef EDITQUEST_H
#define EDITQUEST_H

#include "ui_EditQuest.h"
#include "SqlliteDB.h"

class EditQuest : public QDialog
{
	Q_OBJECT

public:
	EditQuest(QWidget *parent = 0);
	~EditQuest();

	QString toText(QTextEdit* te);
	void ShowDataTable();

private slots:
	void comboBoxMapChanged();
	void ButtonNPCClick();
	void ButtonQuestClick();
	void ButtonClearClick();
	void ButtonAddQuestClick();
	void ButtonEditQuestClick();
	void ButtonDeleteQuestClick();

	// geometry
	void ButtomButtonGeometr0Click();
	void ButtomButtonGeometr1Click();
	void ButtomButtonGeometr3Click();
	void ButtomButtonGeometr4Click();

private:
	QString IntToQStr(int integer);
	SqlliteDB DB;
	Ui::EditDataBase ui;
	QSqlQuery query;
	int idQuestEdit;
	int idNPC;
	int idMap;
};

#endif
