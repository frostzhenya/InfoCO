/*
*
*/

#ifndef MAPS_H
#define MAPS_H

#include <QtGui/QDialog>
#include <QtGui/qpainter.h>
#include <Qt/qmouseeventtransition.h>
#include <QMouseEvent>
#include "ui_maps.h"

class Maps : public QDialog
{
	Q_OBJECT

public:
	Maps(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Maps();

private slots:
	void ClicShowMap();
	void ZoomInMap();
	void ZoomOutMap();

private:
	QGraphicsScene scene;
	QGraphicsRectItem* pRectItem;
	QGraphicsPixmapItem* pPixmapItem;
	QPoint  m_ptPosition;
	Ui::Maps ui;
};

#endif // MAPS_H
