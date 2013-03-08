/*
*
*/

#include "xmlData.h"
#include <QtCore/qtextcodec.h>
#include <QtCore/qstring.h>
#include <QtGui/QApplication>
#include <cstring>

xmlData::xmlData(QString nameFile)
{
	seachToList = false;
	stl = false;
	xmlFile.setFileName(nameFile);

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

void xmlData::ShowXmlfullQListWidget(QListWidget *listView, char* nameList)
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
					std::string buf = element.text().toStdString();
					if(seachToList)
					{
						if(StrSeach == buf)
						{
							listView->addItem(QObject::tr(buf.c_str()));
							stl = true;
							break;
						}
						else
							stl = false;
					}
					else
					{
						listView->addItem(QObject::tr(buf.c_str()));
						countNameList++;
					}
				}
			}
		}
		domNode = domNode.nextSibling();
	}
}

void xmlData::ShowXmlfullQComboBox(QComboBox* box, char* nameList)
{
	QDomNode domNode = domElem.firstChild();

	while(!domNode.isNull())
	{
		if(domNode.isElement())
		{
			QDomElement element = domNode.toElement();
			if(!element.isNull())
			{
				if(element.tagName() == nameList)
				{
					std::string buf = element.text().toStdString();
					box->addItem(QObject::tr(buf.c_str()));
				}
			}
		}
		domNode = domNode.nextSibling();
	}
}

void xmlData::ShowXmlQuest(QTextEdit* edit, char* nameList, const QDomNode& node, int id)
{
	QDomNode domNode = node.firstChild();

	/////////////////////////////////////
	char buf[3];
	sprintf(buf,"%d",id);
	std::string bufId(buf);

	while(!domNode.isNull())
	{
		if(domNode.isElement())
		{
			QDomElement element = domNode.toElement();
			if(!element.isNull())
			{
				if(element.tagName() == nameList)
				{
					//if(bufId == element.attribute("id", "").toStdString())
				}
				else if(/*bufId == element.attribute("id", "").toStdString() &&*/
					element.tagName() != "NameNpcStation" &&
					element.tagName() != "NameNpcTerminal" &&
					element.tagName() != "NameNpcForest" &&
					element.tagName() != "NameNpcVesuvius" &&
					element.tagName() != "NameNpcTheNewEarth" &&
					element.tagName() != "NameNpcTunguska")
				{
					edit->append(element.text());
				}
			}
		}
		ShowXmlQuest(edit, "", domNode, id);
		domNode = domNode.nextSibling();
	}
}


QDomNode xmlData::ReturnDomElement()
{
	return domElem;
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

void xmlData::AllowSearchNameToList(QLineEdit* LE)
{
	StrSeach.clear();
	StrSeach = LE->text().toStdString();
	seachToList = true;
}

void xmlData::DisableSearchNameToList()
{
	seachToList = false;
}

bool xmlData::seach()
{
	return stl;
}

// не используется, так как не учитывает русских букв
bool xmlData::checkStr(std::string str1, std::string str2)
{
	std::transform(str1.begin(), str1.end(), str1.begin(), toupper);
	std::transform(str2.begin(), str2.end(), str2.begin(), toupper);

	if(str1 == str2)
		return true;
	else
		return false;

}