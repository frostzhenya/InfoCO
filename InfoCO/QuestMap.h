/*
*
*/
#ifndef QUESTMAP_H
#define QUESTMAP_H

#include "ui_QuestMap.h"
#include <QtGui>

class QuestMap : public QDialog
{
	Q_OBJECT

public:
	QuestMap(QWidget *parent = 0);
	~QuestMap();
	int resultIdMap();

private slots:
	void ButtonBackClick();
	void ButtonAcceptClick();

private:
	Ui::QuestMap ui;
};

#endif // QUESTMAP_H