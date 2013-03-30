/********************************************************************************
** Form generated from reading UI file 'infoco.ui'
**
** Created: Tue 26. Mar 19:04:13 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFOCO_H
#define UI_INFOCO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_InfoCOClass
{
public:
    QPushButton *ButtonMaps;
    QPushButton *ButtonQuest;
    QPushButton *ButtonBloc;
    QPushButton *ButtonCalc;
    QPushButton *ButtonInfo;
    QPushButton *ButtonList;
    QPushButton *ButtonEditQuest;

    void setupUi(QDialog *InfoCOClass)
    {
        if (InfoCOClass->objectName().isEmpty())
            InfoCOClass->setObjectName(QString::fromUtf8("InfoCOClass"));
        InfoCOClass->setWindowModality(Qt::NonModal);
        InfoCOClass->resize(493, 218);
        InfoCOClass->setMinimumSize(QSize(1, 1));
        InfoCOClass->setMaximumSize(QSize(500, 218));
        QPalette palette;
        InfoCOClass->setPalette(palette);
        InfoCOClass->setContextMenuPolicy(Qt::ActionsContextMenu);
        QIcon icon;
        icon.addFile(QString::fromUtf8("img/sZOInfo.png"), QSize(), QIcon::Normal, QIcon::Off);
        InfoCOClass->setWindowIcon(icon);
        InfoCOClass->setWindowOpacity(2);
        InfoCOClass->setStyleSheet(QString::fromUtf8("background-image: url(:/img/texture/main_small.png);"));
        ButtonMaps = new QPushButton(InfoCOClass);
        ButtonMaps->setObjectName(QString::fromUtf8("ButtonMaps"));
        ButtonMaps->setGeometry(QRect(310, 90, 146, 32));
        QPalette palette1;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush1(QColor(214, 183, 67, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        QBrush brush3(QColor(120, 120, 120, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        ButtonMaps->setPalette(palette1);
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe Print"));
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        ButtonMaps->setFont(font);
        ButtonMaps->setCursor(QCursor(Qt::PointingHandCursor));
        ButtonMaps->setStyleSheet(QString::fromUtf8("background-image: url(:/img/texture/buttom_main.png);\n"
"border-image: url(:/img/texture/texture.png);\n"
""));
        ButtonQuest = new QPushButton(InfoCOClass);
        ButtonQuest->setObjectName(QString::fromUtf8("ButtonQuest"));
        ButtonQuest->setGeometry(QRect(100, 120, 146, 32));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        ButtonQuest->setPalette(palette2);
        ButtonQuest->setFont(font);
        ButtonQuest->setCursor(QCursor(Qt::PointingHandCursor));
        ButtonQuest->setStyleSheet(QString::fromUtf8("background-image: url(:/img/texture/buttom_main.png);\n"
"border-image: url(:/img/texture/texture.png);\n"
""));
        ButtonBloc = new QPushButton(InfoCOClass);
        ButtonBloc->setObjectName(QString::fromUtf8("ButtonBloc"));
        ButtonBloc->setGeometry(QRect(240, 120, 146, 32));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        ButtonBloc->setPalette(palette3);
        ButtonBloc->setFont(font);
        ButtonBloc->setCursor(QCursor(Qt::PointingHandCursor));
        ButtonBloc->setStyleSheet(QString::fromUtf8("background-image: url(:/img/texture/buttom_main.png);\n"
"border-image: url(:/img/texture/texture.png);\n"
""));
        ButtonBloc->setCheckable(true);
        ButtonBloc->setChecked(true);
        ButtonBloc->setDefault(false);
        ButtonCalc = new QPushButton(InfoCOClass);
        ButtonCalc->setObjectName(QString::fromUtf8("ButtonCalc"));
        ButtonCalc->setGeometry(QRect(170, 90, 146, 32));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        ButtonCalc->setPalette(palette4);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Segoe Print"));
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        ButtonCalc->setFont(font1);
        ButtonCalc->setCursor(QCursor(Qt::PointingHandCursor));
        ButtonCalc->setStyleSheet(QString::fromUtf8("background-image: url(:/img/texture/buttom_main.png);\n"
"border-image: url(:/img/texture/texture.png);\n"
""));
        ButtonInfo = new QPushButton(InfoCOClass);
        ButtonInfo->setObjectName(QString::fromUtf8("ButtonInfo"));
        ButtonInfo->setGeometry(QRect(130, 200, 215, 16));
        QFont font2;
        font2.setBold(false);
        font2.setWeight(50);
        ButtonInfo->setFont(font2);
        ButtonInfo->setCursor(QCursor(Qt::PointingHandCursor));
        ButtonInfo->setStyleSheet(QString::fromUtf8("background-image: url(:/img/texture/buttom_info.png);\n"
"border-image: url(:/img/texture/texture.png);"));
        ButtonList = new QPushButton(InfoCOClass);
        ButtonList->setObjectName(QString::fromUtf8("ButtonList"));
        ButtonList->setGeometry(QRect(30, 90, 146, 32));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::Text, brush);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        ButtonList->setPalette(palette5);
        ButtonList->setFont(font1);
        ButtonList->setCursor(QCursor(Qt::PointingHandCursor));
        ButtonList->setStyleSheet(QString::fromUtf8("background-image: url(:/img/texture/buttom_main.png);\n"
"border-image: url(:/img/texture/texture.png);\n"
""));
        ButtonEditQuest = new QPushButton(InfoCOClass);
        ButtonEditQuest->setObjectName(QString::fromUtf8("ButtonEditQuest"));
        ButtonEditQuest->setGeometry(QRect(0, 0, 1, 1));
        ButtonEditQuest->setMinimumSize(QSize(1, 1));
        ButtonEditQuest->setMaximumSize(QSize(1, 1));
        ButtonEditQuest->setStyleSheet(QString::fromUtf8("background-image: url(:/img/texture/texture.png);\n"
"border-image: url(:/img/texture/texture.png);"));

        retranslateUi(InfoCOClass);

        QMetaObject::connectSlotsByName(InfoCOClass);
    } // setupUi

    void retranslateUi(QDialog *InfoCOClass)
    {
        InfoCOClass->setWindowTitle(QApplication::translate("InfoCOClass", "sZoneInfo by Lovepsone", 0, QApplication::UnicodeUTF8));
        ButtonMaps->setText(QApplication::translate("InfoCOClass", "\320\232\320\260\321\200\321\202\321\213 sZO", 0, QApplication::UnicodeUTF8));
        ButtonQuest->setText(QApplication::translate("InfoCOClass", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217 \320\277\320\276 \320\272\320\262", 0, QApplication::UnicodeUTF8));
        ButtonBloc->setText(QApplication::translate("InfoCOClass", "\320\234\320\270\320\275\320\270 \320\221\320\273\320\276\320\272\320\275\320\276\321\202", 0, QApplication::UnicodeUTF8));
        ButtonCalc->setText(QApplication::translate("InfoCOClass", "\320\232\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200 \320\276\320\277\321\213\321\202\320\260", 0, QApplication::UnicodeUTF8));
        ButtonInfo->setText(QString());
#ifndef QT_NO_TOOLTIP
        ButtonList->setToolTip(QApplication::translate("InfoCOClass", "<html><head/><body><p><br/></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        ButtonList->setText(QApplication::translate("InfoCOClass", "\320\241\320\277\320\270\321\201\320\272\320\270", 0, QApplication::UnicodeUTF8));
        ButtonEditQuest->setText(QString());
        ButtonEditQuest->setShortcut(QApplication::translate("InfoCOClass", "F1", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class InfoCOClass: public Ui_InfoCOClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFOCO_H
