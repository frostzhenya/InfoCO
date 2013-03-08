/*
*
*/

#ifndef CALCEX_H
#define CALCEX_H

#include <QtGui/QDialog>
#include "ui_FormCalcEx.h"
#include <QtGui\qwidget.h>

class CalcEx : public QDialog
{
	Q_OBJECT

public:
	CalcEx(QWidget *parent = 0, Qt::WFlags flags = 0);
	~CalcEx();

private slots:
	void CalcToExp();

private:
	Ui::FormCalcEx ui;
};

#endif // CALCEX_H

