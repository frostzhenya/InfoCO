/*
*
*/

#include "Maps.h"
#include "infoco.h"
#include <QtGui/qbitmap.h>
#include <QtGui/QGraphicsitem>
#include <QtGui/QGraphicsscene>
#include <QtGui/QGraphicsview>

Maps::Maps(QWidget *parent): QDialog(parent, Qt::WindowStaysOnTopHint | Qt::CustomizeWindowHint)
{
	ui.setupUi(this);

	ui.ShowGraf->setScene(&scene);
	pRectItem = new QGraphicsRectItem(0, &scene);
	remove = false;

	connect(ui.ButtomView,SIGNAL(clicked()),this,SLOT(ClicShowMap()));
	connect(ui.ButtomZoomIn,SIGNAL(clicked()),this,SLOT(ZoomInMap()));
	connect(ui.ButtomZoomOut,SIGNAL(clicked()),this,SLOT(ZoomOutMap()));
	connect(ui.ButtonBack,SIGNAL(clicked()),this,SLOT(ButtonBack()));
}


Maps::~Maps()
{
}

void Maps::ClicShowMap()
{
	int TypeShowMap = ui.OptMaps->currentIndex();

	if (remove)
		scene.removeItem(pPixmapItem);

	switch(TypeShowMap)
	{
	case 0:
		pPixmapItem = scene.addPixmap(QPixmap("img/terminal.png"));
		//scene.setSceneRect(0,0,1900,1900);
		break;
	case 1:
		pPixmapItem = scene.addPixmap(QPixmap("img/forest.png"));
		break;
	case 2:
		pPixmapItem = scene.addPixmap(QPixmap("img/vesuvius.png"));
		break;
	case 3:
		pPixmapItem = scene.addPixmap(QPixmap("img/the_new_earth.png"));
		break;
	case 4:
		pPixmapItem = scene.addPixmap(QPixmap("img/tunguska.png"));
		break;
	case 5:
		pPixmapItem = scene.addPixmap(QPixmap("img/tunguska_grass.png"));
		break;
	case 6:
		pPixmapItem = scene.addPixmap(QPixmap("img/tunguska2.png"));
		break;
	case 7:
		pPixmapItem = scene.addPixmap(QPixmap("img/caravan.png"));
		break;
	case 8:
		pPixmapItem = scene.addPixmap(QPixmap("img/cachesForest.png"));
	}

	pPixmapItem->setFlags(QGraphicsItem::ItemIsMovable);
	//ui.ShowGraf->scale(1 / 2.1, 1 / 2.1);
	ui.ShowGraf->viewport();
	remove = true;
}

void Maps::ZoomInMap()
{
	ui.ShowGraf->scale(1.1, 1.1);
}

void Maps::ZoomOutMap()
{
	ui.ShowGraf->scale(1 / 1.1, 1 / 1.1);
}

void Maps::ButtonBack()
{
	InfoCO sZoneInfo;
	close();
	sZoneInfo.exec();
}