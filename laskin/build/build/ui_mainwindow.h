/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *num1;
    QLineEdit *num2;
    QLineEdit *result;
    QPushButton *nappi1;
    QPushButton *nappi2;
    QPushButton *nappi3;
    QPushButton *nappiAdd;
    QPushButton *nappi4;
    QPushButton *nappi5;
    QPushButton *nappiSub;
    QPushButton *nappi6;
    QPushButton *nappi7;
    QPushButton *nappi8;
    QPushButton *nappiMul;
    QPushButton *nappi9;
    QPushButton *nappi0;
    QPushButton *nappiClear;
    QPushButton *nappiDiv;
    QPushButton *nappiEnter;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(721, 380);
        MainWindow->setAnimated(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        num1 = new QLineEdit(centralwidget);
        num1->setObjectName(QString::fromUtf8("num1"));
        num1->setGeometry(QRect(50, 60, 201, 41));
        num1->setMouseTracking(false);
        num1->setReadOnly(true);
        num2 = new QLineEdit(centralwidget);
        num2->setObjectName(QString::fromUtf8("num2"));
        num2->setGeometry(QRect(260, 60, 211, 41));
        num2->setReadOnly(true);
        result = new QLineEdit(centralwidget);
        result->setObjectName(QString::fromUtf8("result"));
        result->setGeometry(QRect(480, 60, 201, 41));
        result->setReadOnly(true);
        nappi1 = new QPushButton(centralwidget);
        nappi1->setObjectName(QString::fromUtf8("nappi1"));
        nappi1->setGeometry(QRect(50, 120, 151, 41));
        nappi2 = new QPushButton(centralwidget);
        nappi2->setObjectName(QString::fromUtf8("nappi2"));
        nappi2->setGeometry(QRect(210, 120, 151, 41));
        nappi3 = new QPushButton(centralwidget);
        nappi3->setObjectName(QString::fromUtf8("nappi3"));
        nappi3->setGeometry(QRect(370, 120, 151, 41));
        nappiAdd = new QPushButton(centralwidget);
        nappiAdd->setObjectName(QString::fromUtf8("nappiAdd"));
        nappiAdd->setGeometry(QRect(530, 120, 151, 41));
        nappi4 = new QPushButton(centralwidget);
        nappi4->setObjectName(QString::fromUtf8("nappi4"));
        nappi4->setGeometry(QRect(50, 160, 151, 41));
        nappi5 = new QPushButton(centralwidget);
        nappi5->setObjectName(QString::fromUtf8("nappi5"));
        nappi5->setGeometry(QRect(210, 160, 151, 41));
        nappiSub = new QPushButton(centralwidget);
        nappiSub->setObjectName(QString::fromUtf8("nappiSub"));
        nappiSub->setGeometry(QRect(530, 160, 151, 41));
        nappi6 = new QPushButton(centralwidget);
        nappi6->setObjectName(QString::fromUtf8("nappi6"));
        nappi6->setGeometry(QRect(370, 160, 151, 41));
        nappi7 = new QPushButton(centralwidget);
        nappi7->setObjectName(QString::fromUtf8("nappi7"));
        nappi7->setGeometry(QRect(50, 200, 151, 41));
        nappi8 = new QPushButton(centralwidget);
        nappi8->setObjectName(QString::fromUtf8("nappi8"));
        nappi8->setGeometry(QRect(210, 200, 151, 41));
        nappiMul = new QPushButton(centralwidget);
        nappiMul->setObjectName(QString::fromUtf8("nappiMul"));
        nappiMul->setGeometry(QRect(530, 200, 151, 41));
        nappi9 = new QPushButton(centralwidget);
        nappi9->setObjectName(QString::fromUtf8("nappi9"));
        nappi9->setGeometry(QRect(370, 200, 151, 41));
        nappi0 = new QPushButton(centralwidget);
        nappi0->setObjectName(QString::fromUtf8("nappi0"));
        nappi0->setGeometry(QRect(50, 240, 151, 41));
        nappiClear = new QPushButton(centralwidget);
        nappiClear->setObjectName(QString::fromUtf8("nappiClear"));
        nappiClear->setGeometry(QRect(210, 240, 151, 41));
        nappiDiv = new QPushButton(centralwidget);
        nappiDiv->setObjectName(QString::fromUtf8("nappiDiv"));
        nappiDiv->setGeometry(QRect(530, 240, 151, 41));
        nappiEnter = new QPushButton(centralwidget);
        nappiEnter->setObjectName(QString::fromUtf8("nappiEnter"));
        nappiEnter->setGeometry(QRect(370, 240, 151, 41));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 40, 58, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(270, 40, 58, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(490, 40, 58, 16));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 721, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        nappi1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        nappi2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        nappi3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        nappiAdd->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        nappi4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        nappi5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        nappiSub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        nappi6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        nappi7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        nappi8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        nappiMul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        nappi9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        nappi0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        nappiClear->setText(QCoreApplication::translate("MainWindow", "clear", nullptr));
        nappiDiv->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        nappiEnter->setText(QCoreApplication::translate("MainWindow", "enter", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Number 1", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Number 2", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Result", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
