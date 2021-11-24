/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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
    QPushButton *p_1;
    QPushButton *p_2;
    QPushButton *p_3;
    QPushButton *p_6;
    QPushButton *p_4;
    QPushButton *p_5;
    QPushButton *p_9;
    QPushButton *p_7;
    QPushButton *p_8;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(600, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        p_1 = new QPushButton(centralwidget);
        p_1->setObjectName(QString::fromUtf8("p_1"));
        p_1->setGeometry(QRect(20, 20, 150, 150));
        QFont font;
        font.setFamily(QString::fromUtf8("Palatino Linotype"));
        font.setPointSize(16);
        p_1->setFont(font);
        p_2 = new QPushButton(centralwidget);
        p_2->setObjectName(QString::fromUtf8("p_2"));
        p_2->setGeometry(QRect(200, 20, 150, 150));
        p_2->setFont(font);
        p_3 = new QPushButton(centralwidget);
        p_3->setObjectName(QString::fromUtf8("p_3"));
        p_3->setGeometry(QRect(380, 20, 150, 150));
        p_3->setFont(font);
        p_6 = new QPushButton(centralwidget);
        p_6->setObjectName(QString::fromUtf8("p_6"));
        p_6->setGeometry(QRect(380, 190, 150, 150));
        p_6->setFont(font);
        p_4 = new QPushButton(centralwidget);
        p_4->setObjectName(QString::fromUtf8("p_4"));
        p_4->setGeometry(QRect(20, 190, 150, 150));
        p_4->setFont(font);
        p_5 = new QPushButton(centralwidget);
        p_5->setObjectName(QString::fromUtf8("p_5"));
        p_5->setGeometry(QRect(200, 190, 150, 150));
        p_5->setFont(font);
        p_9 = new QPushButton(centralwidget);
        p_9->setObjectName(QString::fromUtf8("p_9"));
        p_9->setGeometry(QRect(380, 360, 150, 150));
        p_9->setFont(font);
        p_7 = new QPushButton(centralwidget);
        p_7->setObjectName(QString::fromUtf8("p_7"));
        p_7->setGeometry(QRect(20, 360, 150, 150));
        p_7->setFont(font);
        p_8 = new QPushButton(centralwidget);
        p_8->setObjectName(QString::fromUtf8("p_8"));
        p_8->setGeometry(QRect(200, 360, 150, 150));
        p_8->setFont(font);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 530, 491, 23));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 600, 21));
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
        p_1->setText(QString());
        p_2->setText(QString());
        p_3->setText(QString());
        p_6->setText(QString());
        p_4->setText(QString());
        p_5->setText(QString());
        p_9->setText(QString());
        p_7->setText(QString());
        p_8->setText(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
