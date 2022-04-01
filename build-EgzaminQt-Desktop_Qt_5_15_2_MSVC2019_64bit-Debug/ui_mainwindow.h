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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *email;
    QLabel *label_3;
    QLineEdit *haslo;
    QLabel *label_4;
    QLineEdit *haslo2;
    QPushButton *pushButton;
    QLabel *witaj;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(346, 690);
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(16);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 351, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(22);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 128, 128);\n"
"color: white;"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 50, 351, 351));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("color: grey;"));

        verticalLayout_2->addWidget(label_2);

        email = new QLineEdit(verticalLayoutWidget);
        email->setObjectName(QString::fromUtf8("email"));

        verticalLayout_2->addWidget(email);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("color: grey;"));

        verticalLayout_2->addWidget(label_3);

        haslo = new QLineEdit(verticalLayoutWidget);
        haslo->setObjectName(QString::fromUtf8("haslo"));
        haslo->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(haslo);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("color: grey;"));

        verticalLayout_2->addWidget(label_4);

        haslo2 = new QLineEdit(verticalLayoutWidget);
        haslo2->setObjectName(QString::fromUtf8("haslo2"));
        haslo2->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(haslo2);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(100, 460, 131, 61));
        pushButton->setStyleSheet(QString::fromUtf8("text-aliqn: center;"));
        witaj = new QLabel(centralwidget);
        witaj->setObjectName(QString::fromUtf8("witaj"));
        witaj->setGeometry(QRect(40, 550, 261, 41));
        witaj->setStyleSheet(QString::fromUtf8("color: grey;\n"
""));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 346, 30));
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
        label->setText(QCoreApplication::translate("MainWindow", "Rejestruj konto", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Podaj e-mail:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Podaj has\305\202o:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Powt\303\263rz has\305\202o:", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Zatwierd\305\272", nullptr));
        witaj->setText(QCoreApplication::translate("MainWindow", "Autor: Micha\305\202 Og\303\263rek", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
