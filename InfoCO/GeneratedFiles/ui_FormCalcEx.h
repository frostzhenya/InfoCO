/********************************************************************************
** Form generated from reading UI file 'FormCalcEx.ui'
**
** Created: Tue 26. Mar 18:37:08 2013
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
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_FormCalcEx
{
public:
    QGroupBox *CalcExGroupBox;
    QLineEdit *EditCurrentNumLvl;
    QLabel *TxtCurrentNumLvl;
    QPushButton *ButtomCalc;
    QPushButton *ButtomClose;
    QLabel *ResultTxt;
    QLineEdit *EditDesiredNumLvl;
    QLabel *TxtDesiredNumLvl;

    void setupUi(QDialog *FormCalcEx)
    {
        if (FormCalcEx->objectName().isEmpty())
            FormCalcEx->setObjectName(QString::fromUtf8("FormCalcEx"));
        FormCalcEx->resize(382, 231);
        FormCalcEx->setMaximumSize(QSize(382, 231));
        QIcon icon;
        icon.addFile(QString::fromUtf8("img/sZOInfo.png"), QSize(), QIcon::Normal, QIcon::Off);
        FormCalcEx->setWindowIcon(icon);
        CalcExGroupBox = new QGroupBox(FormCalcEx);
        CalcExGroupBox->setObjectName(QString::fromUtf8("CalcExGroupBox"));
        CalcExGroupBox->setGeometry(QRect(10, 10, 351, 211));
        EditCurrentNumLvl = new QLineEdit(CalcExGroupBox);
        EditCurrentNumLvl->setObjectName(QString::fromUtf8("EditCurrentNumLvl"));
        EditCurrentNumLvl->setGeometry(QRect(150, 20, 113, 20));
        TxtCurrentNumLvl = new QLabel(CalcExGroupBox);
        TxtCurrentNumLvl->setObjectName(QString::fromUtf8("TxtCurrentNumLvl"));
        TxtCurrentNumLvl->setGeometry(QRect(30, 20, 111, 16));
        ButtomCalc = new QPushButton(CalcExGroupBox);
        ButtomCalc->setObjectName(QString::fromUtf8("ButtomCalc"));
        ButtomCalc->setGeometry(QRect(150, 80, 111, 23));
        ButtomClose = new QPushButton(CalcExGroupBox);
        ButtomClose->setObjectName(QString::fromUtf8("ButtomClose"));
        ButtomClose->setGeometry(QRect(240, 180, 101, 23));
        ResultTxt = new QLabel(CalcExGroupBox);
        ResultTxt->setObjectName(QString::fromUtf8("ResultTxt"));
        ResultTxt->setGeometry(QRect(10, 130, 321, 31));
        EditDesiredNumLvl = new QLineEdit(CalcExGroupBox);
        EditDesiredNumLvl->setObjectName(QString::fromUtf8("EditDesiredNumLvl"));
        EditDesiredNumLvl->setGeometry(QRect(150, 50, 113, 20));
        TxtDesiredNumLvl = new QLabel(CalcExGroupBox);
        TxtDesiredNumLvl->setObjectName(QString::fromUtf8("TxtDesiredNumLvl"));
        TxtDesiredNumLvl->setGeometry(QRect(30, 50, 101, 16));

        retranslateUi(FormCalcEx);

        QMetaObject::connectSlotsByName(FormCalcEx);
    } // setupUi

    void retranslateUi(QDialog *FormCalcEx)
    {
        FormCalcEx->setWindowTitle(QApplication::translate("FormCalcEx", "\320\232\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200 \320\276\320\277\321\213\321\202\320\260", 0, QApplication::UnicodeUTF8));
        CalcExGroupBox->setTitle(QApplication::translate("FormCalcEx", " \320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\276\321\207\320\272\320\276\320\262 \320\276\320\277\321\213\321\202\320\260 \320\264\320\273\321\217 \320\277\320\265\321\200\320\265\321\205\320\276\320\264\320\260 \320\275\320\260 \321\201\320\273\320\265\320\264. \321\203\321\200\320\276\320\262\320\265\320\275\321\214", 0, QApplication::UnicodeUTF8));
        EditCurrentNumLvl->setText(QApplication::translate("FormCalcEx", "1", 0, QApplication::UnicodeUTF8));
        TxtCurrentNumLvl->setText(QApplication::translate("FormCalcEx", "\320\242\320\265\320\272\321\203\321\211\320\270\320\271 \321\203\321\200\320\276\320\262\320\265\320\275\321\214", 0, QApplication::UnicodeUTF8));
        ButtomCalc->setText(QApplication::translate("FormCalcEx", "\320\237\320\276\321\201\321\207\320\270\321\202\320\260\321\202\321\214", 0, QApplication::UnicodeUTF8));
        ButtomClose->setText(QApplication::translate("FormCalcEx", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", 0, QApplication::UnicodeUTF8));
        ResultTxt->setText(QString());
        EditDesiredNumLvl->setText(QApplication::translate("FormCalcEx", "2", 0, QApplication::UnicodeUTF8));
        TxtDesiredNumLvl->setText(QApplication::translate("FormCalcEx", "\320\226\320\265\320\273\320\260\320\265\320\274\321\213\320\271 \321\203\321\200\320\276\320\262\320\265\320\275\321\214", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FormCalcEx: public Ui_FormCalcEx {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMCALCEX_H
