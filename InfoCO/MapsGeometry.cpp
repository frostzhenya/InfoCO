/*
*
*/
#include "MapsGeometry.h"

MapsGeometry::MapsGeometry(QWidget *parent, QLineEdit *X, QLineEdit *Y, int TypeMap): QDialog(parent, Qt::WindowStaysOnTopHint)
{
	ui.setupUi(this);
	SceneGeometry* scene;
	scene = new SceneGeometry(0, X, Y);
	ui.graphicsView->setScene(scene);

	switch(TypeMap)
	{
	case 0:
		scene->addPixmap(QPixmap("img/map_Station.png"));
		break;
	case 1:
		scene->addPixmap(QPixmap("img/map_Terminal.png"));
		break;
	case 2:
		scene->addPixmap(QPixmap("img/map_Forest.png"));
		break;
	case 3:
		scene->addPixmap(QPixmap("img/map_Vesuvius.png"));
		break;
	case 4:
		scene->addPixmap(QPixmap("img/map_TheNewEarth.png"));
		break;
	case 5:
		scene->addPixmap(QPixmap("img/map_Tunguska.png"));
		break;
	}
}


MapsGeometry::~MapsGeometry()
{
}