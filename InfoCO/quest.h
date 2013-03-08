/*
*
*/

#ifndef QUEST_H
#define QUEST_H

#include <QtGui/QDialog>
#include "ui_quest.h"
#include "xmlData.h"

class quest : public QDialog
{
	Q_OBJECT

public:
	quest(QWidget *parent = 0);
	~quest();

private slots:
	void ButtomChoiceClick();
	void ButtomButtomChoiceNameClick();

private:
	xmlData* xml;
	Ui::quest ui;
};

#endif // QUEST_H