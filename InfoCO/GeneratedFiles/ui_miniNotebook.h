/********************************************************************************
** Form generated from reading UI file 'miniNotebook.ui'
**
** Created: Wed 3. Apr 18:46:37 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MININOTEBOOK_H
#define UI_MININOTEBOOK_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MiniNotebook
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *ButtonSave;
    QSpacerItem *horizontalSpacer;
    QPushButton *ButtonClose;

    void setupUi(QDialog *MiniNotebook)
    {
        if (MiniNotebook->objectName().isEmpty())
            MiniNotebook->setObjectName(QString::fromUtf8("MiniNotebook"));
        MiniNotebook->resize(382, 177);
        MiniNotebook->setMinimumSize(QSize(382, 177));
        MiniNotebook->setMaximumSize(QSize(382, 177));
        QIcon icon;
        icon.addFile(QString::fromUtf8("img/sZOInfo.png"), QSize(), QIcon::Normal, QIcon::Off);
        MiniNotebook->setWindowIcon(icon);
        MiniNotebook->setStyleSheet(QString::fromUtf8("background-image: url(:/img/texture/main_bg.png);"));
        verticalLayout = new QVBoxLayout(MiniNotebook);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textEdit = new QTextEdit(MiniNotebook);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        QPalette palette;
        QBrush brush(QColor(214, 183, 67, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::NoBrush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        QBrush brush2(QColor(0, 0, 0, 255));
        brush2.setStyle(Qt::NoBrush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        QBrush brush3(QColor(120, 120, 120, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        QBrush brush4(QColor(0, 0, 0, 255));
        brush4.setStyle(Qt::NoBrush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        textEdit->setPalette(palette);
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe Print"));
        textEdit->setFont(font);
        textEdit->setStyleSheet(QString::fromUtf8("background-image: url(:/img/texture/texture.png);"));

        verticalLayout->addWidget(textEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        ButtonSave = new QPushButton(MiniNotebook);
        ButtonSave->setObjectName(QString::fromUtf8("ButtonSave"));
        ButtonSave->setMinimumSize(QSize(178, 28));
        ButtonSave->setMaximumSize(QSize(178, 28));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        ButtonSave->setPalette(palette1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Segoe Print"));
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(75);
        ButtonSave->setFont(font1);
        ButtonSave->setStyleSheet(QString::fromUtf8("background-image: url(:/img/texture/defaultBtnLarge.tga);\n"
"border-image: url(:/img/texture/texture.png);"));

        horizontalLayout->addWidget(ButtonSave);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        ButtonClose = new QPushButton(MiniNotebook);
        ButtonClose->setObjectName(QString::fromUtf8("ButtonClose"));
        ButtonClose->setMinimumSize(QSize(178, 28));
        ButtonClose->setMaximumSize(QSize(178, 16777215));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        ButtonClose->setPalette(palette2);
        ButtonClose->setFont(font1);
        ButtonClose->setStyleSheet(QString::fromUtf8("background-image: url(:/img/texture/defaultBtnLarge.tga);\n"
"border-image: url(:/img/texture/texture.png);"));

        horizontalLayout->addWidget(ButtonClose);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(MiniNotebook);

        QMetaObject::connectSlotsByName(MiniNotebook);
    } // setupUi

    void retranslateUi(QDialog *MiniNotebook)
    {
        MiniNotebook->setWindowTitle(QApplication::translate("MiniNotebook", "\320\234\320\270\320\275\320\270 \320\261\320\273\320\276\320\272\320\275\320\276\321\202", 0, QApplication::UnicodeUTF8));
        textEdit->setHtml(QApplication::translate("MiniNotebook", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe Print'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p></body></html>", 0, QApplication::UnicodeUTF8));
        ButtonSave->setText(QApplication::translate("MiniNotebook", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        ButtonClose->setText(QApplication::translate("MiniNotebook", "\320\235\320\260\320\267\320\260\320\264", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MiniNotebook: public Ui_MiniNotebook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MININOTEBOOK_H
