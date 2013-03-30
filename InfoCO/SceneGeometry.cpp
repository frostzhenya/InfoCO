/*
*
*/

#include "SceneGeometry.h"

SceneGeometry::SceneGeometry(QObject *parent, QLineEdit *X, QLineEdit *Y): QGraphicsScene(parent)
{
	Xedit = X;
	Yedit = Y;
}

void SceneGeometry::mousePressEvent(QGraphicsSceneMouseEvent * mouseEvent)
{
	//QMessageBox xx;
	//xx.setText(""/*FloatToQStr(mouseEvent->scenePos().x()) + "/" + FloatToQStr(mouseEvent->scenePos().y())*/);
	//xx.exec();
	Xedit->setText(IntToQStr((int)mouseEvent->scenePos().x()));
	Yedit->setText(IntToQStr((int)mouseEvent->scenePos().y()));
}

QString SceneGeometry::IntToQStr(int integer)
{
	char buf[10];
	sprintf(buf,"%d",integer);
	return buf;
}