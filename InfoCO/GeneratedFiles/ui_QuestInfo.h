/********************************************************************************
** Form generated from reading UI file 'QuestInfo.ui'
**
** Created: Fri 5. Apr 18:20:37 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUESTINFO_H
#define UI_QUESTINFO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QuestInfo
{
public:
    QGroupBox *groupBoxNpc;
    QHBoxLayout *horizontalLayout;
    QListWidget *listNpc;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QListWidget *listQuest;
    QHBoxLayout *horizontalLayout_3;
    QLabel *txtPosNpc;
    QPushButton *ButtonShowNpcMap;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *TxtDaly;
    QLineEdit *lineDaly;
    QVBoxLayout *verticalLayout_3;
    QLabel *txtInfo;
    QTextBrowser *lineInfo;
    QVBoxLayout *verticalLayout_4;
    QLabel *txtAward;
    QTextBrowser *textAward;
    QLabel *txtItem;
    QTextBrowser *textItem;
    QLabel *txtRep;
    QTextBrowser *textRep;
    QPushButton *ButtonOpenP;
    QPushButton *ButtonCloseP;
    QPushButton *ButtonBack;
    QPushButton *ButtonToMain;
    QPushButton *ButtonGoalToMaps;

    void setupUi(QDialog *QuestInfo)
    {
        if (QuestInfo->objectName().isEmpty())
            QuestInfo->setObjectName(QString::fromUtf8("QuestInfo"));
        QuestInfo->resize(590, 590);
        QuestInfo->setMinimumSize(QSize(226, 590));
        QuestInfo->setMaximumSize(QSize(590, 590));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/sZOInfo.png"), QSize(), QIcon::Normal, QIcon::Off);
        QuestInfo->setWindowIcon(icon);
        QuestInfo->setStyleSheet(QString::fromUtf8("background-image: url(:/img/texture/main_bg.png);"));
        groupBoxNpc = new QGroupBox(QuestInfo);
        groupBoxNpc->setObjectName(QString::fromUtf8("groupBoxNpc"));
        groupBoxNpc->setGeometry(QRect(10, 10, 180, 510));
        groupBoxNpc->setMinimumSize(QSize(170, 510));
        groupBoxNpc->setMaximumSize(QSize(180, 510));
        QPalette palette;
        QBrush brush(QColor(214, 183, 67, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        groupBoxNpc->setPalette(palette);
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe Print"));
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        groupBoxNpc->setFont(font);
        groupBoxNpc->setStyleSheet(QString::fromUtf8("background-image: url(:/img/texture/texture.png);"));
        horizontalLayout = new QHBoxLayout(groupBoxNpc);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        listNpc = new QListWidget(groupBoxNpc);
        listNpc->setObjectName(QString::fromUtf8("listNpc"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush2(QColor(0, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush2);
        QBrush brush3(QColor(255, 255, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        listNpc->setPalette(palette1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Segoe UI Light"));
        font1.setBold(false);
        font1.setWeight(50);
        listNpc->setFont(font1);
        listNpc->viewport()->setProperty("cursor", QVariant(QCursor(Qt::OpenHandCursor)));
        listNpc->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));

        horizontalLayout->addWidget(listNpc);

        groupBox = new QGroupBox(QuestInfo);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(230, 10, 350, 510));
        groupBox->setMinimumSize(QSize(350, 510));
        groupBox->setMaximumSize(QSize(350, 510));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        groupBox->setPalette(palette2);
        groupBox->setFont(font);
        groupBox->setStyleSheet(QString::fromUtf8("background-image: url(:/img/texture/texture.png);"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        listQuest = new QListWidget(groupBox);
        listQuest->setObjectName(QString::fromUtf8("listQuest"));
        listQuest->setMinimumSize(QSize(331, 100));
        listQuest->setMaximumSize(QSize(331, 16777215));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        listQuest->setPalette(palette3);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Segoe Print"));
        font2.setBold(true);
        font2.setWeight(75);
        listQuest->setFont(font2);
        listQuest->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(listQuest);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, -1, 0, -1);
        txtPosNpc = new QLabel(groupBox);
        txtPosNpc->setObjectName(QString::fromUtf8("txtPosNpc"));
        txtPosNpc->setMinimumSize(QSize(0, 16));
        txtPosNpc->setMaximumSize(QSize(16777215, 16));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        txtPosNpc->setPalette(palette4);
        txtPosNpc->setFont(font2);

        horizontalLayout_3->addWidget(txtPosNpc);

        ButtonShowNpcMap = new QPushButton(groupBox);
        ButtonShowNpcMap->setObjectName(QString::fromUtf8("ButtonShowNpcMap"));
        ButtonShowNpcMap->setMinimumSize(QSize(0, 16));
        ButtonShowNpcMap->setMaximumSize(QSize(16777214, 16));
        ButtonShowNpcMap->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_3->addWidget(ButtonShowNpcMap);

        horizontalSpacer_2 = new QSpacerItem(40, 16, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        TxtDaly = new QLabel(groupBox);
        TxtDaly->setObjectName(QString::fromUtf8("TxtDaly"));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        TxtDaly->setPalette(palette5);
        TxtDaly->setFont(font2);

        horizontalLayout_4->addWidget(TxtDaly);

        lineDaly = new QLineEdit(groupBox);
        lineDaly->setObjectName(QString::fromUtf8("lineDaly"));
        lineDaly->setEnabled(false);
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        lineDaly->setPalette(palette6);
        lineDaly->setFont(font2);
        lineDaly->setStyleSheet(QString::fromUtf8("background-image: url(:/img/texture/texture.png);"));

        horizontalLayout_4->addWidget(lineDaly);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        txtInfo = new QLabel(groupBox);
        txtInfo->setObjectName(QString::fromUtf8("txtInfo"));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        QBrush brush4(QColor(240, 240, 240, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        txtInfo->setPalette(palette7);
        txtInfo->setFont(font2);

        verticalLayout_3->addWidget(txtInfo);

        lineInfo = new QTextBrowser(groupBox);
        lineInfo->setObjectName(QString::fromUtf8("lineInfo"));
        lineInfo->setEnabled(true);
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        QBrush brush5(QColor(0, 0, 0, 255));
        brush5.setStyle(Qt::NoBrush);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush5);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        QBrush brush6(QColor(0, 0, 0, 255));
        brush6.setStyle(Qt::NoBrush);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        QBrush brush7(QColor(0, 0, 0, 255));
        brush7.setStyle(Qt::NoBrush);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        lineInfo->setPalette(palette8);
        lineInfo->setFont(font2);

        verticalLayout_3->addWidget(lineInfo);


        verticalLayout->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        txtAward = new QLabel(groupBox);
        txtAward->setObjectName(QString::fromUtf8("txtAward"));
        txtAward->setEnabled(true);
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        txtAward->setPalette(palette9);
        txtAward->setFont(font2);

        verticalLayout_4->addWidget(txtAward);

        textAward = new QTextBrowser(groupBox);
        textAward->setObjectName(QString::fromUtf8("textAward"));
        textAward->setEnabled(true);
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette10.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        QBrush brush8(QColor(0, 0, 0, 255));
        brush8.setStyle(Qt::NoBrush);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush8);
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        QBrush brush9(QColor(0, 0, 0, 255));
        brush9.setStyle(Qt::NoBrush);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        QBrush brush10(QColor(0, 0, 0, 255));
        brush10.setStyle(Qt::NoBrush);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush10);
        textAward->setPalette(palette10);
        textAward->setFont(font2);

        verticalLayout_4->addWidget(textAward);

        txtItem = new QLabel(groupBox);
        txtItem->setObjectName(QString::fromUtf8("txtItem"));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        txtItem->setPalette(palette11);
        txtItem->setFont(font2);

        verticalLayout_4->addWidget(txtItem);

        textItem = new QTextBrowser(groupBox);
        textItem->setObjectName(QString::fromUtf8("textItem"));
        textItem->setEnabled(true);
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette12.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette12.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        QBrush brush11(QColor(0, 0, 0, 255));
        brush11.setStyle(Qt::NoBrush);
        palette12.setBrush(QPalette::Active, QPalette::Base, brush11);
        palette12.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette12.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette12.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        QBrush brush12(QColor(0, 0, 0, 255));
        brush12.setStyle(Qt::NoBrush);
        palette12.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette12.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette12.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette12.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        QBrush brush13(QColor(0, 0, 0, 255));
        brush13.setStyle(Qt::NoBrush);
        palette12.setBrush(QPalette::Disabled, QPalette::Base, brush13);
        textItem->setPalette(palette12);
        textItem->setFont(font2);

        verticalLayout_4->addWidget(textItem);

        txtRep = new QLabel(groupBox);
        txtRep->setObjectName(QString::fromUtf8("txtRep"));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        txtRep->setPalette(palette13);
        txtRep->setFont(font2);

        verticalLayout_4->addWidget(txtRep);

        textRep = new QTextBrowser(groupBox);
        textRep->setObjectName(QString::fromUtf8("textRep"));
        textRep->setEnabled(true);
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette14.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette14.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        QBrush brush14(QColor(0, 0, 0, 255));
        brush14.setStyle(Qt::NoBrush);
        palette14.setBrush(QPalette::Active, QPalette::Base, brush14);
        palette14.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette14.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette14.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        QBrush brush15(QColor(0, 0, 0, 255));
        brush15.setStyle(Qt::NoBrush);
        palette14.setBrush(QPalette::Inactive, QPalette::Base, brush15);
        palette14.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette14.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette14.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        QBrush brush16(QColor(0, 0, 0, 255));
        brush16.setStyle(Qt::NoBrush);
        palette14.setBrush(QPalette::Disabled, QPalette::Base, brush16);
        textRep->setPalette(palette14);
        textRep->setFont(font2);

        verticalLayout_4->addWidget(textRep);


        verticalLayout->addLayout(verticalLayout_4);

        ButtonOpenP = new QPushButton(QuestInfo);
        ButtonOpenP->setObjectName(QString::fromUtf8("ButtonOpenP"));
        ButtonOpenP->setGeometry(QRect(195, 130, 30, 30));
        ButtonOpenP->setStyleSheet(QString::fromUtf8("background-image: url(:/img/texture/ButtonRight.png);\n"
"border-image: url(:/img/texture/texture.png);"));
        ButtonCloseP = new QPushButton(QuestInfo);
        ButtonCloseP->setObjectName(QString::fromUtf8("ButtonCloseP"));
        ButtonCloseP->setGeometry(QRect(195, 130, 30, 30));
        ButtonCloseP->setStyleSheet(QString::fromUtf8("background-image: url(:/img/texture/ButtonLeft.png);\n"
"border-image: url(:/img/texture/texture.png);"));
        ButtonBack = new QPushButton(QuestInfo);
        ButtonBack->setObjectName(QString::fromUtf8("ButtonBack"));
        ButtonBack->setGeometry(QRect(10, 530, 178, 29));
        ButtonBack->setMinimumSize(QSize(178, 29));
        ButtonBack->setMaximumSize(QSize(178, 29));
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette15.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        ButtonBack->setPalette(palette15);
        ButtonBack->setFont(font);
        ButtonBack->setCursor(QCursor(Qt::PointingHandCursor));
        ButtonBack->setStyleSheet(QString::fromUtf8("background-image: url(:/img/texture/defaultBtnLarge.tga);\n"
"border-image: url(:/img/texture/texture.png);"));
        ButtonToMain = new QPushButton(QuestInfo);
        ButtonToMain->setObjectName(QString::fromUtf8("ButtonToMain"));
        ButtonToMain->setGeometry(QRect(10, 560, 178, 29));
        ButtonToMain->setMinimumSize(QSize(178, 29));
        ButtonToMain->setMaximumSize(QSize(178, 29));
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette16.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        ButtonToMain->setPalette(palette16);
        ButtonToMain->setFont(font);
        ButtonToMain->setCursor(QCursor(Qt::PointingHandCursor));
        ButtonToMain->setStyleSheet(QString::fromUtf8("background-image: url(:/img/texture/defaultBtnLarge.tga);\n"
"border-image: url(:/img/texture/texture.png);"));
        ButtonGoalToMaps = new QPushButton(QuestInfo);
        ButtonGoalToMaps->setObjectName(QString::fromUtf8("ButtonGoalToMaps"));
        ButtonGoalToMaps->setGeometry(QRect(320, 540, 178, 28));
        ButtonGoalToMaps->setMinimumSize(QSize(178, 28));
        ButtonGoalToMaps->setMaximumSize(QSize(178, 28));
        QPalette palette17;
        palette17.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette17.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        ButtonGoalToMaps->setPalette(palette17);
        QFont font3;
        font3.setFamily(QString::fromUtf8("Segoe Print"));
        font3.setPointSize(7);
        font3.setBold(true);
        font3.setWeight(75);
        ButtonGoalToMaps->setFont(font3);
        ButtonGoalToMaps->setCursor(QCursor(Qt::PointingHandCursor));
        ButtonGoalToMaps->setStyleSheet(QString::fromUtf8("background-image: url(:/img/texture/defaultBtnLarge.tga);\n"
"border-image: url(:/img/texture/texture.png);"));
        groupBoxNpc->raise();
        groupBox->raise();
        ButtonOpenP->raise();
        ButtonCloseP->raise();
        ButtonBack->raise();
        ButtonToMain->raise();
        ButtonGoalToMaps->raise();
        ButtonGoalToMaps->raise();

        retranslateUi(QuestInfo);

        QMetaObject::connectSlotsByName(QuestInfo);
    } // setupUi

    void retranslateUi(QDialog *QuestInfo)
    {
        QuestInfo->setWindowTitle(QApplication::translate("QuestInfo", "\320\230\320\275\321\204\320\260 \320\277\320\276 Quest'a\320\274", 0, QApplication::UnicodeUTF8));
        groupBoxNpc->setTitle(QApplication::translate("QuestInfo", "\320\222\321\213\320\261\320\276\321\200 Npc", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("QuestInfo", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217 \320\277\320\276 Quest'y", 0, QApplication::UnicodeUTF8));
        txtPosNpc->setText(QApplication::translate("QuestInfo", "\320\237\320\276\320\267\320\270\321\206\320\270\321\217 NPC:", 0, QApplication::UnicodeUTF8));
        ButtonShowNpcMap->setText(QApplication::translate("QuestInfo", "\320\237\320\276\321\201\320\274\320\276\321\202\321\200\320\265\321\202\321\214 \320\275\320\260 \320\272\320\260\321\200\321\202\320\265", 0, QApplication::UnicodeUTF8));
        TxtDaly->setText(QApplication::translate("QuestInfo", "\320\225\320\266\320\265\320\264\320\275\320\265\320\262\320\275\321\213\320\271?:", 0, QApplication::UnicodeUTF8));
        txtInfo->setText(QApplication::translate("QuestInfo", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217:", 0, QApplication::UnicodeUTF8));
        txtAward->setText(QApplication::translate("QuestInfo", "\320\235\320\260\320\263\321\200\320\260\320\264\320\260 - \320\276\320\277\321\213\321\202:", 0, QApplication::UnicodeUTF8));
        txtItem->setText(QApplication::translate("QuestInfo", "\320\235\320\260\320\263\321\200\320\260\320\264\320\260 - \320\262\320\265\321\211\321\214:", 0, QApplication::UnicodeUTF8));
        txtRep->setText(QApplication::translate("QuestInfo", "\320\235\320\260\320\263\321\200\320\260\320\264\320\260 - \321\200\320\265\320\277\321\203\321\202\320\260\321\206\320\270\321\217:", 0, QApplication::UnicodeUTF8));
        ButtonOpenP->setText(QString());
        ButtonCloseP->setText(QString());
        ButtonBack->setText(QApplication::translate("QuestInfo", "\320\235\320\260\320\267\320\260\320\264", 0, QApplication::UnicodeUTF8));
        ButtonToMain->setText(QApplication::translate("QuestInfo", "\320\235\320\260 \320\223\320\273\320\260\320\262\320\275\321\203\321\216", 0, QApplication::UnicodeUTF8));
        ButtonGoalToMaps->setText(QApplication::translate("QuestInfo", "\320\237\320\276\321\201\320\274\320\276\321\202\321\200\320\265\321\202\321\214 \321\206\320\265\320\273\321\214 \320\272\320\262 \320\275\320\260 \320\272\320\260\321\200\321\202\320\265", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QuestInfo: public Ui_QuestInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUESTINFO_H
