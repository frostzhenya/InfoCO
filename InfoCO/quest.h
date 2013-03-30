/*
*
*/

#ifndef QUEST_H
#define QUEST_H

#include <QtGui/QDialog>
#include "ui_quest.h"
#include "SqlliteDB.h"

class quest : public QDialog
{
	Q_OBJECT

public:
	quest(QWidget *parent = 0);
	~quest();

private slots:
	void ButtomChoiceClick();
	void ButtomChoiceNameClick();
	void ButtomChoiceQuestClick();
	void ButtonGoalToMapsClick();
	void ButtomShowNpcMapClick();
	int returnCountGoal();

private:
	int mapX[4], mapY[4], Tmap[4];
	int posNpcX, posNpcY, posNpcMap;
	int idNPC;
	
	SqlliteDB DB;
	Ui::quest ui;
};

#endif // QUEST_H