/********************************************************************************
** Form generated from reading UI file 'quest.ui'
**
** Created: Tue 26. Mar 18:37:09 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUEST_H
#define UI_QUEST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_quest
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *OptBox;
    QHBoxLayout *horizontalLayout;
    QLabel *TxtChoiceLoc;
    QComboBox *LocBox;
    QPushButton *ButtomChoice;
    QGroupBox *OptDopBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *NameBox;
    QPushButton *ButtomChoiceName;
    QGroupBox *OptQuestBox;
    QLabel *txtQuest;
    QComboBox *QuestBox;
    QPushButton *ButtomChoiceQuest;
    QGroupBox *MainBox;
    QVBoxLayout *verticalLayout_5;
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
    QHBoxLayout *horizontalLayout_8;
    QPushButton *ButtonGoalToMaps;
    QSpacerItem *horizontalSpacer;
    QPushButton *ButtonClose;

    void setupUi(QDialog *quest)
    {
        if (quest->objectName().isEmpty())
            quest->setObjectName(QString::fromUtf8("quest"));
        quest->resize(642, 547);
        quest->setMinimumSize(QSize(0, 0));
        quest->setMaximumSize(QSize(642, 547));
        QIcon icon;
        icon.addFile(QString::fromUtf8("img/sZOInfo.png"), QSize(), QIcon::Normal, QIcon::Off);
        quest->setWindowIcon(icon);
        quest->setLayoutDirection(Qt::LeftToRight);
        quest->setAutoFillBackground(false);
        verticalLayout = new QVBoxLayout(quest);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        OptBox = new QGroupBox(quest);
        OptBox->setObjectName(QString::fromUtf8("OptBox"));
        OptBox->setMinimumSize(QSize(624, 0));
        OptBox->setMaximumSize(QSize(624, 50));
        horizontalLayout = new QHBoxLayout(OptBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        TxtChoiceLoc = new QLabel(OptBox);
        TxtChoiceLoc->setObjectName(QString::fromUtf8("TxtChoiceLoc"));

        horizontalLayout->addWidget(TxtChoiceLoc);

        LocBox = new QComboBox(OptBox);
        LocBox->setObjectName(QString::fromUtf8("LocBox"));

        horizontalLayout->addWidget(LocBox);

        ButtomChoice = new QPushButton(OptBox);
        ButtomChoice->setObjectName(QString::fromUtf8("ButtomChoice"));

        horizontalLayout->addWidget(ButtomChoice);


        verticalLayout->addWidget(OptBox);

        OptDopBox = new QGroupBox(quest);
        OptDopBox->setObjectName(QString::fromUtf8("OptDopBox"));
        OptDopBox->setMinimumSize(QSize(624, 50));
        OptDopBox->setMaximumSize(QSize(624, 50));
        horizontalLayout_2 = new QHBoxLayout(OptDopBox);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(OptDopBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        NameBox = new QComboBox(OptDopBox);
        NameBox->setObjectName(QString::fromUtf8("NameBox"));
        NameBox->setMaximumSize(QSize(16777215, 50));

        horizontalLayout_2->addWidget(NameBox);

        ButtomChoiceName = new QPushButton(OptDopBox);
        ButtomChoiceName->setObjectName(QString::fromUtf8("ButtomChoiceName"));

        horizontalLayout_2->addWidget(ButtomChoiceName);


        verticalLayout->addWidget(OptDopBox);

        OptQuestBox = new QGroupBox(quest);
        OptQuestBox->setObjectName(QString::fromUtf8("OptQuestBox"));
        OptQuestBox->setMinimumSize(QSize(624, 50));
        OptQuestBox->setMaximumSize(QSize(624, 50));
        txtQuest = new QLabel(OptQuestBox);
        txtQuest->setObjectName(QString::fromUtf8("txtQuest"));
        txtQuest->setGeometry(QRect(10, 23, 95, 16));
        QuestBox = new QComboBox(OptQuestBox);
        QuestBox->setObjectName(QString::fromUtf8("QuestBox"));
        QuestBox->setGeometry(QRect(113, 23, 391, 16));
        QuestBox->setMaximumSize(QSize(16777215, 50));
        ButtomChoiceQuest = new QPushButton(OptQuestBox);
        ButtomChoiceQuest->setObjectName(QString::fromUtf8("ButtomChoiceQuest"));
        ButtomChoiceQuest->setGeometry(QRect(513, 23, 101, 16));

        verticalLayout->addWidget(OptQuestBox);

        MainBox = new QGroupBox(quest);
        MainBox->setObjectName(QString::fromUtf8("MainBox"));
        MainBox->setMinimumSize(QSize(624, 361));
        MainBox->setMaximumSize(QSize(624, 361));
        verticalLayout_5 = new QVBoxLayout(MainBox);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, -1, 0, -1);
        txtPosNpc = new QLabel(MainBox);
        txtPosNpc->setObjectName(QString::fromUtf8("txtPosNpc"));
        txtPosNpc->setMinimumSize(QSize(0, 16));
        txtPosNpc->setMaximumSize(QSize(16777215, 16));

        horizontalLayout_3->addWidget(txtPosNpc);

        ButtonShowNpcMap = new QPushButton(MainBox);
        ButtonShowNpcMap->setObjectName(QString::fromUtf8("ButtonShowNpcMap"));
        ButtonShowNpcMap->setMinimumSize(QSize(0, 16));
        ButtonShowNpcMap->setMaximumSize(QSize(16777214, 16));

        horizontalLayout_3->addWidget(ButtonShowNpcMap);

        horizontalSpacer_2 = new QSpacerItem(40, 16, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_5->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        TxtDaly = new QLabel(MainBox);
        TxtDaly->setObjectName(QString::fromUtf8("TxtDaly"));

        horizontalLayout_4->addWidget(TxtDaly);

        lineDaly = new QLineEdit(MainBox);
        lineDaly->setObjectName(QString::fromUtf8("lineDaly"));
        lineDaly->setEnabled(false);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        lineDaly->setPalette(palette);

        horizontalLayout_4->addWidget(lineDaly);


        verticalLayout_5->addLayout(horizontalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        txtInfo = new QLabel(MainBox);
        txtInfo->setObjectName(QString::fromUtf8("txtInfo"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        QBrush brush2(QColor(240, 240, 240, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        txtInfo->setPalette(palette1);

        verticalLayout_3->addWidget(txtInfo);

        lineInfo = new QTextBrowser(MainBox);
        lineInfo->setObjectName(QString::fromUtf8("lineInfo"));
        lineInfo->setEnabled(false);
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        lineInfo->setPalette(palette2);

        verticalLayout_3->addWidget(lineInfo);


        verticalLayout_5->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        txtAward = new QLabel(MainBox);
        txtAward->setObjectName(QString::fromUtf8("txtAward"));
        txtAward->setEnabled(true);

        verticalLayout_4->addWidget(txtAward);

        textAward = new QTextBrowser(MainBox);
        textAward->setObjectName(QString::fromUtf8("textAward"));
        textAward->setEnabled(false);
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        textAward->setPalette(palette3);

        verticalLayout_4->addWidget(textAward);

        txtItem = new QLabel(MainBox);
        txtItem->setObjectName(QString::fromUtf8("txtItem"));

        verticalLayout_4->addWidget(txtItem);

        textItem = new QTextBrowser(MainBox);
        textItem->setObjectName(QString::fromUtf8("textItem"));
        textItem->setEnabled(false);
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        textItem->setPalette(palette4);

        verticalLayout_4->addWidget(textItem);

        txtRep = new QLabel(MainBox);
        txtRep->setObjectName(QString::fromUtf8("txtRep"));

        verticalLayout_4->addWidget(txtRep);

        textRep = new QTextBrowser(MainBox);
        textRep->setObjectName(QString::fromUtf8("textRep"));
        textRep->setEnabled(false);
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        textRep->setPalette(palette5);

        verticalLayout_4->addWidget(textRep);


        verticalLayout_5->addLayout(verticalLayout_4);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        ButtonGoalToMaps = new QPushButton(MainBox);
        ButtonGoalToMaps->setObjectName(QString::fromUtf8("ButtonGoalToMaps"));

        horizontalLayout_8->addWidget(ButtonGoalToMaps);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);

        ButtonClose = new QPushButton(MainBox);
        ButtonClose->setObjectName(QString::fromUtf8("ButtonClose"));

        horizontalLayout_8->addWidget(ButtonClose);


        verticalLayout_5->addLayout(horizontalLayout_8);


        verticalLayout->addWidget(MainBox);


        retranslateUi(quest);

        QMetaObject::connectSlotsByName(quest);
    } // setupUi

    void retranslateUi(QDialog *quest)
    {
        quest->setWindowTitle(QApplication::translate("quest", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217 \320\277\320\276 \320\272\320\262\320\265\321\201\321\202\320\260\320\274", 0, QApplication::UnicodeUTF8));
        OptBox->setTitle(QApplication::translate("quest", "\320\236\320\277\321\206\320\270\321\217", 0, QApplication::UnicodeUTF8));
        TxtChoiceLoc->setText(QApplication::translate("quest", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\273\320\276\320\272\320\260\321\206\320\270\321\216", 0, QApplication::UnicodeUTF8));
        LocBox->clear();
        LocBox->insertItems(0, QStringList()
         << QApplication::translate("quest", "\320\241\321\202\320\260\320\275\321\206\320\270\321\217", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("quest", "\320\233\321\216\320\261\320\265\321\207", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("quest", "\320\233\321\216\320\261\320\265\321\207 (\320\273\320\265\321\201)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("quest", "\320\222\320\265\320\267\321\203\320\262\320\270\320\271", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("quest", "\320\235\320\276\320\262\320\260\321\217 \320\267\320\265\320\274\320\273\321\217", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("quest", "\320\242\321\203\320\275\320\263\321\203\320\267\320\272\320\260", 0, QApplication::UnicodeUTF8)
        );
        ButtomChoice->setText(QApplication::translate("quest", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214", 0, QApplication::UnicodeUTF8));
        OptDopBox->setTitle(QApplication::translate("quest", "\320\224\320\276\320\277. \320\276\320\277\321\206\320\270\320\270", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("quest", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 NPC", 0, QApplication::UnicodeUTF8));
        ButtomChoiceName->setText(QApplication::translate("quest", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214", 0, QApplication::UnicodeUTF8));
        OptQuestBox->setTitle(QApplication::translate("quest", "\320\222\321\213\320\261\320\276\321\200 \320\267\320\260\320\264\320\260\320\275\320\270\321\217", 0, QApplication::UnicodeUTF8));
        txtQuest->setText(QApplication::translate("quest", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\267\320\260\320\264\320\260\320\275\320\270\320\265", 0, QApplication::UnicodeUTF8));
        ButtomChoiceQuest->setText(QApplication::translate("quest", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214", 0, QApplication::UnicodeUTF8));
        MainBox->setTitle(QString());
        txtPosNpc->setText(QApplication::translate("quest", "\320\237\320\276\320\267\320\270\321\206\320\270\321\217 NPC:", 0, QApplication::UnicodeUTF8));
        ButtonShowNpcMap->setText(QApplication::translate("quest", "\320\237\320\276\321\201\320\274\320\276\321\202\321\200\320\265\321\202\321\214 \320\275\320\260 \320\272\320\260\321\200\321\202\320\265", 0, QApplication::UnicodeUTF8));
        TxtDaly->setText(QApplication::translate("quest", "\320\225\320\266\320\265\320\264\320\275\320\265\320\262\320\275\321\213\320\271?:", 0, QApplication::UnicodeUTF8));
        txtInfo->setText(QApplication::translate("quest", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217:", 0, QApplication::UnicodeUTF8));
        txtAward->setText(QApplication::translate("quest", "\320\235\320\260\320\263\321\200\320\260\320\264\320\260 - \320\276\320\277\321\213\321\202:", 0, QApplication::UnicodeUTF8));
        txtItem->setText(QApplication::translate("quest", "\320\235\320\260\320\263\321\200\320\260\320\264\320\260 - \320\262\320\265\321\211\321\214:", 0, QApplication::UnicodeUTF8));
        txtRep->setText(QApplication::translate("quest", "\320\235\320\260\320\263\321\200\320\260\320\264\320\260 - \321\200\320\265\320\277\321\203\321\202\320\260\321\206\320\270\321\217:", 0, QApplication::UnicodeUTF8));
        ButtonGoalToMaps->setText(QApplication::translate("quest", "\320\237\320\276\321\201\320\274\320\276\321\202\321\200\320\265\321\202\321\214 \321\206\320\265\320\273\321\214 \320\272\320\262\320\265\321\201\321\202\320\260 \320\275\320\260 \320\272\320\260\321\200\321\202\320\265", 0, QApplication::UnicodeUTF8));
        ButtonClose->setText(QApplication::translate("quest", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class quest: public Ui_quest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUEST_H
