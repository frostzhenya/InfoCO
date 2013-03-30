/*
*
*/

#ifndef MININOTEBOOK_H
#define MININOTEBOOK_H

#include "ui_miniNotebook.h"
#include <QtGui/QDialog>
#include <QtCore/qfile.h>
#include <fstream>
#include <iostream>

class miniNotebook: public QDialog
{
	Q_OBJECT

public:
	miniNotebook(QWidget *parent = 0);
	~miniNotebook();

private slots:
	void ButtomSaveClick();

private:
	std::fstream file;
	Ui::MiniNotebook ui;
};

#endif // MININOTEBOOK_H