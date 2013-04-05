/********************************************************************************
** Form generated from reading UI file 'FormCalcEx.ui'
**
** Created: Wed 3. Apr 19:26:40 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMCALCEX_H
#define UI_FORMCALCEX_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_FormCalcEx
{
public:
    QLabel *ResultTxt;
    QPushButton *ButtomCalc;
    QLabel *TxtDesiredNumLvl;
    QLabel *TxtCurrentNumLvl;
    QLineEdit *EditCurrentNumLvl;
    QLineEdit *EditDesiredNumLvl;
    QLabel *Txt;
    QPushButton *ButtomClose;

    void setupUi(QDialog *FormCalcEx)
    {
        if (FormCalcEx->objectName().isEmpty())
            FormCalcEx->setObjectName(QString::fromUtf8("FormCalcEx"));
        FormCalcEx->resize(401, 267);
        FormCalcEx->setMinimumSize(QSize(401, 267));
        FormCalcEx->setMaximumSize(QSize(401, 267));
        QIcon icon;
        icon.addFile(QString::fromUtf8("img/sZOInfo.png"), QSize(), QIcon::Normal, QIcon::Off);
        FormCalcEx->setWindowIcon(icon);
        FormCalcEx->setStyleSheet(QString::fromUtf8("background-image: url(:/img/texture/main_calc.png);"));
        ResultTxt = new QLabel(FormCalcEx);
        ResultTxt->setObjectName(QString::fromUtf8("ResultTxt"));
        ResultTxt->setGeometry(QRect(2, 2, 401, 31));
        QPalette palette;
        QBrush brush(QColor(214, 183, 67, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        ResultTxt->setPalette(palette);
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe Print"));
        font.setPointSize(8);
        font.setBold(true);
        font.setWeight(75);
        ResultTxt->setFont(font);
        ResultTxt->setStyleSheet(QString::fromUtf8("background-image: url(:/img/texture/texture.png);"));
        ButtomCalc = new QPushButton(FormCalcEx);
        ButtomCalc->setObjectName(QString::fromUtf8("ButtomCalc"));
        ButtomCalc->setGeometry(QRect(10, 190, 178, 29));
        ButtomCalc->setMaximumSize(QSize(178, 29));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        ButtomCalc->setPalette(palette1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Segoe Print"));
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(75);
        ButtomCalc->setFont(font1);
        ButtomCalc->setCursor(QCursor(Qt::PointingHandCursor));
        ButtomCalc->setStyleSheet(QString::fromUtf8("background-image: url(:/img/texture/defaultBtnLarge.tga);\n"
"border-image: url(:/img/texture/texture.png);"));
        TxtDesiredNumLvl = new QLabel(FormCalcEx);
        TxtDesiredNumLvl->setObjectName(QString::fromUtf8("TxtDesiredNumLvl"));
        TxtDesiredNumLvl->setGeometry(QRect(90, 130, 121, 16));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        TxtDesiredNumLvl->setPalette(palette2);
        TxtDesiredNumLvl->setFont(font1);
        TxtDesiredNumLvl->setStyleSheet(QString::fromUtf8("background-image: url(:/img/texture/texture.png);"));
        TxtCurrentNumLvl = new QLabel(FormCalcEx);
        TxtCurrentNumLvl->setObjectName(QString::fromUtf8("TxtCurrentNumLvl"));
        TxtCurrentNumLvl->setGeometry(QRect(90, 100, 111, 16));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        TxtCurrentNumLvl->setPalette(palette3);
        TxtCurrentNumLvl->setFont(font1);
        TxtCurrentNumLvl->setStyleSheet(QString::fromUtf8("background-image: url(:/img/texture/texture.png);"));
        EditCurrentNumLvl = new QLineEdit(FormCalcEx);
        EditCurrentNumLvl->setObjectName(QString::fromUtf8("EditCurrentNumLvl"));
        EditCurrentNumLvl->setGeometry(QRect(230, 100, 91, 20));
        QPalette palette4;
        QBrush brush2(QColor(0, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush2);
        QBrush brush3(QColor(255, 255, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        EditCurrentNumLvl->setPalette(palette4);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Segoe Script"));
        font2.setPointSize(9);
        font2.setBold(true);
        font2.setWeight(75);
        EditCurrentNumLvl->setFont(font2);
        EditCurrentNumLvl->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"background-image: url(:/img/texture/texture.png);"));
        EditDesiredNumLvl = new QLineEdit(FormCalcEx);
        EditDesiredNumLvl->setObjectName(QString::fromUtf8("EditDesiredNumLvl"));
        EditDesiredNumLvl->setGeometry(QRect(230, 130, 91, 20));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        EditDesiredNumLvl->setPalette(palette5);
        EditDesiredNumLvl->setFont(font1);
        EditDesiredNumLvl->setStyleSheet(QString::fromUtf8("background-image: url(:/img/texture/texture.png);\n"
"background-color: rgb(0, 0, 0);"));
        Txt = new QLabel(FormCalcEx);
        Txt->setObjectName(QString::fromUtf8("Txt"));
        Txt->setGeometry(QRect(100, 70, 231, 16));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Txt->setPalette(palette6);
        QFont font3;
        font3.setFamily(QString::fromUtf8("Segoe Print"));
        font3.setPointSize(7);
        font3.setBold(true);
        font3.setWeight(75);
        Txt->setFont(font3);
        Txt->setStyleSheet(QString::fromUtf8("background-image: url(:/img/texture/texture.png);"));
        ButtomClose = new QPushButton(FormCalcEx);
        ButtomClose->setObjectName(QString::fromUtf8("ButtomClose"));
        ButtomClose->setEnabled(true);
        ButtomClose->setGeometry(QRect(200, 190, 178, 29));
        ButtomClose->setMinimumSize(QSize(178, 29));
        ButtomClose->setMaximumSize(QSize(178, 29));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        ButtomClose->setPalette(palette7);
        ButtomClose->setFont(font1);
        ButtomClose->setCursor(QCursor(Qt::PointingHandCursor));
        ButtomClose->setAutoFillBackground(false);
        ButtomClose->setStyleSheet(QString::fromUtf8("background-image: url(:/img/texture/defaultBtnLarge.tga);\n"
"border-image: url(:/img/texture/texture.png);"));
        ButtomClose->setInputMethodHints(Qt::ImhNone);
        ButtomClose->setAutoDefault(false);

        retranslateUi(FormCalcEx);

        QMetaObject::connectSlotsByName(FormCalcEx);
    } // setupUi

    void retranslateUi(QDialog *FormCalcEx)
    {
        FormCalcEx->setWindowTitle(QApplication::translate("FormCalcEx", "\320\232\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200 \320\276\320\277\321\213\321\202\320\260", 0, QApplication::UnicodeUTF8));
        ResultTxt->setText(QString());
        ButtomCalc->setText(QApplication::translate("FormCalcEx", "\320\237\320\276\321\201\321\207\320\270\321\202\320\260\321\202\321\214", 0, QApplication::UnicodeUTF8));
        TxtDesiredNumLvl->setText(QApplication::translate("FormCalcEx", "\320\226\320\265\320\273\320\260\320\265\320\274\321\213\320\271 \321\203\321\200\320\276\320\262\320\265\320\275\321\214", 0, QApplication::UnicodeUTF8));
        TxtCurrentNumLvl->setText(QApplication::translate("FormCalcEx", "\320\242\320\265\320\272\321\203\321\211\320\270\320\271 \321\203\321\200\320\276\320\262\320\265\320\275\321\214", 0, QApplication::UnicodeUTF8));
        EditCurrentNumLvl->setText(QApplication::translate("FormCalcEx", "1", 0, QApplication::UnicodeUTF8));
        EditDesiredNumLvl->setText(QApplication::translate("FormCalcEx", "2", 0, QApplication::UnicodeUTF8));
        Txt->setText(QApplication::translate("FormCalcEx", " \320\232\320\276\320\273-\320\262\320\276 \320\276\320\277\321\213\321\202\320\260 \320\264\320\273\321\217 \320\277\320\265\321\200\320\265\321\205\320\276\320\264\320\260 \320\275\320\260 \321\201\320\273\320\265\320\264. \321\203\321\200\320\276\320\262\320\265\320\275\321\214", 0, QApplication::UnicodeUTF8));
        ButtomClose->setText(QApplication::translate("FormCalcEx", "\320\235\320\260\320\267\320\260\320\264", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FormCalcEx: public Ui_FormCalcEx {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMCALCEX_H
