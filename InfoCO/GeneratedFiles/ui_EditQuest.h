/********************************************************************************
** Form generated from reading UI file 'EditQuest.ui'
**
** Created: Sat 30. Mar 12:09:37 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITQUEST_H
#define UI_EDITQUEST_H

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
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditDataBase
{
public:
    QGroupBox *groupBoxOptQuest;
    QVBoxLayout *verticalLayout;
    QComboBox *comboBoxMap;
    QLabel *label;
    QComboBox *comboBoxNpc;
    QPushButton *ButtonNPC;
    QLabel *label_2;
    QComboBox *comboBoxQuest;
    QPushButton *ButtonQuest;
    QGroupBox *groupBox;
    QLineEdit *EditNameQuest;
    QLabel *label_3;
    QTextEdit *textEditQuest;
    QLabel *label_4;
    QLabel *label_5;
    QGroupBox *groupBoxGeometr0;
    QComboBox *comboBoxMap0;
    QLineEdit *EditX0;
    QLineEdit *EditY0;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *ButtonGeometr0;
    QGroupBox *groupBoxGeometr1;
    QComboBox *comboBoxMap1;
    QLineEdit *EditX1;
    QLineEdit *EditY1;
    QLabel *label_8;
    QLabel *label_9;
    QPushButton *ButtonGeometr2;
    QGroupBox *groupBoxGeometr2;
    QComboBox *comboBoxMap2;
    QLineEdit *EditX2;
    QLineEdit *EditY2;
    QLabel *label_10;
    QLabel *label_11;
    QPushButton *ButtonGeometr3;
    QGroupBox *groupBoxGeometr3;
    QComboBox *comboBoxMap3;
    QLineEdit *EditX3;
    QLineEdit *EditY3;
    QLabel *label_12;
    QLabel *label_13;
    QPushButton *ButtonGeometr4;
    QComboBox *comboBoxGoalQuest;
    QLabel *label_14;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *ButtonClear;
    QSpacerItem *verticalSpacer;
    QPushButton *ButtonEditQuest;
    QSpacerItem *verticalSpacer_2;
    QPushButton *ButtonAddQuest;
    QSpacerItem *verticalSpacer_3;
    QPushButton *ButtonDeleteQuest;
    QSpacerItem *verticalSpacer_4;
    QPushButton *ButtonClose;
    QComboBox *comboBoxDalyQuest;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_15;
    QTextEdit *textEditExp;
    QLabel *label_16;
    QTextEdit *textEditItem;
    QLabel *label_17;
    QTextEdit *textEditRep;
    QTextEdit *textEditResultSQL;
    QLabel *label_18;
    QLabel *label_19;
    QTableWidget *tableWidget;

    void setupUi(QDialog *EditDataBase)
    {
        if (EditDataBase->objectName().isEmpty())
            EditDataBase->setObjectName(QString::fromUtf8("EditDataBase"));
        EditDataBase->resize(753, 708);
        EditDataBase->setMinimumSize(QSize(753, 708));
        EditDataBase->setMaximumSize(QSize(753, 708));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/sZOInfo.png"), QSize(), QIcon::Normal, QIcon::Off);
        EditDataBase->setWindowIcon(icon);
        groupBoxOptQuest = new QGroupBox(EditDataBase);
        groupBoxOptQuest->setObjectName(QString::fromUtf8("groupBoxOptQuest"));
        groupBoxOptQuest->setGeometry(QRect(10, 10, 213, 241));
        verticalLayout = new QVBoxLayout(groupBoxOptQuest);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        comboBoxMap = new QComboBox(groupBoxOptQuest);
        comboBoxMap->setObjectName(QString::fromUtf8("comboBoxMap"));

        verticalLayout->addWidget(comboBoxMap);

        label = new QLabel(groupBoxOptQuest);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        comboBoxNpc = new QComboBox(groupBoxOptQuest);
        comboBoxNpc->setObjectName(QString::fromUtf8("comboBoxNpc"));

        verticalLayout->addWidget(comboBoxNpc);

        ButtonNPC = new QPushButton(groupBoxOptQuest);
        ButtonNPC->setObjectName(QString::fromUtf8("ButtonNPC"));

        verticalLayout->addWidget(ButtonNPC);

        label_2 = new QLabel(groupBoxOptQuest);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        comboBoxQuest = new QComboBox(groupBoxOptQuest);
        comboBoxQuest->setObjectName(QString::fromUtf8("comboBoxQuest"));

        verticalLayout->addWidget(comboBoxQuest);

        ButtonQuest = new QPushButton(groupBoxOptQuest);
        ButtonQuest->setObjectName(QString::fromUtf8("ButtonQuest"));

        verticalLayout->addWidget(ButtonQuest);

        groupBox = new QGroupBox(EditDataBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(230, 10, 521, 471));
        EditNameQuest = new QLineEdit(groupBox);
        EditNameQuest->setObjectName(QString::fromUtf8("EditNameQuest"));
        EditNameQuest->setGeometry(QRect(110, 20, 401, 20));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 20, 91, 16));
        textEditQuest = new QTextEdit(groupBox);
        textEditQuest->setObjectName(QString::fromUtf8("textEditQuest"));
        textEditQuest->setGeometry(QRect(90, 50, 421, 71));
        textEditQuest->setFrameShadow(QFrame::Plain);
        textEditQuest->setLineWidth(1);
        textEditQuest->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        textEditQuest->setAutoFormatting(QTextEdit::AutoNone);
        textEditQuest->setLineWrapMode(QTextEdit::NoWrap);
        textEditQuest->setReadOnly(false);
        textEditQuest->setAcceptRichText(false);
        textEditQuest->setTextInteractionFlags(Qt::TextEditorInteraction);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 60, 71, 16));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 140, 71, 16));
        groupBoxGeometr0 = new QGroupBox(groupBox);
        groupBoxGeometr0->setObjectName(QString::fromUtf8("groupBoxGeometr0"));
        groupBoxGeometr0->setGeometry(QRect(10, 170, 151, 141));
        comboBoxMap0 = new QComboBox(groupBoxGeometr0);
        comboBoxMap0->setObjectName(QString::fromUtf8("comboBoxMap0"));
        comboBoxMap0->setGeometry(QRect(40, 20, 91, 20));
        EditX0 = new QLineEdit(groupBoxGeometr0);
        EditX0->setObjectName(QString::fromUtf8("EditX0"));
        EditX0->setGeometry(QRect(40, 50, 91, 20));
        EditY0 = new QLineEdit(groupBoxGeometr0);
        EditY0->setObjectName(QString::fromUtf8("EditY0"));
        EditY0->setGeometry(QRect(40, 80, 91, 20));
        label_6 = new QLabel(groupBoxGeometr0);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 50, 16, 16));
        label_7 = new QLabel(groupBoxGeometr0);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 80, 16, 16));
        ButtonGeometr0 = new QPushButton(groupBoxGeometr0);
        ButtonGeometr0->setObjectName(QString::fromUtf8("ButtonGeometr0"));
        ButtonGeometr0->setGeometry(QRect(20, 110, 111, 23));
        groupBoxGeometr1 = new QGroupBox(groupBox);
        groupBoxGeometr1->setObjectName(QString::fromUtf8("groupBoxGeometr1"));
        groupBoxGeometr1->setGeometry(QRect(170, 170, 151, 141));
        comboBoxMap1 = new QComboBox(groupBoxGeometr1);
        comboBoxMap1->setObjectName(QString::fromUtf8("comboBoxMap1"));
        comboBoxMap1->setGeometry(QRect(40, 20, 91, 20));
        EditX1 = new QLineEdit(groupBoxGeometr1);
        EditX1->setObjectName(QString::fromUtf8("EditX1"));
        EditX1->setGeometry(QRect(40, 50, 91, 20));
        EditY1 = new QLineEdit(groupBoxGeometr1);
        EditY1->setObjectName(QString::fromUtf8("EditY1"));
        EditY1->setGeometry(QRect(40, 80, 91, 20));
        label_8 = new QLabel(groupBoxGeometr1);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 50, 16, 16));
        label_9 = new QLabel(groupBoxGeometr1);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 80, 16, 16));
        ButtonGeometr2 = new QPushButton(groupBoxGeometr1);
        ButtonGeometr2->setObjectName(QString::fromUtf8("ButtonGeometr2"));
        ButtonGeometr2->setGeometry(QRect(20, 110, 111, 23));
        groupBoxGeometr2 = new QGroupBox(groupBox);
        groupBoxGeometr2->setObjectName(QString::fromUtf8("groupBoxGeometr2"));
        groupBoxGeometr2->setGeometry(QRect(10, 320, 151, 141));
        comboBoxMap2 = new QComboBox(groupBoxGeometr2);
        comboBoxMap2->setObjectName(QString::fromUtf8("comboBoxMap2"));
        comboBoxMap2->setGeometry(QRect(40, 20, 91, 20));
        EditX2 = new QLineEdit(groupBoxGeometr2);
        EditX2->setObjectName(QString::fromUtf8("EditX2"));
        EditX2->setGeometry(QRect(40, 50, 91, 20));
        EditY2 = new QLineEdit(groupBoxGeometr2);
        EditY2->setObjectName(QString::fromUtf8("EditY2"));
        EditY2->setGeometry(QRect(40, 80, 91, 20));
        label_10 = new QLabel(groupBoxGeometr2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 50, 16, 16));
        label_11 = new QLabel(groupBoxGeometr2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 80, 16, 16));
        ButtonGeometr3 = new QPushButton(groupBoxGeometr2);
        ButtonGeometr3->setObjectName(QString::fromUtf8("ButtonGeometr3"));
        ButtonGeometr3->setGeometry(QRect(30, 110, 111, 23));
        groupBoxGeometr3 = new QGroupBox(groupBox);
        groupBoxGeometr3->setObjectName(QString::fromUtf8("groupBoxGeometr3"));
        groupBoxGeometr3->setGeometry(QRect(170, 320, 151, 141));
        comboBoxMap3 = new QComboBox(groupBoxGeometr3);
        comboBoxMap3->setObjectName(QString::fromUtf8("comboBoxMap3"));
        comboBoxMap3->setGeometry(QRect(40, 20, 91, 20));
        EditX3 = new QLineEdit(groupBoxGeometr3);
        EditX3->setObjectName(QString::fromUtf8("EditX3"));
        EditX3->setGeometry(QRect(40, 50, 91, 20));
        EditY3 = new QLineEdit(groupBoxGeometr3);
        EditY3->setObjectName(QString::fromUtf8("EditY3"));
        EditY3->setGeometry(QRect(40, 80, 91, 20));
        label_12 = new QLabel(groupBoxGeometr3);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(10, 50, 16, 16));
        label_13 = new QLabel(groupBoxGeometr3);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(10, 80, 16, 16));
        ButtonGeometr4 = new QPushButton(groupBoxGeometr3);
        ButtonGeometr4->setObjectName(QString::fromUtf8("ButtonGeometr4"));
        ButtonGeometr4->setGeometry(QRect(30, 110, 111, 23));
        comboBoxGoalQuest = new QComboBox(groupBox);
        comboBoxGoalQuest->setObjectName(QString::fromUtf8("comboBoxGoalQuest"));
        comboBoxGoalQuest->setGeometry(QRect(360, 140, 91, 20));
        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(250, 140, 101, 16));
        verticalLayoutWidget = new QWidget(groupBox);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(340, 180, 160, 201));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        ButtonClear = new QPushButton(verticalLayoutWidget);
        ButtonClear->setObjectName(QString::fromUtf8("ButtonClear"));

        verticalLayout_2->addWidget(ButtonClear);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        ButtonEditQuest = new QPushButton(verticalLayoutWidget);
        ButtonEditQuest->setObjectName(QString::fromUtf8("ButtonEditQuest"));

        verticalLayout_2->addWidget(ButtonEditQuest);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        ButtonAddQuest = new QPushButton(verticalLayoutWidget);
        ButtonAddQuest->setObjectName(QString::fromUtf8("ButtonAddQuest"));

        verticalLayout_2->addWidget(ButtonAddQuest);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        ButtonDeleteQuest = new QPushButton(verticalLayoutWidget);
        ButtonDeleteQuest->setObjectName(QString::fromUtf8("ButtonDeleteQuest"));

        verticalLayout_2->addWidget(ButtonDeleteQuest);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        ButtonClose = new QPushButton(verticalLayoutWidget);
        ButtonClose->setObjectName(QString::fromUtf8("ButtonClose"));

        verticalLayout_2->addWidget(ButtonClose);

        comboBoxDalyQuest = new QComboBox(groupBox);
        comboBoxDalyQuest->setObjectName(QString::fromUtf8("comboBoxDalyQuest"));
        comboBoxDalyQuest->setGeometry(QRect(90, 140, 91, 20));
        verticalLayoutWidget_2 = new QWidget(EditDataBase);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(10, 260, 203, 194));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(verticalLayoutWidget_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        verticalLayout_3->addWidget(label_15);

        textEditExp = new QTextEdit(verticalLayoutWidget_2);
        textEditExp->setObjectName(QString::fromUtf8("textEditExp"));
        textEditExp->setMinimumSize(QSize(201, 41));
        textEditExp->setMaximumSize(QSize(201, 41));

        verticalLayout_3->addWidget(textEditExp);

        label_16 = new QLabel(verticalLayoutWidget_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        verticalLayout_3->addWidget(label_16);

        textEditItem = new QTextEdit(verticalLayoutWidget_2);
        textEditItem->setObjectName(QString::fromUtf8("textEditItem"));
        textEditItem->setMinimumSize(QSize(201, 41));
        textEditItem->setMaximumSize(QSize(201, 41));

        verticalLayout_3->addWidget(textEditItem);

        label_17 = new QLabel(verticalLayoutWidget_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        verticalLayout_3->addWidget(label_17);

        textEditRep = new QTextEdit(verticalLayoutWidget_2);
        textEditRep->setObjectName(QString::fromUtf8("textEditRep"));
        textEditRep->setMinimumSize(QSize(201, 41));
        textEditRep->setMaximumSize(QSize(201, 41));

        verticalLayout_3->addWidget(textEditRep);

        textEditResultSQL = new QTextEdit(EditDataBase);
        textEditResultSQL->setObjectName(QString::fromUtf8("textEditResultSQL"));
        textEditResultSQL->setGeometry(QRect(10, 490, 731, 51));
        textEditResultSQL->setFrameShadow(QFrame::Plain);
        textEditResultSQL->setLineWidth(1);
        textEditResultSQL->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        textEditResultSQL->setAutoFormatting(QTextEdit::AutoNone);
        textEditResultSQL->setLineWrapMode(QTextEdit::NoWrap);
        textEditResultSQL->setReadOnly(false);
        textEditResultSQL->setAcceptRichText(false);
        textEditResultSQL->setTextInteractionFlags(Qt::TextEditorInteraction);
        label_18 = new QLabel(EditDataBase);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(20, 470, 191, 16));
        label_19 = new QLabel(EditDataBase);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(20, 550, 191, 16));
        tableWidget = new QTableWidget(EditDataBase);
        if (tableWidget->columnCount() < 21)
            tableWidget->setColumnCount(21);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(10, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(11, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(12, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(13, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(14, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(15, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(16, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(17, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(18, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(19, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(20, __qtablewidgetitem20);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 570, 731, 131));

        retranslateUi(EditDataBase);

        QMetaObject::connectSlotsByName(EditDataBase);
    } // setupUi

    void retranslateUi(QDialog *EditDataBase)
    {
        EditDataBase->setWindowTitle(QApplication::translate("EditDataBase", "\320\240\320\265\320\264\320\260\320\272\321\202\320\276\321\200 quest'\320\276\320\262", 0, QApplication::UnicodeUTF8));
        groupBoxOptQuest->setTitle(QApplication::translate("EditDataBase", "\320\236\320\277\321\206\320\270\320\270 \320\264\320\273\321\217 quest'a", 0, QApplication::UnicodeUTF8));
        comboBoxMap->clear();
        comboBoxMap->insertItems(0, QStringList()
         << QApplication::translate("EditDataBase", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\273\320\276\320\272\320\260\321\206\320\270\321\216", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditDataBase", "\320\241\321\202\320\260\320\275\321\206\320\270\321\217", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditDataBase", "\320\233\321\216\320\261\320\265\321\207", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditDataBase", "\320\233\321\216\320\261\320\265\321\207 \320\233\320\265\321\201", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditDataBase", "\320\222\320\270\320\267\321\203\320\262\320\270\320\271", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditDataBase", "\320\235\320\276\320\262\320\260\321\217 \320\227\320\265\320\274\320\273\321\217", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditDataBase", "\320\242\321\203\320\275\320\263\321\203\321\201\320\272\320\260", 0, QApplication::UnicodeUTF8)
        );
        label->setText(QApplication::translate("EditDataBase", "\320\222\321\213\320\261\320\270\321\200\320\270\321\202\320\265 NPC", 0, QApplication::UnicodeUTF8));
        ButtonNPC->setText(QApplication::translate("EditDataBase", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 NPC", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("EditDataBase", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 quest \320\264\320\273\321\217 \321\200\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217\n"
"(\320\235\320\265 \320\262\321\213\320\261\320\270\321\200\320\260\320\271\321\202\320\265 \320\265\321\201\320\273\320\270 \321\205\320\276\321\202\320\270\321\202\320\265 \320\264\320\276\320\261\320\260\320\262\320\270\321\202\321\214\n"
" \320\275\320\276\320\262\321\213\320\271 quest)", 0, QApplication::UnicodeUTF8));
        ButtonQuest->setText(QApplication::translate("EditDataBase", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 quest", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("EditDataBase", "\321\200\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265/\320\264\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 quest'a", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("EditDataBase", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 quest'a", 0, QApplication::UnicodeUTF8));
        textEditQuest->setHtml(QApplication::translate("EditDataBase", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("EditDataBase", "\320\241\321\203\321\202\321\214 quest'a", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("EditDataBase", "\320\225\320\266\320\265\320\264\320\275\320\265\320\262\320\275\321\213\320\271?", 0, QApplication::UnicodeUTF8));
        groupBoxGeometr0->setTitle(QApplication::translate("EditDataBase", "\320\232\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\321\213 \321\206\320\265\320\273\320\270 \320\272\320\262 \342\204\2261 ", 0, QApplication::UnicodeUTF8));
        comboBoxMap0->clear();
        comboBoxMap0->insertItems(0, QStringList()
         << QApplication::translate("EditDataBase", "\320\241\321\202\320\260\320\275\321\206\320\270\321\217", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditDataBase", "\320\233\321\216\320\261\320\265\321\207", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditDataBase", "\320\233\321\216\320\261\320\265\321\207 \320\233\320\265\321\201", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditDataBase", "\320\222\320\270\320\267\321\203\320\262\320\270\320\271", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditDataBase", "\320\235\320\276\320\262\320\260\321\217 \320\227\320\265\320\274\320\273\321\217", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditDataBase", "\320\242\321\203\320\275\320\263\321\203\321\201\320\272\320\260", 0, QApplication::UnicodeUTF8)
        );
        EditX0->setText(QApplication::translate("EditDataBase", "0", 0, QApplication::UnicodeUTF8));
        EditY0->setText(QApplication::translate("EditDataBase", "0", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("EditDataBase", "x", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("EditDataBase", "y", 0, QApplication::UnicodeUTF8));
        ButtonGeometr0->setText(QApplication::translate("EditDataBase", "\320\243\320\272\320\260\320\267\320\260\321\202\321\214 \320\277\320\276 \320\272\320\260\321\200\321\202\320\265", 0, QApplication::UnicodeUTF8));
        groupBoxGeometr1->setTitle(QApplication::translate("EditDataBase", "\320\232\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\321\213 \321\206\320\265\320\273\320\270 \320\272\320\262 \342\204\2262 ", 0, QApplication::UnicodeUTF8));
        comboBoxMap1->clear();
        comboBoxMap1->insertItems(0, QStringList()
         << QApplication::translate("EditDataBase", "\320\241\321\202\320\260\320\275\321\206\320\270\321\217", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditDataBase", "\320\233\321\216\320\261\320\265\321\207", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditDataBase", "\320\233\321\216\320\261\320\265\321\207 \320\233\320\265\321\201", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditDataBase", "\320\222\320\270\320\267\321\203\320\262\320\270\320\271", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditDataBase", "\320\235\320\276\320\262\320\260\321\217 \320\227\320\265\320\274\320\273\321\217", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditDataBase", "\320\242\321\203\320\275\320\263\321\203\321\201\320\272\320\260", 0, QApplication::UnicodeUTF8)
        );
        EditX1->setText(QApplication::translate("EditDataBase", "0", 0, QApplication::UnicodeUTF8));
        EditY1->setText(QApplication::translate("EditDataBase", "0", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("EditDataBase", "x", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("EditDataBase", "y", 0, QApplication::UnicodeUTF8));
        ButtonGeometr2->setText(QApplication::translate("EditDataBase", "\320\243\320\272\320\260\320\267\320\260\321\202\321\214 \320\277\320\276 \320\272\320\260\321\200\321\202\320\265", 0, QApplication::UnicodeUTF8));
        groupBoxGeometr2->setTitle(QApplication::translate("EditDataBase", "\320\232\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\321\213 \321\206\320\265\320\273\320\270 \320\272\320\262 \342\204\226 3", 0, QApplication::UnicodeUTF8));
        comboBoxMap2->clear();
        comboBoxMap2->insertItems(0, QStringList()
         << QApplication::translate("EditDataBase", "\320\241\321\202\320\260\320\275\321\206\320\270\321\217", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditDataBase", "\320\233\321\216\320\261\320\265\321\207", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditDataBase", "\320\233\321\216\320\261\320\265\321\207 \320\233\320\265\321\201", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditDataBase", "\320\222\320\270\320\267\321\203\320\262\320\270\320\271", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditDataBase", "\320\235\320\276\320\262\320\260\321\217 \320\227\320\265\320\274\320\273\321\217", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditDataBase", "\320\242\321\203\320\275\320\263\321\203\321\201\320\272\320\260", 0, QApplication::UnicodeUTF8)
        );
        EditX2->setText(QApplication::translate("EditDataBase", "0", 0, QApplication::UnicodeUTF8));
        EditY2->setText(QApplication::translate("EditDataBase", "0", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("EditDataBase", "x", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("EditDataBase", "y", 0, QApplication::UnicodeUTF8));
        ButtonGeometr3->setText(QApplication::translate("EditDataBase", "\320\243\320\272\320\260\320\267\320\260\321\202\321\214 \320\277\320\276 \320\272\320\260\321\200\321\202\320\265", 0, QApplication::UnicodeUTF8));
        groupBoxGeometr3->setTitle(QApplication::translate("EditDataBase", "\320\232\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\321\213 \321\206\320\265\320\273\320\270 \320\272\320\262 \342\204\226 4", 0, QApplication::UnicodeUTF8));
        comboBoxMap3->clear();
        comboBoxMap3->insertItems(0, QStringList()
         << QApplication::translate("EditDataBase", "\320\241\321\202\320\260\320\275\321\206\320\270\321\217", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditDataBase", "\320\233\321\216\320\261\320\265\321\207", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditDataBase", "\320\233\321\216\320\261\320\265\321\207 \320\233\320\265\321\201", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditDataBase", "\320\222\320\270\320\267\321\203\320\262\320\270\320\271", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditDataBase", "\320\235\320\276\320\262\320\260\321\217 \320\227\320\265\320\274\320\273\321\217", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditDataBase", "\320\242\321\203\320\275\320\263\321\203\321\201\320\272\320\260", 0, QApplication::UnicodeUTF8)
        );
        EditX3->setText(QApplication::translate("EditDataBase", "0", 0, QApplication::UnicodeUTF8));
        EditY3->setText(QApplication::translate("EditDataBase", "0", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("EditDataBase", "x", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("EditDataBase", "y", 0, QApplication::UnicodeUTF8));
        ButtonGeometr4->setText(QApplication::translate("EditDataBase", "\320\243\320\272\320\260\320\267\320\260\321\202\321\214 \320\277\320\276 \320\272\320\260\321\200\321\202\320\265", 0, QApplication::UnicodeUTF8));
        comboBoxGoalQuest->clear();
        comboBoxGoalQuest->insertItems(0, QStringList()
         << QApplication::translate("EditDataBase", "\320\275\320\265\321\202", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditDataBase", "\320\264\320\260", 0, QApplication::UnicodeUTF8)
        );
        label_14->setText(QApplication::translate("EditDataBase", "\320\225\321\201\321\202\321\214 \321\206\320\265\320\273\321\214 \321\203 quest'a?", 0, QApplication::UnicodeUTF8));
        ButtonClear->setText(QApplication::translate("EditDataBase", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \320\276\320\272\320\275\320\260", 0, QApplication::UnicodeUTF8));
        ButtonEditQuest->setText(QApplication::translate("EditDataBase", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214 quest", 0, QApplication::UnicodeUTF8));
        ButtonAddQuest->setText(QApplication::translate("EditDataBase", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 quest", 0, QApplication::UnicodeUTF8));
        ButtonDeleteQuest->setText(QApplication::translate("EditDataBase", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 quest", 0, QApplication::UnicodeUTF8));
        ButtonClose->setText(QApplication::translate("EditDataBase", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214 \321\200\320\265\320\264\320\260\320\272\321\202\320\276\321\200", 0, QApplication::UnicodeUTF8));
        comboBoxDalyQuest->clear();
        comboBoxDalyQuest->insertItems(0, QStringList()
         << QApplication::translate("EditDataBase", "\320\275\320\265\321\202", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditDataBase", "\320\264\320\260", 0, QApplication::UnicodeUTF8)
        );
        label_15->setText(QApplication::translate("EditDataBase", "\320\235\320\260\320\263\321\200\320\260\320\264\320\260 - \320\276\320\277\321\213\321\202:", 0, QApplication::UnicodeUTF8));
        textEditExp->setHtml(QApplication::translate("EditDataBase", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("EditDataBase", "\320\235\320\260\320\263\321\200\320\260\320\264\320\260 - \320\277\321\200\320\265\320\264\320\274\320\265\321\202/\320\264\320\265\320\275\321\214\320\263\320\270:", 0, QApplication::UnicodeUTF8));
        textEditItem->setHtml(QApplication::translate("EditDataBase", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("EditDataBase", "\320\235\320\260\320\263\321\200\320\260\320\264\320\260 - \321\200\320\265\320\277\321\203\321\202\320\260\321\206\320\270\321\217:", 0, QApplication::UnicodeUTF8));
        textEditRep->setHtml(QApplication::translate("EditDataBase", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p></body></html>", 0, QApplication::UnicodeUTF8));
        textEditResultSQL->setHtml(QApplication::translate("EditDataBase", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("EditDataBase", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\270\321\200\321\203\321\216\321\211\320\270\320\271 sql \320\267\320\260\320\277\321\200\320\276\321\201 \320\275\320\260 \320\261\320\260\320\267\321\203:", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("EditDataBase", "\320\224\320\260\320\275\320\275\321\213\320\265 \320\262 \321\202\320\265\320\272\321\203\321\211\320\265\320\271 \321\202\320\260\320\261\320\273\320\270\321\206\320\270", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("EditDataBase", "id Quest'a", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("EditDataBase", "idNPC", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("EditDataBase", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 Quest'a", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("EditDataBase", "\320\241\321\203\321\202\321\214 Quest'a", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("EditDataBase", "\320\225\320\266\320\265\320\264\320\275\320\265\320\262\320\275\321\213\320\271?", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("EditDataBase", "\320\235\320\260\320\263\321\200\320\260\320\264\320\260-\320\276\320\277\321\213\321\202", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("EditDataBase", "\320\235\320\260\320\263\321\200\320\260\320\264\320\260-\320\277\321\200\320\265\320\264\320\274\320\265\321\202", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("EditDataBase", "\320\235\320\260\320\263\321\200\320\260\320\264\320\260-\321\200\320\265\320\277\321\203\321\202\320\260\321\206\320\270\321\217", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("EditDataBase", "\321\205\342\204\2261", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("EditDataBase", "\321\203\342\204\2261", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->horizontalHeaderItem(10);
        ___qtablewidgetitem10->setText(QApplication::translate("EditDataBase", "\321\205\342\204\2262", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->horizontalHeaderItem(11);
        ___qtablewidgetitem11->setText(QApplication::translate("EditDataBase", "\321\203\342\204\2262", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->horizontalHeaderItem(12);
        ___qtablewidgetitem12->setText(QApplication::translate("EditDataBase", "\321\205\342\204\2263", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->horizontalHeaderItem(13);
        ___qtablewidgetitem13->setText(QApplication::translate("EditDataBase", "\321\203\342\204\2263", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->horizontalHeaderItem(14);
        ___qtablewidgetitem14->setText(QApplication::translate("EditDataBase", "\321\205\342\204\2264", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->horizontalHeaderItem(15);
        ___qtablewidgetitem15->setText(QApplication::translate("EditDataBase", "\321\203\342\204\2264", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->horizontalHeaderItem(16);
        ___qtablewidgetitem16->setText(QApplication::translate("EditDataBase", "\320\272\320\260\321\200\321\202\320\260\342\204\2261", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->horizontalHeaderItem(17);
        ___qtablewidgetitem17->setText(QApplication::translate("EditDataBase", "\320\272\320\260\321\200\321\202\320\260\342\204\2262", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->horizontalHeaderItem(18);
        ___qtablewidgetitem18->setText(QApplication::translate("EditDataBase", "\320\272\320\260\321\200\321\202\320\260\342\204\2263", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->horizontalHeaderItem(19);
        ___qtablewidgetitem19->setText(QApplication::translate("EditDataBase", "\320\272\320\260\321\200\321\202\320\260\342\204\2264", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget->horizontalHeaderItem(20);
        ___qtablewidgetitem20->setText(QApplication::translate("EditDataBase", "\320\246\320\265\320\273\321\214 Questa'a", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class EditDataBase: public Ui_EditDataBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITQUEST_H
