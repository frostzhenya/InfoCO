/*
*
*/

#ifndef INFOCO_H
#define INFOCO_H

#include <QtGui/QDialog>
#include "ui_infoco.h"

class InfoCO : public QDialog
{
	Q_OBJECT

public:
	InfoCO(QWidget *parent = 0);
	~InfoCO();

private slots:
	void ButtonListClick();
	void ButtonCalcClick();
	void ButtonMapsClick();
	void ButtonQuestClic();
	void ButtonBlocClick();
	void ButtoninfoClick();
	// скрытые кнопки
	void ButtonEditQuestClick();

private:
	Ui::InfoCOClass ui;
};

#endif // INFOCO_H
