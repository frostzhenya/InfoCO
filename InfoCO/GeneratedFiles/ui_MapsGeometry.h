/********************************************************************************
** Form generated from reading UI file 'MapsGeometry.ui'
**
** Created: Tue 26. Mar 19:06:42 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAPSGEOMETRY_H
#define UI_MAPSGEOMETRY_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGraphicsView>
#include <QtGui/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_MapsGeometry
{
public:
    QGraphicsView *graphicsView;

    void setupUi(QDialog *MapsGeometry)
    {
        if (MapsGeometry->objectName().isEmpty())
            MapsGeometry->setObjectName(QString::fromUtf8("MapsGeometry"));
        MapsGeometry->resize(500, 500);
        MapsGeometry->setMinimumSize(QSize(500, 500));
        MapsGeometry->setMaximumSize(QSize(500, 500));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/sZOInfo.png"), QSize(), QIcon::Normal, QIcon::Off);
        MapsGeometry->setWindowIcon(icon);
        graphicsView = new QGraphicsView(MapsGeometry);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 500, 500));
        graphicsView->setMinimumSize(QSize(500, 500));
        graphicsView->setMaximumSize(QSize(500, 500));

        retranslateUi(MapsGeometry);

        QMetaObject::connectSlotsByName(MapsGeometry);
    } // setupUi

    void retranslateUi(QDialog *MapsGeometry)
    {
        MapsGeometry->setWindowTitle(QApplication::translate("MapsGeometry", "Dialog", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MapsGeometry: public Ui_MapsGeometry {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAPSGEOMETRY_H
