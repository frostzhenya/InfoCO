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
	void ChoiceDialog();

private:
	int TypeOpt;
	Ui::InfoCOClass ui;
};

#endif // INFOCO_H
