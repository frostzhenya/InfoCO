/********************************************************************************
** Form generated from reading UI file 'maps.ui'
**
** Created: Wed 3. Apr 19:26:40 2013
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
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Maps
{
public:
    QGraphicsView *ShowGraf;
    QPushButton *ButtonBack;
    QLabel *label;
    QPushButton *ButtomView;
    QPushButton *ButtomZoomIn;
    QPushButton *ButtomZoomOut;
    QComboBox *OptMaps;

    void setupUi(QDialog *Maps)
    {
        if (Maps->objectName().isEmpty())
            Maps->setObjectName(QString::fromUtf8("Maps"));
        Maps->resize(572, 463);
        Maps->setMinimumSize(QSize(572, 463));
        Maps->setMaximumSize(QSize(572, 463));
        Maps->setCursor(QCursor(Qt::ArrowCursor));
        QIcon icon;
        icon.addFile(QString::fromUtf8("img/sZOInfo.png"), QSize(), QIcon::Normal, QIcon::Off);
        Maps->setWindowIcon(icon);
        Maps->setStyleSheet(QString::fromUtf8("background-image: url(:/img/texture/main_maps.png);"));
        ShowGraf = new QGraphicsView(Maps);
        ShowGraf->setObjectName(QString::fromUtf8("ShowGraf"));
        ShowGraf->setGeometry(QRect(10, 60, 551, 361));
        ShowGraf->setMaximumSize(QSize(798, 651));
        ShowGraf->viewport()->setProperty("cursor", QVariant(QCursor(Qt::OpenHandCursor)));
        ShowGraf->setStyleSheet(QString::fromUtf8("background-image: url(:/img/texture/texture.png);"));
        ShowGraf->setInteractive(true);
        ShowGraf->setResizeAnchor(QGraphicsView::AnchorViewCenter);
        ButtonBack = new QPushButton(Maps);
        ButtonBack->setObjectName(QString::fromUtf8("ButtonBack"));
        ButtonBack->setGeometry(QRect(380, 430, 178, 29));
        ButtonBack->setMinimumSize(QSize(178, 29));
        ButtonBack->setMaximumSize(QSize(178, 29));
        QPalette palette;
        QBrush brush(QColor(214, 183, 67, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        ButtonBack->setPalette(palette);
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe Print"));
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        ButtonBack->setFont(font);
        ButtonBack->setCursor(QCursor(Qt::PointingHandCursor));
        ButtonBack->setStyleSheet(QString::fromUtf8("background-image: url(:/img/texture/defaultBtnLarge.tga);\n"
"border-image: url(:/img/texture/texture.png);"));
        label = new QLabel(Maps);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 430, 61, 21));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label->setPalette(palette1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Segoe Print"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("background-image: url(:/img/texture/texture.png);"));
        ButtomView = new QPushButton(Maps);
        ButtomView->setObjectName(QString::fromUtf8("ButtomView"));
        ButtomView->setGeometry(QRect(380, 10, 178, 29));
        ButtomView->setMinimumSize(QSize(0, 29));
        ButtomView->setMaximumSize(QSize(178, 29));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        ButtomView->setPalette(palette2);
        ButtomView->setFont(font);
        ButtomView->setCursor(QCursor(Qt::PointingHandCursor));
        ButtomView->setStyleSheet(QString::fromUtf8("background-image: url(:/img/texture/defaultBtnLarge.tga);\n"
"border-image: url(:/img/texture/texture.png);"));
        ButtomZoomIn = new QPushButton(Maps);
        ButtomZoomIn->setObjectName(QString::fromUtf8("ButtomZoomIn"));
        ButtomZoomIn->setGeometry(QRect(80, 430, 21, 23));
        ButtomZoomIn->setCursor(QCursor(Qt::PointingHandCursor));
        ButtomZoomOut = new QPushButton(Maps);
        ButtomZoomOut->setObjectName(QString::fromUtf8("ButtomZoomOut"));
        ButtomZoomOut->setGeometry(QRect(110, 430, 21, 23));
        ButtomZoomOut->setCursor(QCursor(Qt::PointingHandCursor));
        OptMaps = new QComboBox(Maps);
        OptMaps->setObjectName(QString::fromUtf8("OptMaps"));
        OptMaps->setGeometry(QRect(10, 10, 361, 29));
        QPalette palette3;
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        QBrush brush3(QColor(0, 0, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette3.setBrush(QPalette::Active, QPalette::HighlightedText, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        QBrush brush4(QColor(240, 240, 240, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush3);
        OptMaps->setPalette(palette3);
        OptMaps->setFont(font);
        OptMaps->setStyleSheet(QString::fromUtf8(""));

        retranslateUi(Maps);

        QMetaObject::connectSlotsByName(Maps);
    } // setupUi

    void retranslateUi(QDialog *Maps)
    {
        Maps->setWindowTitle(QApplication::translate("Maps", "\320\232\320\260\321\200\321\202\321\213 (\320\241 \320\277\320\276\320\273\320\265\320\267\320\275\321\213\320\274\320\270 \320\274\320\265\321\202\320\272\320\260\320\274\320\270)", 0, QApplication::UnicodeUTF8));
        ButtonBack->setText(QApplication::translate("Maps", "\320\235\320\260\320\267\320\260\320\264", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Maps", "zoom:", 0, QApplication::UnicodeUTF8));
        ButtomView->setText(QApplication::translate("Maps", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214", 0, QApplication::UnicodeUTF8));
        ButtomZoomIn->setText(QApplication::translate("Maps", "+", 0, QApplication::UnicodeUTF8));
        ButtomZoomOut->setText(QApplication::translate("Maps", "-", 0, QApplication::UnicodeUTF8));
        OptMaps->clear();
        OptMaps->insertItems(0, QStringList()
         << QApplication::translate("Maps", "\320\233\321\216\320\261\320\265\321\207 \320\222\320\276\320\272\320\267\320\260\320\273 \320\276\321\202 \321\201\321\202\320\260\320\273\320\272\320\265\321\200\320\260 \320\247\320\265\320\275\320\270\320\272", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Maps", "\320\233\321\216\320\261\320\265\321\207 \320\273\320\265\321\201", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Maps", "\320\222\320\265\320\267\321\203\320\262\320\270\320\271", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Maps", "\320\235\320\276\320\262\320\260\321\217 \320\227\320\265\320\274\320\273\321\217", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Maps", "\320\242\321\203\320\275\320\263\321\203\321\201\320\272\320\260", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Maps", "\320\242\321\203\320\275\320\263\321\203\321\201\321\201\320\272\320\260. \320\242\321\200\320\260\320\262\321\213 (\320\236\321\202 \320\270\321\201\321\201\320\273\320\265\320\264\320\276\320\262\320\260\321\202\320\265\320\273\320\265\320\271 \320\232\320\232) \320\270 \320\262 \321\207\320\260\321\201\321\202\320\275\320\276\321\201\321\202\320\270 \320\276\321\202 KirillZVER", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Maps", "\320\242\321\203\320\275\320\263\321\203\321\201\321\201\320\272\320\260 \320\276\321\202 Rederrr2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Maps", "\320\233\321\216\320\261\320\265\321\207 \320\232\320\260\321\200\320\260\320\262\320\260\320\275", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Maps", "\320\233\321\216\320\261\320\265\321\207 \320\273\320\265\321\201 (\321\201\321\205\321\200\320\276\320\275\321\213)", 0, QApplication::UnicodeUTF8)
        );
    } // retranslateUi

};

namespace Ui {
    class Maps: public Ui_Maps {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAPS_H
