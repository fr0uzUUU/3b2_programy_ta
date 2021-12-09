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
    float dzielenie, liczba1, liczba2;
    liczba1 = ui->lineEdit->text().toFloat();
    liczba2 = ui->lineEdit_2->text().toFloat();
    dzielenie = liczba1 / liczba2;
    ui->label_2->setText(QString::number(dzielenie, 'f', ui->horizontalSlider->value()));
}
