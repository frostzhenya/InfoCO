/********************************************************************************
** Form generated from reading UI file 'QuestMap.ui'
**
** Created: Fri 5. Apr 15:51:03 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUESTMAP_H
#define UI_QUESTMAP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QuestMap
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QRadioButton *rBLoc0;
    QRadioButton *rBLoc1;
    QRadioButton *rBLoc2;
    QRadioButton *rBLoc3;
    QRadioButton *rBLoc4;
    QRadioButton *rBLoc5;
    QPushButton *ButtonAccept;
    QPushButton *ButtonBack;

    void setupUi(QDialog *QuestMap)
    {
        if (QuestMap->objectName().isEmpty())
            QuestMap->setObjectName(QString::fromUtf8("QuestMap"));
        QuestMap->resize(202, 272);
        QuestMap->setMinimumSize(QSize(202, 272));
        QuestMap->setMaximumSize(QSize(202, 272));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/sZOInfo.png"), QSize(), QIcon::Normal, QIcon::Off);
        QuestMap->setWindowIcon(icon);
        QuestMap->setStyleSheet(QString::fromUtf8("background-image: url(:/img/texture/main_maps.png);"));
        verticalLayout_2 = new QVBoxLayout(QuestMap);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(QuestMap);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QPalette palette;
        QBrush brush(QColor(214, 183, 67, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        groupBox->setPalette(palette);
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe Print"));
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        groupBox->setFont(font);
        groupBox->setStyleSheet(QString::fromUtf8("background-image: url(:/img/texture/texture.png);\n"
"border-image: url(:/img/texture/texture.png);"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        rBLoc0 = new QRadioButton(groupBox);
        rBLoc0->setObjectName(QString::fromUtf8("rBLoc0"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush);
        QBrush brush2(QColor(0, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        rBLoc0->setPalette(palette1);
        rBLoc0->setFont(font);
        rBLoc0->setStyleSheet(QString::fromUtf8(""));
        rBLoc0->setChecked(true);

        verticalLayout->addWidget(rBLoc0);

        rBLoc1 = new QRadioButton(groupBox);
        rBLoc1->setObjectName(QString::fromUtf8("rBLoc1"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        rBLoc1->setPalette(palette2);
        rBLoc1->setFont(font);
        rBLoc1->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(rBLoc1);

        rBLoc2 = new QRadioButton(groupBox);
        rBLoc2->setObjectName(QString::fromUtf8("rBLoc2"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        rBLoc2->setPalette(palette3);
        rBLoc2->setFont(font);

        verticalLayout->addWidget(rBLoc2);

        rBLoc3 = new QRadioButton(groupBox);
        rBLoc3->setObjectName(QString::fromUtf8("rBLoc3"));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        rBLoc3->setPalette(palette4);
        rBLoc3->setFont(font);

        verticalLayout->addWidget(rBLoc3);

        rBLoc4 = new QRadioButton(groupBox);
        rBLoc4->setObjectName(QString::fromUtf8("rBLoc4"));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        rBLoc4->setPalette(palette5);
        rBLoc4->setFont(font);

        verticalLayout->addWidget(rBLoc4);

        rBLoc5 = new QRadioButton(groupBox);
        rBLoc5->setObjectName(QString::fromUtf8("rBLoc5"));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        rBLoc5->setPalette(palette6);
        rBLoc5->setFont(font);

        verticalLayout->addWidget(rBLoc5);


        verticalLayout_2->addWidget(groupBox);

        ButtonAccept = new QPushButton(QuestMap);
        ButtonAccept->setObjectName(QString::fromUtf8("ButtonAccept"));
        ButtonAccept->setMinimumSize(QSize(178, 28));
        ButtonAccept->setMaximumSize(QSize(178, 28));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        ButtonAccept->setPalette(palette7);
        ButtonAccept->setFont(font);
        ButtonAccept->setCursor(QCursor(Qt::PointingHandCursor));
        ButtonAccept->setStyleSheet(QString::fromUtf8("background-image: url(:/img/texture/defaultBtnLarge.tga);\n"
"border-image: url(:/img/texture/texture.png);"));

        verticalLayout_2->addWidget(ButtonAccept);

        ButtonBack = new QPushButton(QuestMap);
        ButtonBack->setObjectName(QString::fromUtf8("ButtonBack"));
        ButtonBack->setMinimumSize(QSize(178, 28));
        ButtonBack->setMaximumSize(QSize(178, 28));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        ButtonBack->setPalette(palette8);
        ButtonBack->setFont(font);
        ButtonBack->setCursor(QCursor(Qt::PointingHandCursor));
        ButtonBack->setStyleSheet(QString::fromUtf8("background-image: url(:/img/texture/defaultBtnLarge.tga);\n"
"border-image: url(:/img/texture/texture.png);"));

        verticalLayout_2->addWidget(ButtonBack);


        retranslateUi(QuestMap);

        QMetaObject::connectSlotsByName(QuestMap);
    } // setupUi

    void retranslateUi(QDialog *QuestMap)
    {
        QuestMap->setWindowTitle(QApplication::translate("QuestMap", "\320\222\321\213\320\261\320\276\321\200 \320\233\320\276\320\272\320\260\321\206\320\270\320\270", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("QuestMap", "\320\222\321\213\320\261\320\276\321\200 \320\233\320\276\320\272\320\260\321\206\320\270\320\270", 0, QApplication::UnicodeUTF8));
        rBLoc0->setText(QApplication::translate("QuestMap", "\320\241\321\202\320\260\320\275\321\206\320\270\321\217", 0, QApplication::UnicodeUTF8));
        rBLoc1->setText(QApplication::translate("QuestMap", "\320\233\321\216\320\261\320\265\321\207 \320\262\320\276\320\272\320\267\320\260\320\273", 0, QApplication::UnicodeUTF8));
        rBLoc2->setText(QApplication::translate("QuestMap", "\320\233\321\216\320\261\320\265\321\207 \320\233\320\265\321\201", 0, QApplication::UnicodeUTF8));
        rBLoc3->setText(QApplication::translate("QuestMap", "\320\222\320\265\320\267\321\203\320\262\320\270\320\271", 0, QApplication::UnicodeUTF8));
        rBLoc4->setText(QApplication::translate("QuestMap", "\320\235\320\276\320\262\320\260\321\217 \320\227\320\265\320\274\320\273\321\217", 0, QApplication::UnicodeUTF8));
        rBLoc5->setText(QApplication::translate("QuestMap", "\320\242\321\203\320\275\320\263\321\203\321\201\320\272\320\260", 0, QApplication::UnicodeUTF8));
        ButtonAccept->setText(QApplication::translate("QuestMap", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214", 0, QApplication::UnicodeUTF8));
        ButtonBack->setText(QApplication::translate("QuestMap", "\320\235\320\260 \320\263\320\273\320\260\320\262\320\275\321\203\321\216", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QuestMap: public Ui_QuestMap {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUESTMAP_H
