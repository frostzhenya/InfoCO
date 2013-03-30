/*
*
*/

#include "SqlliteDB.h"
#include <QtSql/qsql_sqlite.h>

SqlliteDB::SqlliteDB()
{
}


SqlliteDB::~SqlliteDB()
{
}

bool SqlliteDB::createConnection()
{
	db = QSqlDatabase::addDatabase("QSQLITE");
	db.setDatabaseName("data.sqlite");
	//db.setHostName("localhost");
	//db.setUserName("user");
	//db.setPassword("pass");

	if (!db.open())
	{
		mBox.setText(db.lastError().text());
		mBox.exec();
		return false;
	}
	else
	{
		QSqlQuery q("", db);
		queryDB = q;
	}
	return true;
}

QSqlQuery  SqlliteDB::query(const QString &s)
{
	if(!queryDB.exec(s))
	{
		mBox.setText("Ошибка запроса!!!");
		mBox.exec();
	}
	return queryDB;
}

void SqlliteDB::ShowQListWidget(QListWidget *listView, const QString &s)
{
	if(!queryDB.exec(s))
	{
		mBox.setText("Ошибка запроса!!!");
		mBox.exec();
	}
	
	QSqlRecord rec = queryDB.record();
	QString strName;
	
	while (queryDB.next())
	{
		strName = queryDB.value(rec.indexOf("name")).toString();
		listView->addItem(strName);
	}
}

void SqlliteDB::SeachQListWidget(QListWidget *listView, const QString &s, const QString nameSeach)
{
	bool seach=false;
	if(!queryDB.exec(s))
	{
		mBox.setText("Ошибка запроса!!!");
		mBox.exec();
	}

	QSqlRecord rec = queryDB.record();
	QString strName;
	
	while (queryDB.next())
	{
		strName = queryDB.value(rec.indexOf("name")).toString();
		if(strName == nameSeach)
		{
			seach = true;
			break;
		}
	}

	if(seach)
		listView->addItem(strName);
	else
		listView->addItem(QObject::tr("Не найдено!!!"));
}

void SqlliteDB::ShowQComboBoxNameNpc(QComboBox * box, const QString &s)
{
	if(!queryDB.exec(s))
	{
		mBox.setText("Ошибка запроса! Либо нет данных в базе!");
		mBox.exec();
	}
	
	QSqlRecord rec = queryDB.record();
	
	while (queryDB.next())
	{
		box->addItem(queryDB.value(rec.indexOf("name")).toString());
	}
}

void SqlliteDB::ShowQComboBoxNameQuest(QComboBox * box, const QString &s)
{
	if(!queryDB.exec(s))
	{
		mBox.setText("Ошибка запроса! Либо нет данных в базе!");
		mBox.exec();
	}

	QSqlRecord rec = queryDB.record();

	while (queryDB.next())
	{
		box->addItem(queryDB.value(rec.indexOf("nameQuest")).toString());
	}
}