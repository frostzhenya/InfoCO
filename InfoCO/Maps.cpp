/*
*
*/

#include "Maps.h"
#include <QtGui/qbitmap.h>
#include <Qt/qgraphicsitem.h>
#include <Qt/qgraphicsscene.h>
#include <Qt/qgraphicsview.h>

Maps::Maps(QWidget *parent, Qt::WFlags flags): QDialog(parent, flags)
{
	ui.setupUi(this);

	ui.ShowGraf->setScene(&scene);
	pRectItem = new QGraphicsRectItem(0, &scene);

	connect(ui.ButtomView,SIGNAL(clicked()),this,SLOT(ClicShowMap()));
	connect(ui.ButtomZoomIn,SIGNAL(clicked()),this,SLOT(ZoomInMap()));
	connect(ui.ButtomZoomOut,SIGNAL(clicked()),this,SLOT(ZoomOutMap()));
}


Maps::~Maps()
{
}

void Maps::ClicShowMap()
{
	int TypeShowMap = ui.OptMaps->currentIndex();
    //QGraphicsScene scene(QRectF(-100, -100, 300, 300));

	scene.removeItem(pPixmapItem);

	switch(TypeShowMap)
	{
	case 0:
		pPixmapItem = scene.addPixmap(QPixmap("images/terminal.jpg"));
		break;
	case 1:
		pPixmapItem = scene.addPixmap(QPixmap("images/forest.jpg"));
		break;
	case 2:
		pPixmapItem = scene.addPixmap(QPixmap("images/vesuvius.jpg"));
		break;
	case 3:
		pPixmapItem = scene.addPixmap(QPixmap("images/the_new_earth.jpg"));
		break;
	case 4:
		pPixmapItem = scene.addPixmap(QPixmap("images/tunguska.jpg"));
		break;
	case 5:
		pPixmapItem = scene.addPixmap(QPixmap("images/tunguska_grass.jpg"));
		break;
	case 6:
		pPixmapItem = scene.addPixmap(QPixmap("images/tunguska2.jpg"));
		break;
	case 7:
		pPixmapItem = scene.addPixmap(QPixmap("images/caravan.jpg"));
		break;
	}

	pPixmapItem->setFlags(QGraphicsItem::ItemIsMovable);
	//ui.ShowGraf->scale(1 / 2.1, 1 / 2.1);
	ui.ShowGraf->viewport();
}

void Maps::ZoomInMap()
{
	ui.ShowGraf->scale(1.1, 1.1);
}

void Maps::ZoomOutMap()
{
	ui.ShowGraf->scale(1 / 1.1, 1 / 1.1);
}