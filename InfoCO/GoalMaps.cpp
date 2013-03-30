/*
*
*/

#include "GoalMaps.h"
#include <QtGui/qbitmap.h>
#include <QtGui/QGraphicsitem>
#include <QtGui/QGraphicsscene>
#include <QtGui/QGraphicsview>
#include <iostream>
#include <conio.h>
#include <Windows.h>

					// координаты х,у, карта, тип рисованой позиции (0-NPC, 1-цель кв)
GoalMaps::GoalMaps(QWidget *parent,  int x, int y, int m, int typePos, int countGoal): QDialog(parent)
{
	ui.setupUi(this);

	ui.graphicsView->setScene(&scene);
	pRectItem = new QGraphicsRectItem(0, &scene);
	remove = false;
	CountGoal = countGoal;
	
	ui.BoxConutGoal->clear();

	for(int i = 0; i < CountGoal; i++)
		ui.BoxConutGoal->addItem(IntToQStr(i));


	connect(ui.ButtomZoomIn,SIGNAL(clicked()),this,SLOT(ZoomInMap()));
	connect(ui.ButtomZoomOut,SIGNAL(clicked()),this,SLOT(ZoomOutMap()));
	connect(ui.BoxConutGoal, SIGNAL(currentIndexChanged(int)), this, SLOT(BoxConutGoalChanged()));

	switch(typePos)
	{
	case 0:
		Color = QBrush(Qt::blue);
		break;
	case 1:
		Color = QBrush(Qt::red);
		break;
	}

	switch(m)
	{
	case 0:
		pPixmapItem = scene.addPixmap(QPixmap("img/map_Station.png"));
		scene.addEllipse(x,y,5,5,QPen(Qt::black), Color);
		break;
	case 1:
		pPixmapItem = scene.addPixmap(QPixmap("img/map_Terminal.png"));
		scene.addEllipse(x,y,5,5,QPen(Qt::black), Color);
		break;
	case 2:
		pPixmapItem = scene.addPixmap(QPixmap("img/map_Forest.png"));
		scene.addEllipse(x,y,5,5,QPen(Qt::black), Color);
		break;
	case 3:
		pPixmapItem = scene.addPixmap(QPixmap("img/map_Vesuvius.png"));
		scene.addEllipse(x,y,5,5,QPen(Qt::black), Color);
		break;
	case 4:
		pPixmapItem = scene.addPixmap(QPixmap("img/map_TheNewEarth.png"));
		scene.addEllipse(x,y,5,5,QPen(Qt::black), Color);
		break;
	case 5:
		pPixmapItem = scene.addPixmap(QPixmap("img/map_Tunguska.png"));
		scene.addEllipse(x,y,5,5,QPen(Qt::black), Color);
		break;
	}

	//ui.graphicsView->setSceneRect(QRectF(0,0,pPixmapItem->weig, 300));
	ui.graphicsView->centerOn(x,y);
}


GoalMaps::~GoalMaps()
{
}

void GoalMaps::setCoordinates(int X[4], int Y[4], int map[4])
{
	for(int i=0; i<4; i++)
	{
		mapX[i] = X[i];
		mapY[i] = Y[i];
		Tmap[i] = map[i];
	}
}

void GoalMaps::refresh()
{
	ui.graphicsView->centerOn(mapX[0],mapY[0]);
}

void GoalMaps::ZoomInMap()
{
	ui.graphicsView->scale(1.1, 1.1);
}

void GoalMaps::ZoomOutMap()
{
	ui.graphicsView->scale(1 / 1.1, 1 / 1.1);
}

QString GoalMaps::IntToQStr(int integer)
{
	char buf[10];
	sprintf(buf,"%d",integer);
	return buf;
}

void GoalMaps::BoxConutGoalChanged()
{
	scene.removeItem(pPixmapItem);
	//mapX[4], mapY[4], Tmap[4];
	switch(Tmap[ui.BoxConutGoal->currentIndex()])
	{
	case 0:
		pPixmapItem = scene.addPixmap(QPixmap("img/map_Station.png"));
		scene.addEllipse(mapX[ui.BoxConutGoal->currentIndex()],mapY[ui.BoxConutGoal->currentIndex()],5,5,QPen(Qt::black), Color);
		break;
	case 1:
		pPixmapItem = scene.addPixmap(QPixmap("img/map_Terminal.png"));
		scene.addEllipse(mapX[ui.BoxConutGoal->currentIndex()],mapY[ui.BoxConutGoal->currentIndex()],5,5,QPen(Qt::black), Color);
		break;
	case 2:
		pPixmapItem = scene.addPixmap(QPixmap("img/map_Forest.png"));
		scene.addEllipse(mapX[ui.BoxConutGoal->currentIndex()],mapY[ui.BoxConutGoal->currentIndex()],5,5,QPen(Qt::black), Color);
		break;
	case 3:
		pPixmapItem = scene.addPixmap(QPixmap("img/map_Vesuvius.png"));
		scene.addEllipse(mapX[ui.BoxConutGoal->currentIndex()],mapY[ui.BoxConutGoal->currentIndex()],5,5,QPen(Qt::black), Color);
		break;
	case 4:
		pPixmapItem = scene.addPixmap(QPixmap("img/map_TheNewEarth.png"));
		scene.addEllipse(mapX[ui.BoxConutGoal->currentIndex()],mapY[ui.BoxConutGoal->currentIndex()],5,5,QPen(Qt::black), Color);
		break;
	case 5:
		pPixmapItem = scene.addPixmap(QPixmap("img/map_Tunguska.png"));
		scene.addEllipse(mapX[ui.BoxConutGoal->currentIndex()],mapY[ui.BoxConutGoal->currentIndex()],5,5,QPen(Qt::black), Color);
		break;
	}

	//ui.graphicsView->setSceneRect(QRectF(0,0,pPixmapItem->weig, 300));
	ui.graphicsView->centerOn(mapX[ui.BoxConutGoal->currentIndex()],mapY[ui.BoxConutGoal->currentIndex()]);
}