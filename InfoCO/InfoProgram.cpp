/*
*
*/

#include "InfoProgram.h"
#include "infoco.h"

InfoProg::InfoProg(QWidget *parent): QDialog(parent, Qt::WindowStaysOnTopHint | Qt::CustomizeWindowHint)
{
	ui.setupUi(this);

	connect(ui.ButtonClose,SIGNAL(clicked()),this,SLOT(ButtonBackClick()));
}

InfoProg::~InfoProg()
{
}

void InfoProg::ButtonBackClick()
{
	InfoCO sZoneInfo;
	close();
	sZoneInfo.exec();
}