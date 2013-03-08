/*
*
*/

#ifndef LIST_H
#define LIST_H

#include <QtGui/QDialog>
#include "ui_list.h"
#include "xmlData.h"
#include <QtCore/qstring.h>

class List : public QDialog
{
	Q_OBJECT

public:
	List(QWidget *parent = 0, Qt::WFlags flags = 0);
	~List();

private slots:
	void ShowListClic();
	void OpenOptionList();
	void CloseOptionList();
	void addNameToList();
	void OptChanged();

private:
	bool LoadXML;
	xmlData* xml;
	int saveIndex;
	QString saveOptStr;
	Ui::List ui;
};

#endif // LIST_H