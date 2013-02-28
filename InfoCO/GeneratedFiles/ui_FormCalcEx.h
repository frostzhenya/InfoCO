/********************************************************************************
** Form generated from reading UI file 'FormCalcEx.ui'
**
** Created: Wed 27. Feb 14:52:01 2013
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
    QLineEdit *EditNumLvl;
    QLabel *TxtNumLvl;
    QPushButton *ButtomCalc;
    QPushButton *ButtomClose;
    QLabel *ResultTxt;

    void setupUi(QDialog *FormCalcEx)
    {
        if (FormCalcEx->objectName().isEmpty())
            FormCalcEx->setObjectName(QString::fromUtf8("FormCalcEx"));
        FormCalcEx->resize(382, 231);
        FormCalcEx->setMaximumSize(QSize(382, 231));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/InfoCO/infoco.ico"), QSize(), QIcon::Normal, QIcon::Off);
        FormCalcEx->setWindowIcon(icon);
        CalcExGroupBox = new QGroupBox(FormCalcEx);
        CalcExGroupBox->setObjectName(QString::fromUtf8("CalcExGroupBox"));
        CalcExGroupBox->setGeometry(QRect(10, 10, 351, 211));
        EditNumLvl = new QLineEdit(CalcExGroupBox);
        EditNumLvl->setObjectName(QString::fromUtf8("EditNumLvl"));
        EditNumLvl->setGeometry(QRect(150, 30, 113, 20));
        TxtNumLvl = new QLabel(CalcExGroupBox);
        TxtNumLvl->setObjectName(QString::fromUtf8("TxtNumLvl"));
        TxtNumLvl->setGeometry(QRect(30, 30, 111, 16));
        ButtomCalc = new QPushButton(CalcExGroupBox);
        ButtomCalc->setObjectName(QString::fromUtf8("ButtomCalc"));
        ButtomCalc->setGeometry(QRect(150, 70, 111, 23));
        ButtomClose = new QPushButton(CalcExGroupBox);
        ButtomClose->setObjectName(QString::fromUtf8("ButtomClose"));
        ButtomClose->setGeometry(QRect(240, 180, 101, 23));
        ResultTxt = new QLabel(CalcExGroupBox);
        ResultTxt->setObjectName(QString::fromUtf8("ResultTxt"));
        ResultTxt->setGeometry(QRect(10, 130, 321, 31));

        retranslateUi(FormCalcEx);

        QMetaObject::connectSlotsByName(FormCalcEx);
    } // setupUi

    void retranslateUi(QDialog *FormCalcEx)
    {
        FormCalcEx->setWindowTitle(QApplication::translate("FormCalcEx", "\320\232\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200 \320\276\320\277\321\213\321\202\320\260", 0, QApplication::UnicodeUTF8));
        CalcExGroupBox->setTitle(QApplication::translate("FormCalcEx", " \320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\276\321\207\320\272\320\276\320\262 \320\276\320\277\321\213\321\202\320\260 \320\264\320\273\321\217 \320\277\320\265\321\200\320\265\321\205\320\276\320\264\320\260 \320\275\320\260 \321\201\320\273\320\265\320\264. \321\203\321\200\320\276\320\262\320\265\320\275\321\214", 0, QApplication::UnicodeUTF8));
        EditNumLvl->setText(QApplication::translate("FormCalcEx", "2", 0, QApplication::UnicodeUTF8));
        TxtNumLvl->setText(QApplication::translate("FormCalcEx", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \342\204\226 \321\203\321\200\320\276\320\262\320\275\321\217", 0, QApplication::UnicodeUTF8));
        ButtomCalc->setText(QApplication::translate("FormCalcEx", "\320\237\320\276\321\201\321\207\320\270\321\202\320\260\321\202\321\214", 0, QApplication::UnicodeUTF8));
        ButtomClose->setText(QApplication::translate("FormCalcEx", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", 0, QApplication::UnicodeUTF8));
        ResultTxt->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FormCalcEx: public Ui_FormCalcEx {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMCALCEX_H
