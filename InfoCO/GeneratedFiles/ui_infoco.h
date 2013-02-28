/********************************************************************************
** Form generated from reading UI file 'infoco.ui'
**
** Created: Wed 27. Feb 18:25:57 2013
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
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_InfoCOClass
{
public:
    QGroupBox *MainGroupBox;
    QGridLayout *gridLayout;
    QComboBox *MainOptionBox;
    QPushButton *MainAccept;
    QLabel *TxtInfo;

    void setupUi(QDialog *InfoCOClass)
    {
        if (InfoCOClass->objectName().isEmpty())
            InfoCOClass->setObjectName(QString::fromUtf8("InfoCOClass"));
        InfoCOClass->resize(315, 158);
        InfoCOClass->setMaximumSize(QSize(315, 999));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/InfoCO/infoco.ico"), QSize(), QIcon::Normal, QIcon::Off);
        InfoCOClass->setWindowIcon(icon);
        MainGroupBox = new QGroupBox(InfoCOClass);
        MainGroupBox->setObjectName(QString::fromUtf8("MainGroupBox"));
        MainGroupBox->setGeometry(QRect(9, 9, 301, 101));
        gridLayout = new QGridLayout(MainGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        MainOptionBox = new QComboBox(MainGroupBox);
        MainOptionBox->setObjectName(QString::fromUtf8("MainOptionBox"));

        gridLayout->addWidget(MainOptionBox, 0, 0, 1, 1);

        MainAccept = new QPushButton(MainGroupBox);
        MainAccept->setObjectName(QString::fromUtf8("MainAccept"));

        gridLayout->addWidget(MainAccept, 2, 0, 1, 1);

        TxtInfo = new QLabel(InfoCOClass);
        TxtInfo->setObjectName(QString::fromUtf8("TxtInfo"));
        TxtInfo->setGeometry(QRect(70, 120, 171, 51));
        QPalette palette;
        QBrush brush(QColor(0, 0, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        TxtInfo->setPalette(palette);
        QFont font;
        font.setPointSize(7);
        font.setItalic(false);
        font.setStrikeOut(false);
        TxtInfo->setFont(font);
        TxtInfo->setAlignment(Qt::AlignCenter);
        QWidget::setTabOrder(MainOptionBox, MainAccept);

        retranslateUi(InfoCOClass);

        MainOptionBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(InfoCOClass);
    } // setupUi

    void retranslateUi(QDialog *InfoCOClass)
    {
        InfoCOClass->setWindowTitle(QApplication::translate("InfoCOClass", "InfoCO by Lovepsone", 0, QApplication::UnicodeUTF8));
        MainGroupBox->setTitle(QApplication::translate("InfoCOClass", "InfoCo \320\264\320\273\321\217 \321\201\321\202\320\260\320\273\320\272\320\265\321\200\320\276\320\262", 0, QApplication::UnicodeUTF8));
        MainOptionBox->clear();
        MainOptionBox->insertItems(0, QStringList()
         << QApplication::translate("InfoCOClass", "\320\232\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200 \320\276\320\277\321\213\321\202\320\260", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("InfoCOClass", "\320\241\320\277\320\270\321\201\320\272\320\270 \320\237\320\232/\320\232\320\270\320\264\320\260\320\273\320\276\320\262/\320\232\320\273\320\260\320\275\320\276\320\262", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("InfoCOClass", "\320\232\320\260\321\200\321\202\321\213 \320\241\320\236", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("InfoCOClass", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217 \320\276 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", 0, QApplication::UnicodeUTF8)
        );
        MainAccept->setText(QApplication::translate("InfoCOClass", "\320\237\321\200\320\270\320\275\321\217\321\202\321\214", 0, QApplication::UnicodeUTF8));
        TxtInfo->setText(QApplication::translate("InfoCOClass", "GNU General Public License (GPL) V3.0\n"
"http://www.gnu.org/licenses/gpl\n"
"Copyright \302\251 2013\n"
"", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class InfoCOClass: public Ui_InfoCOClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFOCO_H
