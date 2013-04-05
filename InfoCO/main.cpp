/*
*
*/

#include "infoco.h"
#include <QtGui>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	a.addLibraryPath(a.applicationDirPath() + "/plugins"); 
	InfoCO w;
	w.show();

	return a.exec();
}