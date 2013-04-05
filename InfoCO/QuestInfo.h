/*
*
*/
#ifndef QUESTINFO_H
#define QUESTINFO_H

#include "ui_QuestInfo.h"
#include "SqlliteDB.h"
#include <QtGui>

class QuestInfo : public QDialog
{
	Q_OBJECT

public:
	QuestInfo(QWidget *parent = 0, int Map = 0);
	~QuestInfo();
	int returnCountGoal();

private slots:
	void ButtomOpenPClick();
	void ButtomClosePClick();
	void ButtonBackClick();
	void ButtonToMainClick();
	void ListNpcClick();
	void ListQuestClick();
	void ButtonGoalToMapsClick();
	void ButtomShowNpcMapClick();

private:
	QString IntToQStr(int integer);
	Ui::QuestInfo ui;
	int IDMap;
	int idNPC;
	SqlliteDB DB;

	int mapX[4], mapY[4], Tmap[4];
	int posNpcX, posNpcY, posNpcMap;
};

#endif // QUESTINFO_H