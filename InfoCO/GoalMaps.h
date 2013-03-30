/*
*
*/

#ifndef GOALMAPS_H
#define GOALMAPS_H

#include "ui_GoalMaps.h"
#include <QtGui/qpainter.h>
#include <QtGui/QMouseEvent>
#include <QtGui/QGraphicsSceneEvent>

class GoalMaps:public QDialog
{
	Q_OBJECT

public:
	GoalMaps(QWidget *parent = 0, int x = 0, int y = 0, int m = 0, int typePos = 0, int countGoal = 0);
	~GoalMaps();

	void setCoordinates(int X[4], int Y[4], int map[4]);

private slots:
	void ZoomInMap();
	void ZoomOutMap();
	void BoxConutGoalChanged();

protected:
    virtual void GoalMaps::mousePressEvent(QMouseEvent* pe)
    {
		QPoint pos;
		pos = pe->pos();
		ui.ResultX->setText(IntToQStr(pos.x() - 11));
		ui.ResultY->setText(IntToQStr(pos.y() - 67));
    }

private:
	QString IntToQStr(int integer);
	void refresh();
	int mapX[4], mapY[4], Tmap[4];
	Ui::GoalMaps ui;

	bool remove;
	QPixmap pixmap;
	QGraphicsScene scene;
	QGraphicsRectItem* pRectItem;
	QGraphicsPixmapItem* pPixmapItem;
	QBrush Color;
	int CountGoal;
};

#endif // GOALMAPS_H
