/*
*
*/

#ifndef MAPSGEOMETRY_H
#define MAPSGEOMETRY_H

#include "ui_MapsGeometry.h"
#include <QtGui/qpainter.h>
#include <QtGui/QMouseEvent>
#include <QtGui/QGraphicsSceneEvent>
#include "SceneGeometry.h"

class MapsGeometry: public QDialog
{
	Q_OBJECT

public:
	MapsGeometry(QWidget *parent = 0, QLineEdit *X = 0, QLineEdit *Y = 0, int TypeMap = 0);
	~MapsGeometry();

protected:
	virtual void MapsGeometry::mousePressEvent(QMouseEvent* events)
	{
		QDialog::close();
	}

private:
	Ui::MapsGeometry ui;
};

#endif // MAPSGEOMETRY_H 