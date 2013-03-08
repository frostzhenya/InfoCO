/*
* Класс для работы с DB for Access
*/

#ifndef DBACCESS_H
#define DBACCESS_H

#include <QtGui/QListWidget>
#include <qxml.h>
#include <qdom.h>
#include <QtGui/QLineEdit>
#include <QtGui/QComboBox>
#include <QtGui/QTextEdit>

class xmlData
{
public:
	xmlData(QString nameFile);
	~xmlData();
	bool OpenXml();
	void ShowXmlfullQListWidget(QListWidget *listView, char* nameList);
	void ShowXmlfullQComboBox(QComboBox * box, char* nameList);
	void ShowXmlQuest(QTextEdit* edit, char* nameList, const QDomNode& node, int id);
	QDomNode ReturnDomElement();
	int CountElementLastReadXml();
	void addElementToFile(QString TypeOpt, QString addstr);
	void AllowSearchNameToList(QLineEdit* LE);
	void DisableSearchNameToList();
	bool seach();
	void SetapExcludeFalse();
	QDomElement makeElement(QDomDocument& domDocument, const QString& strName, const QString& strAttr, const QString& strText);

private:
	bool checkStr(std::string str1, std::string str2);
	bool seachToList;
	bool stl;
	std::string StrSeach;
	int countNameList;
	QDomDocument domDoc;
	QDomElement domElem;
	QFile xmlFile;
};

#endif //DBACCESS_H