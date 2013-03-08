/********************************************************************************
** Form generated from reading UI file 'quest.ui'
**
** Created: Wed 6. Mar 20:55:11 2013
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
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
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
    QGroupBox *MainBox;
    QTextEdit *textEdit;

    void setupUi(QDialog *quest)
    {
        if (quest->objectName().isEmpty())
            quest->setObjectName(QString::fromUtf8("quest"));
        quest->resize(642, 547);
        quest->setMinimumSize(QSize(0, 0));
        quest->setMaximumSize(QSize(642, 547));
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

        MainBox = new QGroupBox(quest);
        MainBox->setObjectName(QString::fromUtf8("MainBox"));
        MainBox->setMinimumSize(QSize(624, 367));
        MainBox->setMaximumSize(QSize(624, 3670));
        textEdit = new QTextEdit(MainBox);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 20, 601, 381));
        textEdit->setMaximumSize(QSize(601, 381));
        OptBox->raise();
        OptDopBox->raise();
        OptDopBox->raise();
        OptDopBox->raise();
        textEdit->raise();

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
        MainBox->setTitle(QApplication::translate("quest", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217 \320\277\320\276 \320\272\320\262\320\265\321\201\321\202\320\260\320\274", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class quest: public Ui_quest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUEST_H
