/*
*
*/

#ifndef LIST_H
#define LIST_H

#include <QtGui/QDialog>
#include "ui_list.h"
#include "SqlliteDB.h"
#include <QtCore/qstring.h>

class List : public QDialog
{
	Q_OBJECT

public:
	List(QWidget *parent = 0);
	~List();

private slots:
	void ShowListClic();
	void OptChanged();
	void ButtonBack();

private:
	SqlliteDB DB;
	int saveIndex;
	QString saveOptStr;
	Ui::List ui;
};

#endif // LIST_H