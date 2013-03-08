/********************************************************************************
** Form generated from reading UI file 'maps.ui'
**
** Created: Thu 7. Mar 19:48:07 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAPS_H
#define UI_MAPS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGraphicsView>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Maps
{
public:
    QGroupBox *groupBox;
    QComboBox *OptMaps;
    QPushButton *ButtomView;
    QPushButton *ButtomZoomIn;
    QPushButton *ButtomZoomOut;
    QLabel *label;
    QGraphicsView *ShowGraf;

    void setupUi(QDialog *Maps)
    {
        if (Maps->objectName().isEmpty())
            Maps->setObjectName(QString::fromUtf8("Maps"));
        Maps->resize(800, 700);
        Maps->setMinimumSize(QSize(139, 291));
        Maps->setMaximumSize(QSize(800, 700));
        QIcon icon;
        icon.addFile(QString::fromUtf8("img/InfoCO.png"), QSize(), QIcon::Normal, QIcon::Off);
        Maps->setWindowIcon(icon);
        groupBox = new QGroupBox(Maps);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 801, 51));
        groupBox->setMinimumSize(QSize(1, 1));
        groupBox->setMaximumSize(QSize(99999, 999999));
        OptMaps = new QComboBox(groupBox);
        OptMaps->setObjectName(QString::fromUtf8("OptMaps"));
        OptMaps->setGeometry(QRect(10, 20, 201, 22));
        ButtomView = new QPushButton(groupBox);
        ButtomView->setObjectName(QString::fromUtf8("ButtomView"));
        ButtomView->setGeometry(QRect(230, 20, 111, 23));
        ButtomZoomIn = new QPushButton(groupBox);
        ButtomZoomIn->setObjectName(QString::fromUtf8("ButtomZoomIn"));
        ButtomZoomIn->setGeometry(QRect(410, 20, 21, 23));
        ButtomZoomOut = new QPushButton(groupBox);
        ButtomZoomOut->setObjectName(QString::fromUtf8("ButtomZoomOut"));
        ButtomZoomOut->setGeometry(QRect(430, 20, 21, 23));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(350, 20, 61, 21));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        ShowGraf = new QGraphicsView(Maps);
        ShowGraf->setObjectName(QString::fromUtf8("ShowGraf"));
        ShowGraf->setGeometry(QRect(0, 50, 798, 651));
        ShowGraf->setMaximumSize(QSize(798, 651));
        ShowGraf->viewport()->setProperty("cursor", QVariant(QCursor(Qt::OpenHandCursor)));
        ShowGraf->setInteractive(true);
        ShowGraf->setResizeAnchor(QGraphicsView::AnchorViewCenter);
        ShowGraf->raise();
        groupBox->raise();

        retranslateUi(Maps);

        QMetaObject::connectSlotsByName(Maps);
    } // setupUi

    void retranslateUi(QDialog *Maps)
    {
        Maps->setWindowTitle(QApplication::translate("Maps", "\320\232\320\260\321\200\321\202\321\213 (\320\241 \320\277\320\276\320\273\320\265\320\267\320\275\321\213\320\274\320\270 \320\274\320\265\321\202\320\272\320\260\320\274\320\270)", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("Maps", "\320\232\320\260\321\200\321\202\321\213 (\320\241 \320\277\320\276\320\273\320\265\320\267\320\275\321\213\320\274\320\270 \320\274\320\265\321\202\320\272\320\260\320\274\320\270)", 0, QApplication::UnicodeUTF8));
        OptMaps->clear();
        OptMaps->insertItems(0, QStringList()
         << QApplication::translate("Maps", "\320\233\321\216\320\261\320\265\321\207 \320\222\320\276\320\272\320\267\320\260\320\273 \320\276\321\202 \321\201\321\202\320\260\320\273\320\272\320\265\321\200\320\260  \320\247\320\265\320\275\320\270\320\272", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Maps", "\320\233\321\216\320\261\320\265\321\207 \320\273\320\265\321\201", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Maps", "\320\222\320\265\320\267\321\203\320\262\320\270\320\271", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Maps", "\320\235\320\276\320\262\320\260\321\217 \320\227\320\265\320\274\320\273\321\217", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Maps", "\320\242\321\203\320\275\320\263\321\203\321\201\320\272\320\260", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Maps", "\320\242\321\203\320\275\320\263\321\203\321\201\321\201\320\272\320\260. \320\242\321\200\320\260\320\262\321\213 (\320\236\321\202 \320\270\321\201\321\201\320\273\320\265\320\264\320\276\320\262\320\260\321\202\320\265\320\273\320\265\320\271 \320\232\320\232) \320\270 \320\262 \321\207\320\260\321\201\321\202\320\275\320\276\321\201\321\202\320\270 \320\276\321\202 KirillZVER", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Maps", "\320\242\321\203\320\275\320\263\321\203\321\201\321\201\320\272\320\260 \320\276\321\202 Rederrr2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Maps", "\320\233\321\216\320\261\320\265\321\207 \320\232\320\260\321\200\320\260\320\262\320\260\320\275", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Maps", "\320\233\321\216\320\261\320\265\321\207 \320\273\320\265\321\201 (\321\201\321\205\321\200\320\276\320\275\321\213)", 0, QApplication::UnicodeUTF8)
        );
        ButtomView->setText(QApplication::translate("Maps", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214", 0, QApplication::UnicodeUTF8));
        ButtomZoomIn->setText(QApplication::translate("Maps", "+", 0, QApplication::UnicodeUTF8));
        ButtomZoomOut->setText(QApplication::translate("Maps", "-", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Maps", "zoom:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Maps: public Ui_Maps {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAPS_H
