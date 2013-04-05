/*
*
*/

#ifndef MAPS_H
#define MAPS_H

#include <QtGui/QDialog>
#include <QtGui/qpainter.h>
#include <QtGui/qmouseeventtransition.h>
#include "ui_maps.h"

class Maps : public QDialog
{
	Q_OBJECT

public:
	Maps(QWidget *parent = 0);
	~Maps();

private slots:
	void ClicShowMap();
	void ZoomInMap();
	void ZoomOutMap();
	void ButtonBack();

private:
	bool remove;
	QGraphicsScene scene;
	QGraphicsRectItem* pRectItem;
	QGraphicsPixmapItem* pPixmapItem;
	QPoint  m_ptPosition;
	Ui::Maps ui;
};

#endif // MAPS_H
