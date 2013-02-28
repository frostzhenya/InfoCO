/*
* Класс для работы с DB for Access
*/

#ifndef DBACCESS_H
#define DBACCESS_H

#include <QtGui/QListWidget>
#include <qxml.h>
#include <qdom.h>

class xmlData
{
public:
	xmlData();
	~xmlData();
	bool OpenXml();
	void ShowXmlfull(QListWidget *listView, char* nameList);
	int CountElementLastReadXml();
	void addElementToFile(QString TypeOpt, QString addstr);
	void AllowSearchNameToList();
	void DisableSearchNameToList();
	QDomElement makeElement(QDomDocument& domDocument, const QString& strName, const QString& strAttr, const QString& strText);

private:
	bool seachToList;
	int countNameList;
	QDomDocument domDoc;
	QDomElement domElem;
	QFile xmlFile;
};

#endif //DBACCESS_H