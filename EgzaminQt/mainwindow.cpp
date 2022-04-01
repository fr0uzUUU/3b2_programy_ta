#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QString email = ui->email->text();
    QString haslo = ui->haslo->text();
    QString haslo2 = ui->haslo2->text();
    if (email.contains("@")){
        if((haslo==haslo2)){
            ui->witaj->setText("Witaj: " + email);
        }
        else
            ui->witaj->setText("Hasła się różnią");
    }
    else
        ui->witaj->setText("Nieprawidłowy adres e-mail");
}

