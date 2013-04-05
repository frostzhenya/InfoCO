/********************************************************************************
** Form generated from reading UI file 'list.ui'
**
** Created: Wed 3. Apr 19:26:40 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIST_H
#define UI_LIST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_List
{
public:
    QGroupBox *groupBoxTypeClan;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioBAPK;
    QRadioButton *radioBPK;
    QRadioButton *radioBM;
    QRadioButton *radioBRP;
    QRadioButton *radioBN;
    QRadioButton *radioN;
    QComboBox *OptList;
    QListWidget *ListView;
    QGroupBox *groupBoxTypeStalkers;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioBpk;
    QRadioButton *radioBkd;
    QLineEdit *LaineNameSeach;
    QTextEdit *EditDebug;
    QPushButton *ButtomAcceptList;
    QLabel *TxtNumeSeach;
    QPushButton *ButtomClose;

    void setupUi(QDialog *List)
    {
        if (List->objectName().isEmpty())
            List->setObjectName(QString::fromUtf8("List"));
        List->setEnabled(true);
        List->resize(399, 485);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(List->sizePolicy().hasHeightForWidth());
        List->setSizePolicy(sizePolicy);
        List->setMinimumSize(QSize(399, 485));
        List->setMaximumSize(QSize(399, 485));
        QIcon icon;
        icon.addFile(QString::fromUtf8("img/sZOInfo.png"), QSize(), QIcon::Normal, QIcon::Off);
        List->setWindowIcon(icon);
        List->setStyleSheet(QString::fromUtf8("background-image: url(:/img/texture/main_list.png);"));
        groupBoxTypeClan = new QGroupBox(List);
        groupBoxTypeClan->setObjectName(QString::fromUtf8("groupBoxTypeClan"));
        groupBoxTypeClan->setGeometry(QRect(10, 40, 181, 151));
        QPalette palette;
        QBrush brush(QColor(214, 183, 67, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        QBrush brush2(QColor(120, 120, 120, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        groupBoxTypeClan->setPalette(palette);
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe Print"));
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        groupBoxTypeClan->setFont(font);
        groupBoxTypeClan->setStyleSheet(QString::fromUtf8("background-image: url(:/img/texture/texture.png);"));
        verticalLayout = new QVBoxLayout(groupBoxTypeClan);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        radioBAPK = new QRadioButton(groupBoxTypeClan);
        radioBAPK->setObjectName(QString::fromUtf8("radioBAPK"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        radioBAPK->setPalette(palette1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Segoe Print"));
        font1.setBold(true);
        font1.setWeight(75);
        radioBAPK->setFont(font1);
        radioBAPK->setChecked(true);

        verticalLayout->addWidget(radioBAPK);

        radioBPK = new QRadioButton(groupBoxTypeClan);
        radioBPK->setObjectName(QString::fromUtf8("radioBPK"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        radioBPK->setPalette(palette2);
        radioBPK->setFont(font1);

        verticalLayout->addWidget(radioBPK);

        radioBM = new QRadioButton(groupBoxTypeClan);
        radioBM->setObjectName(QString::fromUtf8("radioBM"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        radioBM->setPalette(palette3);
        radioBM->setFont(font1);

        verticalLayout->addWidget(radioBM);

        radioBRP = new QRadioButton(groupBoxTypeClan);
        radioBRP->setObjectName(QString::fromUtf8("radioBRP"));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        radioBRP->setPalette(palette4);
        radioBRP->setFont(font1);

        verticalLayout->addWidget(radioBRP);

        radioBN = new QRadioButton(groupBoxTypeClan);
        radioBN->setObjectName(QString::fromUtf8("radioBN"));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        radioBN->setPalette(palette5);
        radioBN->setFont(font1);
        radioBN->setStyleSheet(QString::fromUtf8("background-image: url(:/img/texture/texture.png);"));

        verticalLayout->addWidget(radioBN);

        radioN = new QRadioButton(groupBoxTypeClan);
        radioN->setObjectName(QString::fromUtf8("radioN"));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        radioN->setPalette(palette6);
        radioN->setFont(font1);

        verticalLayout->addWidget(radioN);

        OptList = new QComboBox(List);
        OptList->setObjectName(QString::fromUtf8("OptList"));
        OptList->setGeometry(QRect(10, 10, 181, 22));
        ListView = new QListWidget(List);
        ListView->setObjectName(QString::fromUtf8("ListView"));
        ListView->setGeometry(QRect(200, 10, 191, 421));
        ListView->setMinimumSize(QSize(191, 411));
        ListView->setMaximumSize(QSize(191, 521));
        QPalette palette7;
        QBrush brush3(QColor(255, 255, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        ListView->setPalette(palette7);
        ListView->setStyleSheet(QString::fromUtf8("background-image: url(:/img/texture/texture.png);\n"
"background-color: rgb(0, 0, 0);"));
        ListView->setSortingEnabled(false);
        groupBoxTypeStalkers = new QGroupBox(List);
        groupBoxTypeStalkers->setObjectName(QString::fromUtf8("groupBoxTypeStalkers"));
        groupBoxTypeStalkers->setGeometry(QRect(10, 200, 181, 71));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        groupBoxTypeStalkers->setPalette(palette8);
        groupBoxTypeStalkers->setFont(font);
        groupBoxTypeStalkers->setStyleSheet(QString::fromUtf8("background-image: url(:/img/texture/texture.png);"));
        verticalLayout_2 = new QVBoxLayout(groupBoxTypeStalkers);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        radioBpk = new QRadioButton(groupBoxTypeStalkers);
        radioBpk->setObjectName(QString::fromUtf8("radioBpk"));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        radioBpk->setPalette(palette9);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Segoe Print"));
        radioBpk->setFont(font2);
        radioBpk->setChecked(true);

        verticalLayout_2->addWidget(radioBpk);

        radioBkd = new QRadioButton(groupBoxTypeStalkers);
        radioBkd->setObjectName(QString::fromUtf8("radioBkd"));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette10.setBrush(QPalette::Active, QPalette::Mid, brush);
        palette10.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Mid, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::Mid, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        radioBkd->setPalette(palette10);
        radioBkd->setFont(font2);

        verticalLayout_2->addWidget(radioBkd);

        LaineNameSeach = new QLineEdit(List);
        LaineNameSeach->setObjectName(QString::fromUtf8("LaineNameSeach"));
        LaineNameSeach->setEnabled(true);
        LaineNameSeach->setGeometry(QRect(10, 300, 181, 20));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette11.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        LaineNameSeach->setPalette(palette11);
        LaineNameSeach->setStyleSheet(QString::fromUtf8("background-image: url(:/img/texture/texture.png);\n"
"background-color: rgb(0, 0, 0);"));
        EditDebug = new QTextEdit(List);
        EditDebug->setObjectName(QString::fromUtf8("EditDebug"));
        EditDebug->setEnabled(false);
        EditDebug->setGeometry(QRect(10, 370, 181, 61));
        EditDebug->setMinimumSize(QSize(181, 61));
        EditDebug->setMaximumSize(QSize(181, 171));
        EditDebug->setStyleSheet(QString::fromUtf8("background-image: url(:/img/texture/texture.png);"));
        ButtomAcceptList = new QPushButton(List);
        ButtomAcceptList->setObjectName(QString::fromUtf8("ButtomAcceptList"));
        ButtomAcceptList->setGeometry(QRect(10, 330, 178, 29));
        ButtomAcceptList->setMinimumSize(QSize(178, 29));
        ButtomAcceptList->setMaximumSize(QSize(178, 29));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        ButtomAcceptList->setPalette(palette12);
        ButtomAcceptList->setFont(font);
        ButtomAcceptList->setCursor(QCursor(Qt::PointingHandCursor));
        ButtomAcceptList->setStyleSheet(QString::fromUtf8("background-image: url(:/img/texture/defaultBtnLarge.tga);\n"
"border-image: url(:/img/texture/texture.png);"));
        TxtNumeSeach = new QLabel(List);
        TxtNumeSeach->setObjectName(QString::fromUtf8("TxtNumeSeach"));
        TxtNumeSeach->setGeometry(QRect(10, 280, 171, 16));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette13.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        TxtNumeSeach->setPalette(palette13);
        TxtNumeSeach->setFont(font);
        TxtNumeSeach->setStyleSheet(QString::fromUtf8("background-image: url(:/img/texture/texture.png);"));
        ButtomClose = new QPushButton(List);
        ButtomClose->setObjectName(QString::fromUtf8("ButtomClose"));
        ButtomClose->setGeometry(QRect(110, 450, 178, 29));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        ButtomClose->setPalette(palette14);
        ButtomClose->setFont(font1);
        ButtomClose->setCursor(QCursor(Qt::PointingHandCursor));
        ButtomClose->setStyleSheet(QString::fromUtf8("background-image: url(:/img/texture/defaultBtnLarge.tga);\n"
"border-image: url(:/img/texture/texture.png);"));
        QWidget::setTabOrder(OptList, LaineNameSeach);
        QWidget::setTabOrder(LaineNameSeach, ButtomAcceptList);
        QWidget::setTabOrder(ButtomAcceptList, EditDebug);
        QWidget::setTabOrder(EditDebug, ListView);

        retranslateUi(List);

        QMetaObject::connectSlotsByName(List);
    } // setupUi

    void retranslateUi(QDialog *List)
    {
        List->setWindowTitle(QApplication::translate("List", "\320\241\320\277\320\270\321\201\320\272\320\270", 0, QApplication::UnicodeUTF8));
        groupBoxTypeClan->setTitle(QApplication::translate("List", "\320\242\320\270\320\277 \320\272\320\273\320\260\320\275\320\260", 0, QApplication::UnicodeUTF8));
        radioBAPK->setText(QApplication::translate("List", "\320\220\320\275\321\202\320\270\320\237\320\272 \320\272\320\273\320\260\320\275\321\213", 0, QApplication::UnicodeUTF8));
        radioBPK->setText(QApplication::translate("List", "\320\237\320\232 \320\272\320\273\320\260\320\275\321\213", 0, QApplication::UnicodeUTF8));
        radioBM->setText(QApplication::translate("List", "\320\222\320\276\320\265\320\275\320\270\320\267\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\265  \320\272\320\273\320\260\320\275\321\213", 0, QApplication::UnicodeUTF8));
        radioBRP->setText(QApplication::translate("List", "\320\240\320\237 \320\272\320\273\320\260\320\275\321\213", 0, QApplication::UnicodeUTF8));
        radioBN->setText(QApplication::translate("List", "\320\235\320\265\320\271\321\202\321\200\320\260\320\273\321\214\320\275\321\213\320\265 \320\272\320\273\320\260\320\275\321\213", 0, QApplication::UnicodeUTF8));
        radioN->setText(QApplication::translate("List", "\320\235\320\260\320\265\320\274\320\275\320\270\320\272\320\270", 0, QApplication::UnicodeUTF8));
        OptList->clear();
        OptList->insertItems(0, QStringList()
         << QApplication::translate("List", "\320\242\320\270\320\277 \321\201\320\277\320\270\321\201\320\272\320\260", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("List", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\241\321\202\320\260\320\273\320\272\320\265\321\200\320\276\320\262", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("List", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\232\320\273\320\260\320\275\320\276\320\262", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("List", "\320\237\320\276\320\270\321\201\320\272 \320\241\321\202\320\260\320\273\320\272\320\265\321\200\320\260 \320\277\320\276 \320\270\320\274\320\265\320\275\320\270", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("List", "\320\237\320\276\320\270\321\201\320\272 \320\232\320\273\320\260\320\275\320\260 \320\277\320\276 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\321\216", 0, QApplication::UnicodeUTF8)
        );
        groupBoxTypeStalkers->setTitle(QApplication::translate("List", "\320\242\320\270\320\277 \320\241\321\202\320\260\320\273\320\272\320\265\321\200\320\276\320\262", 0, QApplication::UnicodeUTF8));
        radioBpk->setText(QApplication::translate("List", "\320\237\320\232 \320\241\321\202\320\260\320\273\320\272\320\265\321\200\321\213", 0, QApplication::UnicodeUTF8));
        radioBkd->setText(QApplication::translate("List", "\320\232\320\270\320\264\320\260\320\273\321\213", 0, QApplication::UnicodeUTF8));
        LaineNameSeach->setText(QApplication::translate("List", "\320\243\321\207\320\270\321\202\321\213\320\262\320\260\320\271\321\202\320\265 \321\200\320\265\320\263\320\270\321\201\321\202\320\276\321\200 \321\201\320\270\320\274\320\262\320\276\320\273\320\276\320\262", 0, QApplication::UnicodeUTF8));
        ButtomAcceptList->setText(QApplication::translate("List", "\320\222\321\213\320\262\320\265\321\201\321\202\320\270 \321\201\320\277\320\270\321\201\320\276\320\272", 0, QApplication::UnicodeUTF8));
        TxtNumeSeach->setText(QApplication::translate("List", "\320\230\320\274\321\217 \320\264\320\273\321\217 \320\277\320\276\320\270\321\201\320\272\320\260", 0, QApplication::UnicodeUTF8));
        ButtomClose->setText(QApplication::translate("List", "\320\235\320\260\320\267\320\260\320\264", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class List: public Ui_List {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIST_H
