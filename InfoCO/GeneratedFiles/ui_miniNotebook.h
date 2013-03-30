/********************************************************************************
** Form generated from reading UI file 'miniNotebook.ui'
**
** Created: Tue 26. Mar 18:37:09 2013
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
        verticalLayout = new QVBoxLayout(MiniNotebook);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textEdit = new QTextEdit(MiniNotebook);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout->addWidget(textEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        ButtonSave = new QPushButton(MiniNotebook);
        ButtonSave->setObjectName(QString::fromUtf8("ButtonSave"));

        horizontalLayout->addWidget(ButtonSave);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        ButtonClose = new QPushButton(MiniNotebook);
        ButtonClose->setObjectName(QString::fromUtf8("ButtonClose"));

        horizontalLayout->addWidget(ButtonClose);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(MiniNotebook);

        QMetaObject::connectSlotsByName(MiniNotebook);
    } // setupUi

    void retranslateUi(QDialog *MiniNotebook)
    {
        MiniNotebook->setWindowTitle(QApplication::translate("MiniNotebook", "\320\234\320\270\320\275\320\270 \320\261\320\273\320\276\320\272\320\275\320\276\321\202", 0, QApplication::UnicodeUTF8));
        ButtonSave->setText(QApplication::translate("MiniNotebook", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        ButtonClose->setText(QApplication::translate("MiniNotebook", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MiniNotebook: public Ui_MiniNotebook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MININOTEBOOK_H
