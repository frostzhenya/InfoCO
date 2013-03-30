/*
*
*/

#ifndef SQLLITEDB_H
#define SQLLITEDB_H

#include <QtSql/QSQLITEDriver>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQuery>
#include <QtGui/QListWidget>
#include <QtGui/QComboBox>
#include <QtSql>
#include <QtGui/qmessagebox.h>

//QT_FORWARD_DECLARE_CLASS(QSqlDatabase)

class SqlliteDB
{
public:
	SqlliteDB();
	~SqlliteDB();

	bool createConnection();
	QSqlQuery query(const QString &s);
	// для виджетов
	void ShowQListWidget(QListWidget *listView, const QString &s);
	void SeachQListWidget(QListWidget *listView, const QString &s, const QString nameSeach);//поиск
	void ShowQComboBoxNameNpc(QComboBox * box, const QString &s);
	void ShowQComboBoxNameQuest(QComboBox * box, const QString &s);

private:
	QSqlDatabase db;
	QSqlQuery queryDB;
	QMessageBox mBox;
};

#endif // SQLLITEDB_H
