/*
*
*/

#ifndef SCENEGEOMETRY_H
#define SCENEGEOMETRY_H
#include <QtGui>

class SceneGeometry: public QGraphicsScene
{
    Q_OBJECT
public:
	SceneGeometry(QObject *parent, QLineEdit *X = 0, QLineEdit *Y = 0);

protected:
    virtual void mousePressEvent(QGraphicsSceneMouseEvent * mouseEvent);

private:
	QString IntToQStr(int integer);
	QLineEdit* Xedit;
	QLineEdit* Yedit;
};

#endif // SCENEGEOMETRY_H
