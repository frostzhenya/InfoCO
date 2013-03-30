/*
*
*/

#ifndef INFOPROGRAM_H
#define INFOPROGRAM_H

#include <QtGui/QDialog>
#include "ui_InfoProgram.h"

class InfoProg : public QDialog
{
	Q_OBJECT

public:
	InfoProg(QWidget *parent = 0);
	~InfoProg();

/*private slots:
	void ButtonCloseClick();*/

private:
	Ui::InfoProgramm ui;
};

#endif // INFOPROGRAM_H