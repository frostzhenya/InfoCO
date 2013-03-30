/*
*
*/

#include "miniNotebook.h"
#include <QtCore/qtextstream.h>
#include <QtGui/qtextdocument.h>
#include <QTextBlock>

miniNotebook::miniNotebook(QWidget *parent): QDialog(parent)
{
	ui.setupUi(this);

	connect(ui.ButtonClose,SIGNAL(clicked()),this,SLOT(accept()));
	connect(ui.ButtonSave,SIGNAL(clicked()),this,SLOT(ButtomSaveClick()));

	char buf[1024];

	file.open("miniNotebook.txt", std::ios::in | std::ios::out);
	while (!file.getline(buf,sizeof(file)).eof())
	{
		ui.textEdit->append(buf);
	}
}

miniNotebook::~miniNotebook()
{
	file.close();
}

void miniNotebook::ButtomSaveClick()
{
	file.close();
	std::remove("miniNotebook.txt");

	std::ofstream ofs("miniNotebook.txt"); //создать
	ofs.close();

	file.open("miniNotebook.txt", std::ios::in | std::ios::out);

	for (int i = 0; i < ui.textEdit->document()->lineCount(); i++)
	{
		file << ui.textEdit->document()->findBlockByLineNumber(i).text().toStdString();
		file<<"\n";
	}
}