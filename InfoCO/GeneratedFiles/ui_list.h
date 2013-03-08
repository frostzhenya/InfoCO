/********************************************************************************
** Form generated from reading UI file 'list.ui'
**
** Created: Thu 7. Mar 16:26:29 2013
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
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_List
{
public:
    QGroupBox *groupBox;
    QComboBox *OptList;
    QLineEdit *LaineNameSeach;
    QLabel *TxtNumeSeach;
    QPushButton *ButtomAcceptList;
    QTextEdit *EditDebug;
    QListWidget *ListView;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *ButtomEditList;
    QSpacerItem *horizontalSpacer;
    QPushButton *ButtomClose;
    QGroupBox *groupBoxEdit;
    QPushButton *ButtomEditListClose;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *ButtomAddName;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *EditName;
    QLabel *TxtEditList;
    QGroupBox *groupBoxTypeClan;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioBAPK;
    QRadioButton *radioBPK;
    QRadioButton *radioBM;
    QRadioButton *radioBRP;
    QRadioButton *radioBN;
    QGroupBox *groupBoxTypeStalkers;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioBpk;
    QRadioButton *radioBkd;

    void setupUi(QDialog *List)
    {
        if (List->objectName().isEmpty())
            List->setObjectName(QString::fromUtf8("List"));
        List->setEnabled(true);
        List->resize(440, 615);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(List->sizePolicy().hasHeightForWidth());
        List->setSizePolicy(sizePolicy);
        List->setMinimumSize(QSize(440, 615));
        List->setMaximumSize(QSize(440, 615));
        QIcon icon;
        icon.addFile(QString::fromUtf8("img/InfoCO.png"), QSize(), QIcon::Normal, QIcon::Off);
        List->setWindowIcon(icon);
        groupBox = new QGroupBox(List);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setEnabled(true);
        groupBox->setGeometry(QRect(10, 10, 421, 599));
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMinimumSize(QSize(421, 599));
        groupBox->setMaximumSize(QSize(421, 599));
        groupBox->setContextMenuPolicy(Qt::DefaultContextMenu);
        groupBox->setCheckable(false);
        OptList = new QComboBox(groupBox);
        OptList->setObjectName(QString::fromUtf8("OptList"));
        OptList->setGeometry(QRect(10, 20, 181, 22));
        LaineNameSeach = new QLineEdit(groupBox);
        LaineNameSeach->setObjectName(QString::fromUtf8("LaineNameSeach"));
        LaineNameSeach->setEnabled(true);
        LaineNameSeach->setGeometry(QRect(10, 300, 181, 20));
        TxtNumeSeach = new QLabel(groupBox);
        TxtNumeSeach->setObjectName(QString::fromUtf8("TxtNumeSeach"));
        TxtNumeSeach->setGeometry(QRect(10, 280, 171, 16));
        ButtomAcceptList = new QPushButton(groupBox);
        ButtomAcceptList->setObjectName(QString::fromUtf8("ButtomAcceptList"));
        ButtomAcceptList->setGeometry(QRect(10, 330, 181, 23));
        EditDebug = new QTextEdit(groupBox);
        EditDebug->setObjectName(QString::fromUtf8("EditDebug"));
        EditDebug->setEnabled(false);
        EditDebug->setGeometry(QRect(10, 370, 181, 61));
        EditDebug->setMinimumSize(QSize(181, 61));
        EditDebug->setMaximumSize(QSize(181, 171));
        ListView = new QListWidget(groupBox);
        ListView->setObjectName(QString::fromUtf8("ListView"));
        ListView->setGeometry(QRect(220, 20, 191, 411));
        ListView->setMinimumSize(QSize(191, 411));
        ListView->setMaximumSize(QSize(191, 521));
        ListView->setSortingEnabled(false);
        horizontalLayoutWidget = new QWidget(groupBox);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 560, 401, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        ButtomEditList = new QPushButton(horizontalLayoutWidget);
        ButtomEditList->setObjectName(QString::fromUtf8("ButtomEditList"));

        horizontalLayout->addWidget(ButtomEditList);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        ButtomClose = new QPushButton(horizontalLayoutWidget);
        ButtomClose->setObjectName(QString::fromUtf8("ButtomClose"));

        horizontalLayout->addWidget(ButtomClose);

        groupBoxEdit = new QGroupBox(groupBox);
        groupBoxEdit->setObjectName(QString::fromUtf8("groupBoxEdit"));
        groupBoxEdit->setEnabled(false);
        groupBoxEdit->setGeometry(QRect(0, 450, 421, 101));
        groupBoxEdit->setMinimumSize(QSize(0, 0));
        groupBoxEdit->setMaximumSize(QSize(421, 101));
        ButtomEditListClose = new QPushButton(groupBoxEdit);
        ButtomEditListClose->setObjectName(QString::fromUtf8("ButtomEditListClose"));
        ButtomEditListClose->setGeometry(QRect(140, 70, 111, 23));
        horizontalLayoutWidget_2 = new QWidget(groupBoxEdit);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(40, 40, 311, 25));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        ButtomAddName = new QPushButton(horizontalLayoutWidget_2);
        ButtomAddName->setObjectName(QString::fromUtf8("ButtomAddName"));

        horizontalLayout_2->addWidget(ButtomAddName);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        EditName = new QLineEdit(horizontalLayoutWidget_2);
        EditName->setObjectName(QString::fromUtf8("EditName"));

        horizontalLayout_2->addWidget(EditName);

        TxtEditList = new QLabel(groupBoxEdit);
        TxtEditList->setObjectName(QString::fromUtf8("TxtEditList"));
        TxtEditList->setGeometry(QRect(40, 20, 311, 16));
        groupBoxTypeClan = new QGroupBox(groupBox);
        groupBoxTypeClan->setObjectName(QString::fromUtf8("groupBoxTypeClan"));
        groupBoxTypeClan->setGeometry(QRect(10, 50, 172, 131));
        verticalLayout = new QVBoxLayout(groupBoxTypeClan);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        radioBAPK = new QRadioButton(groupBoxTypeClan);
        radioBAPK->setObjectName(QString::fromUtf8("radioBAPK"));
        radioBAPK->setChecked(true);

        verticalLayout->addWidget(radioBAPK);

        radioBPK = new QRadioButton(groupBoxTypeClan);
        radioBPK->setObjectName(QString::fromUtf8("radioBPK"));

        verticalLayout->addWidget(radioBPK);

        radioBM = new QRadioButton(groupBoxTypeClan);
        radioBM->setObjectName(QString::fromUtf8("radioBM"));

        verticalLayout->addWidget(radioBM);

        radioBRP = new QRadioButton(groupBoxTypeClan);
        radioBRP->setObjectName(QString::fromUtf8("radioBRP"));

        verticalLayout->addWidget(radioBRP);

        radioBN = new QRadioButton(groupBoxTypeClan);
        radioBN->setObjectName(QString::fromUtf8("radioBN"));

        verticalLayout->addWidget(radioBN);

        groupBoxTypeStalkers = new QGroupBox(groupBox);
        groupBoxTypeStalkers->setObjectName(QString::fromUtf8("groupBoxTypeStalkers"));
        groupBoxTypeStalkers->setGeometry(QRect(10, 190, 171, 71));
        verticalLayout_2 = new QVBoxLayout(groupBoxTypeStalkers);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        radioBpk = new QRadioButton(groupBoxTypeStalkers);
        radioBpk->setObjectName(QString::fromUtf8("radioBpk"));
        radioBpk->setChecked(true);

        verticalLayout_2->addWidget(radioBpk);

        radioBkd = new QRadioButton(groupBoxTypeStalkers);
        radioBkd->setObjectName(QString::fromUtf8("radioBkd"));

        verticalLayout_2->addWidget(radioBkd);

        QWidget::setTabOrder(OptList, LaineNameSeach);
        QWidget::setTabOrder(LaineNameSeach, ButtomAcceptList);
        QWidget::setTabOrder(ButtomAcceptList, EditDebug);
        QWidget::setTabOrder(EditDebug, ListView);
        QWidget::setTabOrder(ListView, ButtomClose);

        retranslateUi(List);

        QMetaObject::connectSlotsByName(List);
    } // setupUi

    void retranslateUi(QDialog *List)
    {
        List->setWindowTitle(QApplication::translate("List", "\320\241\320\277\320\270\321\201\320\272\320\270", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("List", "\320\241\320\277\320\270\321\201\320\272\320\270 \320\237\320\232/\320\232\320\270\320\264\320\260\320\273\320\276\320\262/\320\232\320\273\320\260\320\275\320\276\320\262/\320\237\320\232 \320\232\320\273\320\260\320\275\320\276\320\262", 0, QApplication::UnicodeUTF8));
        OptList->clear();
        OptList->insertItems(0, QStringList()
         << QApplication::translate("List", "\320\242\320\270\320\277 \321\201\320\277\320\270\321\201\320\272\320\260", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("List", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\241\321\202\320\260\320\273\320\272\320\265\321\200\320\276\320\262", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("List", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\232\320\273\320\260\320\275\320\276\320\262", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("List", "\320\237\320\276\320\270\321\201\320\272 \320\241\321\202\320\260\320\273\320\272\320\265\321\200\320\260 \320\277\320\276 \320\270\320\274\320\265\320\275\320\270", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("List", "\320\237\320\276\320\270\321\201\320\272 \320\232\320\273\320\260\320\275\320\260 \320\277\320\276 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\321\216", 0, QApplication::UnicodeUTF8)
        );
        LaineNameSeach->setText(QApplication::translate("List", "\320\243\321\207\320\270\321\202\321\213\320\262\320\260\320\271\321\202\320\265 \321\200\320\265\320\263\320\270\321\201\321\202\320\276\321\200 \321\201\320\270\320\274\320\262\320\276\320\273\320\276\320\262", 0, QApplication::UnicodeUTF8));
        TxtNumeSeach->setText(QApplication::translate("List", "\320\230\320\274\321\217 \320\264\320\273\321\217 \320\277\320\276\320\270\321\201\320\272\320\260", 0, QApplication::UnicodeUTF8));
        ButtomAcceptList->setText(QApplication::translate("List", "\320\222\321\213\320\262\320\265\321\201\321\202\320\270 \321\201\320\277\320\270\321\201\320\276\320\272", 0, QApplication::UnicodeUTF8));
        ButtomEditList->setText(QApplication::translate("List", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \321\201\320\277\320\270\321\201\320\276\320\272", 0, QApplication::UnicodeUTF8));
        ButtomClose->setText(QApplication::translate("List", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", 0, QApplication::UnicodeUTF8));
        groupBoxEdit->setTitle(QApplication::translate("List", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265 \321\201\320\277\320\270\321\201\320\272\320\260", 0, QApplication::UnicodeUTF8));
        ButtomEditListClose->setText(QApplication::translate("List", "\320\241\320\272\321\200\321\213\321\202\321\214 \320\277\320\260\320\275\320\265\320\273\321\214", 0, QApplication::UnicodeUTF8));
        ButtomAddName->setText(QApplication::translate("List", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\270\320\274\321\217 \320\262 \321\201\320\277\320\270\321\201\320\276\320\272", 0, QApplication::UnicodeUTF8));
        TxtEditList->setText(QApplication::translate("List", "\320\230\320\274\321\217 \320\261\321\203\320\264\320\265\321\202 \320\264\320\276\320\261\320\260\320\262\320\273\321\217\321\202\321\214\321\201\321\217 \320\262", 0, QApplication::UnicodeUTF8));
        groupBoxTypeClan->setTitle(QApplication::translate("List", "\320\242\320\270\320\277 \320\272\320\273\320\260\320\275\320\260", 0, QApplication::UnicodeUTF8));
        radioBAPK->setText(QApplication::translate("List", "\320\220\320\275\321\202\320\270\320\237\320\272 \320\272\320\273\320\260\320\275\321\213", 0, QApplication::UnicodeUTF8));
        radioBPK->setText(QApplication::translate("List", "\320\237\320\232 \320\272\320\273\320\260\320\275\321\213", 0, QApplication::UnicodeUTF8));
        radioBM->setText(QApplication::translate("List", "\320\222\320\276\320\265\320\275\320\270\320\267\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\265  \320\272\320\273\320\260\320\275\321\213", 0, QApplication::UnicodeUTF8));
        radioBRP->setText(QApplication::translate("List", "\320\240\320\237 \320\272\320\273\320\260\320\275\321\213", 0, QApplication::UnicodeUTF8));
        radioBN->setText(QApplication::translate("List", "\320\235\320\265\320\271\321\202\321\200\320\260\320\273\321\214\320\275\321\213\320\265 \320\272\320\273\320\260\320\275\321\213", 0, QApplication::UnicodeUTF8));
        groupBoxTypeStalkers->setTitle(QApplication::translate("List", "\320\242\320\270\320\277 \320\241\321\202\320\260\320\273\320\272\320\265\321\200\320\276\320\262", 0, QApplication::UnicodeUTF8));
        radioBpk->setText(QApplication::translate("List", "\320\237\320\232 \320\241\321\202\320\260\320\273\320\272\320\265\321\200\321\213", 0, QApplication::UnicodeUTF8));
        radioBkd->setText(QApplication::translate("List", "\320\232\320\270\320\264\320\260\320\273\321\213", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class List: public Ui_List {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIST_H
