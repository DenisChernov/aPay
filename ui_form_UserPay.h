/********************************************************************************
** Form generated from reading UI file 'form_UserPay.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_USERPAY_H
#define UI_FORM_USERPAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_form_UserPay
{
public:
    QWidget *centralwidget;
    QTabWidget *tabw;
    QWidget *tab_2;
    QLabel *lblOffice_2;
    QLabel *lblGame_2;
    QLineEdit *leOfficeCost_2;
    QLineEdit *leGameCost_2;
    QLabel *lblTotalTime_2;
    QLineEdit *leTotalTime_2;
    QLabel *lblTotalCost_2;
    QLineEdit *leTotalCost_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *form_UserPay)
    {
        if (form_UserPay->objectName().isEmpty())
            form_UserPay->setObjectName(QStringLiteral("form_UserPay"));
        form_UserPay->resize(391, 600);
        centralwidget = new QWidget(form_UserPay);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabw = new QTabWidget(centralwidget);
        tabw->setObjectName(QStringLiteral("tabw"));
        tabw->setGeometry(QRect(10, 10, 371, 541));
        tabw->setTabPosition(QTabWidget::West);
        tabw->setTabShape(QTabWidget::Rounded);
        tabw->setElideMode(Qt::ElideNone);
        tabw->setUsesScrollButtons(true);
        tabw->setDocumentMode(false);
        tabw->setTabsClosable(false);
        tabw->setMovable(true);
        tabw->setTabBarAutoHide(false);
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        lblOffice_2 = new QLabel(tab_2);
        lblOffice_2->setObjectName(QStringLiteral("lblOffice_2"));
        lblOffice_2->setGeometry(QRect(10, 20, 181, 31));
        QFont font;
        font.setPointSize(14);
        lblOffice_2->setFont(font);
        lblGame_2 = new QLabel(tab_2);
        lblGame_2->setObjectName(QStringLiteral("lblGame_2"));
        lblGame_2->setGeometry(QRect(10, 80, 181, 31));
        lblGame_2->setFont(font);
        leOfficeCost_2 = new QLineEdit(tab_2);
        leOfficeCost_2->setObjectName(QStringLiteral("leOfficeCost_2"));
        leOfficeCost_2->setGeometry(QRect(200, 25, 113, 23));
        leGameCost_2 = new QLineEdit(tab_2);
        leGameCost_2->setObjectName(QStringLiteral("leGameCost_2"));
        leGameCost_2->setGeometry(QRect(200, 83, 113, 23));
        lblTotalTime_2 = new QLabel(tab_2);
        lblTotalTime_2->setObjectName(QStringLiteral("lblTotalTime_2"));
        lblTotalTime_2->setGeometry(QRect(10, 140, 181, 31));
        lblTotalTime_2->setFont(font);
        leTotalTime_2 = new QLineEdit(tab_2);
        leTotalTime_2->setObjectName(QStringLiteral("leTotalTime_2"));
        leTotalTime_2->setGeometry(QRect(200, 145, 113, 23));
        lblTotalCost_2 = new QLabel(tab_2);
        lblTotalCost_2->setObjectName(QStringLiteral("lblTotalCost_2"));
        lblTotalCost_2->setGeometry(QRect(110, 360, 181, 31));
        lblTotalCost_2->setFont(font);
        leTotalCost_2 = new QLineEdit(tab_2);
        leTotalCost_2->setObjectName(QStringLiteral("leTotalCost_2"));
        leTotalCost_2->setGeometry(QRect(150, 400, 161, 51));
        tabw->addTab(tab_2, QString());
        form_UserPay->setCentralWidget(centralwidget);
        menubar = new QMenuBar(form_UserPay);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 391, 20));
        form_UserPay->setMenuBar(menubar);
        statusbar = new QStatusBar(form_UserPay);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        form_UserPay->setStatusBar(statusbar);

        retranslateUi(form_UserPay);

        tabw->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(form_UserPay);
    } // setupUi

    void retranslateUi(QMainWindow *form_UserPay)
    {
        form_UserPay->setWindowTitle(QApplication::translate("form_UserPay", "form_UserPay", 0));
        lblOffice_2->setText(QApplication::translate("form_UserPay", "\320\236\321\204\320\270\321\201\320\275\321\213\320\271 \320\277\320\260\320\272\320\265\321\202:", 0));
        lblGame_2->setText(QApplication::translate("form_UserPay", "\320\230\320\263\321\200\321\213:", 0));
        lblTotalTime_2->setText(QApplication::translate("form_UserPay", "\320\236\320\261\321\211\320\265\320\265 \320\262\321\200\320\265\320\274\321\217:", 0));
        lblTotalCost_2->setText(QApplication::translate("form_UserPay", "\320\222\321\201\320\265\320\263\320\276 \320\272 \320\276\320\277\320\273\320\260\321\202\320\265:", 0));
        tabw->setTabText(tabw->indexOf(tab_2), QApplication::translate("form_UserPay", "Tab 1", 0));
    } // retranslateUi

};

namespace Ui {
    class form_UserPay: public Ui_form_UserPay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_USERPAY_H
