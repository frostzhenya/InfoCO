/*
*
*/

#include "xmlData.h"
#include <QtCore/qtextcodec.h>
#include <QtCore/qstring.h>
#include <QtGui/QApplication>

xmlData::xmlData()
{
	seachToList == false;
	xmlFile.setFileName("InfoCOData.xml");
	// используем кодировку CP1251
	QTextCodec *langcodec = QTextCodec::codecForName("Windows-1251");
    QTextCodec::setCodecForTr(langcodec);
	QTextCodec::setCodecForCStrings(langcodec);
	QTextCodec::setCodecForLocale(langcodec);
}

xmlData::~xmlData()
{
	xmlFile.close();
}

bool xmlData::OpenXml()
{
	if(xmlFile.open(QIODevice::ReadOnly | QIODevice::WriteOnly))
	{
		if(domDoc.setContent(&xmlFile))
		{
			domElem = domDoc.documentElement();
			return true;
		}
		return false;
	}
	return false;
}

void xmlData::ShowXmlfull(QListWidget *listView, char* nameList)
{
	QDomNode domNode = domElem.firstChild();
	countNameList = 0;

	while(!domNode.isNull())
	{
		if(domNode.isElement())
		{
			QDomElement element = domNode.toElement();
			if(!element.isNull())
			{
				if(element.tagName() == nameList)
				{
					std::string ss = element.text().toStdString();
					listView->addItem(QObject::tr(ss.c_str()));
					countNameList++;
				}
			}
		}
		domNode = domNode.nextSibling();
	}
}

int xmlData::CountElementLastReadXml()
{
	return countNameList;
}

void xmlData::addElementToFile(QString TypeOpt, QString addstr)
{
	domElem.appendChild(makeElement(domDoc,TypeOpt,QString().setNum(countNameList+1),addstr));
	countNameList++;
	xmlFile.reset();
	QTextStream out(&xmlFile);
	out.setCodec("UTF-8");
	out << domDoc.toString();
}

QDomElement xmlData::makeElement(QDomDocument& domDocument, const QString& strName, const QString& strAttr, const QString& strText)
{
	QDomElement domElement = domDocument.createElement(strName);

	if (!strAttr.isEmpty())
	{
		QDomAttr domAttr = domDocument.createAttribute("id");
		domAttr.setValue(strAttr);
		domElement.setAttributeNode(domAttr);
	}

	if (!strText.isEmpty())
	{
		QDomText domText = domDocument.createTextNode(strText);
		domElement.appendChild(domText);
	}
    return domElement;
}

void AllowSearchNameToList()
{
}

void DisableSearchNameToList()
{
}