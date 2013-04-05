/*
*
*/

#ifndef INFOCO_H
#define INFOCO_H

#include <QtGui>
#include "ui_infoco.h"

class InfoCO : public QDialog
{
	Q_OBJECT

public:
	InfoCO(QWidget *parent = 0);
	~InfoCO();

private slots:
	void ButtonListClick();
	void ButtonCalcClick();
	void ButtonMapsClick();
	void ButtonQuestClic();
	void ButtonBlocClick();
	void ButtoninfoClick();
	// скрытые кнопки
	void ButtonEditQuestClick();
	//tray
	void RenewDoubleClick(QSystemTrayIcon::ActivationReason reason);

protected:
	void InfoCO::changeEvent(QEvent* event);

private:
	Ui::InfoCOClass ui;
	QSystemTrayIcon* trayIcon;
	QMenu* trayIconMenu;
	QAction* restoreAction;
	QAction* quitAction;
};

#endif // INFOCO_H
