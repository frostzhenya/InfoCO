/*
*
*/

#include "infoco.h"
#include <QtGui/QApplication>
#include <QtCore/qtextcodec.h>

int main(int argc, char *argv[])
{
	QTextCodec *langcodec = QTextCodec::codecForName("Windows-1251");
    QTextCodec::setCodecForTr(langcodec);
	QTextCodec::setCodecForCStrings(langcodec);
	QTextCodec::setCodecForLocale(langcodec);

	QApplication a(argc, argv);
	a.addLibraryPath(a.applicationDirPath() + "/plugins"); 
	InfoCO w;
	w.show();

	return a.exec();
}
