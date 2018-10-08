/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTextEdit *price_box;
    QLabel *label;
    QSpinBox *tax_rate;
    QLabel *TaxRate;
    QPushButton *calc_tax_button;
    QTextEdit *result_windows;
    QLabel *label_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        price_box = new QTextEdit(centralWidget);
        price_box->setObjectName(QStringLiteral("price_box"));
        price_box->setGeometry(QRect(50, 69, 81, 41));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 80, 54, 18));
        QFont font;
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label->setFont(font);
        tax_rate = new QSpinBox(centralWidget);
        tax_rate->setObjectName(QStringLiteral("tax_rate"));
        tax_rate->setGeometry(QRect(80, 150, 51, 31));
        tax_rate->setValue(20);
        TaxRate = new QLabel(centralWidget);
        TaxRate->setObjectName(QStringLiteral("TaxRate"));
        TaxRate->setGeometry(QRect(10, 160, 54, 18));
        TaxRate->setFont(font);
        calc_tax_button = new QPushButton(centralWidget);
        calc_tax_button->setObjectName(QStringLiteral("calc_tax_button"));
        calc_tax_button->setGeometry(QRect(169, 100, 121, 26));
        result_windows = new QTextEdit(centralWidget);
        result_windows->setObjectName(QStringLiteral("result_windows"));
        result_windows->setGeometry(QRect(270, 150, 104, 41));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, -10, 351, 51));
        QFont font1;
        font1.setPointSize(19);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", "price", 0));
        TaxRate->setText(QApplication::translate("MainWindow", "Tax Rate", 0));
        calc_tax_button->setText(QApplication::translate("MainWindow", "calc_tax_button", 0));
        label_2->setText(QApplication::translate("MainWindow", "Sales Tax Calculator", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
