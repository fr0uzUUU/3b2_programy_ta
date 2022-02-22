#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

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
    QString imie = ui->imie->text();
    QString nazwisko = ui->nazwisko->text();
    QString miasto = ui->miasto->text();

    QString c1 = imie + " " + nazwisko + " " + miasto;
    QString c2 = ui->area->text();



    if(imie != "" && nazwisko != "" && miasto != ""){
        ui->area->setText(c2 + c1 + "\n");
    }
    else{
        QMessageBox::information(this,"Error", "Pola muszą być zapełnione\n");
    }

    if (c2.length() > 25){
        ui->area->setText(c2 + c1 + "\n");
    }
}



