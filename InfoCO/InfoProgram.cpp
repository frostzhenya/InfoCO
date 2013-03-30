/*
*
*/

#include "InfoProgram.h"

InfoProg::InfoProg(QWidget *parent): QDialog(parent)
{
	ui.setupUi(this);

	connect(ui.ButtonClose,SIGNAL(clicked()),this,SLOT(accept()));
}

InfoProg::~InfoProg()
{
}