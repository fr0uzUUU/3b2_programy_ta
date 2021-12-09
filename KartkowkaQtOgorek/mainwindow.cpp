#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    blokuj();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::blokuj(){
    ui->p1->setEnabled(0);
    ui->p2->setEnabled(0);
    ui->p3->setEnabled(0);
    ui->p4->setEnabled(0);
}

void MainWindow::on_p_start_clicked()
{
    ui->p1->setEnabled(1);
    ui->p2->setEnabled(1);
    ui->p3->setEnabled(1);
    ui->p4->setEnabled(1);

}


void MainWindow::on_p1_clicked()
{
    int dodawanie;
    int liczba1, liczba2;
    liczba1 = ui->spinBox->text().toInt();
    liczba2 = ui->spinBox_2->text().toInt();
    dodawanie = liczba1 + liczba2;
    ui->label->setNum(dodawanie);
}

void MainWindow::on_p2_clicked()
{
    int odejmowanie;

}


void MainWindow::on_p3_clicked()
{
    int mnozenie;
}


void MainWindow::on_p4_clicked()
{
    int dzielenie;
}

