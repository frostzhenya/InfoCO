/********************************************************************************
** Form generated from reading UI file 'GoalMaps.ui'
**
** Created: Tue 26. Mar 18:37:08 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOALMAPS_H
#define UI_GOALMAPS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGraphicsView>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GoalMaps
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *ResultX;
    QLabel *ResultY;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QPushButton *ButtomZoomIn;
    QPushButton *ButtomZoomOut;
    QLabel *TxtlabelQuest;
    QComboBox *BoxConutGoal;
    QGraphicsView *graphicsView;

    void setupUi(QDialog *GoalMaps)
    {
        if (GoalMaps->objectName().isEmpty())
            GoalMaps->setObjectName(QString::fromUtf8("GoalMaps"));
        GoalMaps->resize(574, 436);
        GoalMaps->setMinimumSize(QSize(574, 436));
        GoalMaps->setMaximumSize(QSize(574, 436));
        QIcon icon;
        icon.addFile(QString::fromUtf8("img/sZOInfo.png"), QSize(), QIcon::Normal, QIcon::Off);
        GoalMaps->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(GoalMaps);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(GoalMaps);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(0, 50));
        verticalLayoutWidget = new QWidget(groupBox);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(490, 10, 61, 34));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        ResultX = new QLabel(verticalLayoutWidget);
        ResultX->setObjectName(QString::fromUtf8("ResultX"));

        verticalLayout_2->addWidget(ResultX);

        ResultY = new QLabel(verticalLayoutWidget);
        ResultY->setObjectName(QString::fromUtf8("ResultY"));

        verticalLayout_2->addWidget(ResultY);

        horizontalLayoutWidget = new QWidget(groupBox);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 20, 277, 25));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(55, 16777215));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);

        horizontalLayout_2->addWidget(label);

        ButtomZoomIn = new QPushButton(horizontalLayoutWidget);
        ButtomZoomIn->setObjectName(QString::fromUtf8("ButtomZoomIn"));
        ButtomZoomIn->setMinimumSize(QSize(0, 0));
        ButtomZoomIn->setMaximumSize(QSize(20, 20));

        horizontalLayout_2->addWidget(ButtomZoomIn);

        ButtomZoomOut = new QPushButton(horizontalLayoutWidget);
        ButtomZoomOut->setObjectName(QString::fromUtf8("ButtomZoomOut"));
        ButtomZoomOut->setMaximumSize(QSize(20, 20));

        horizontalLayout_2->addWidget(ButtomZoomOut);

        TxtlabelQuest = new QLabel(horizontalLayoutWidget);
        TxtlabelQuest->setObjectName(QString::fromUtf8("TxtlabelQuest"));
        TxtlabelQuest->setMaximumSize(QSize(95, 16777215));

        horizontalLayout_2->addWidget(TxtlabelQuest);

        BoxConutGoal = new QComboBox(horizontalLayoutWidget);
        BoxConutGoal->setObjectName(QString::fromUtf8("BoxConutGoal"));

        horizontalLayout_2->addWidget(BoxConutGoal);


        verticalLayout->addWidget(groupBox);

        graphicsView = new QGraphicsView(GoalMaps);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));

        verticalLayout->addWidget(graphicsView);


        retranslateUi(GoalMaps);

        QMetaObject::connectSlotsByName(GoalMaps);
    } // setupUi

    void retranslateUi(QDialog *GoalMaps)
    {
        GoalMaps->setWindowTitle(QApplication::translate("GoalMaps", "\320\246\320\265\320\273\320\270 \320\227\320\260\320\264\320\260\320\275\320\270\321\217", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("GoalMaps", "\320\237\320\276\320\267\320\270\321\206\320\270\320\270 \320\276\321\201\321\202\320\260\320\273\321\214\320\275\321\213\321\205 \321\202\320\276\321\207\320\265\320\272 \320\277\320\276 \320\267\320\260\320\264\320\260\320\275\320\270\321\216, \320\265\321\201\320\273\320\270 \321\202\320\260\320\272\320\276\320\262\321\213 \320\270\320\274\320\265\321\216\321\202\321\201\321\217", 0, QApplication::UnicodeUTF8));
        ResultX->setText(QString());
        ResultY->setText(QString());
        label->setText(QApplication::translate("GoalMaps", "zoom:", 0, QApplication::UnicodeUTF8));
        ButtomZoomIn->setText(QApplication::translate("GoalMaps", "+", 0, QApplication::UnicodeUTF8));
        ButtomZoomOut->setText(QApplication::translate("GoalMaps", "-", 0, QApplication::UnicodeUTF8));
        TxtlabelQuest->setText(QApplication::translate("GoalMaps", "\342\204\226 \320\246\320\265\320\273\320\270 \321\203 Quset'a", 0, QApplication::UnicodeUTF8));
        BoxConutGoal->clear();
        BoxConutGoal->insertItems(0, QStringList()
         << QApplication::translate("GoalMaps", "0", 0, QApplication::UnicodeUTF8)
        );
    } // retranslateUi

};

namespace Ui {
    class GoalMaps: public Ui_GoalMaps {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOALMAPS_H
