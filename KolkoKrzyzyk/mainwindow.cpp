#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ox = true;
    blokuj();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::kliknij(QPointer<QPushButton> p, int t[3][3], int x, int y){
    if(ox){
        p->setText("O");
        ox = false;
        t[x][y] = 2;
    }else{
        p->setText("X");
        ox = true;
        t[x][y] = 5;
    }
    p->setDisabled(1);
    zwyciezca(sprawdz(tab));
}
int MainWindow::sprawdz(int t[3][3]){
    int suma;
    for(int x=0; x<3; x++){
        suma = 0;
        for(int y=0; y<3; y++) suma += t[x][y];
        if(suma == 6) return 1;
        if(suma == 15) return 2;
    }
    for(int x=0; x<3; x++){
        suma = 0;
        for(int y=0; y<3; y++) suma += t[y][x];
        if(suma == 6) return 1;
        if(suma == 15) return 2;
    }
    suma = t[0][0] + t[1][1] + t[2][2];
    if(suma == 6) return 1;
    if(suma == 15) return 2;

    suma = t[0][2] + t[1][1] + t[2][0];
    if(suma == 6) return 1;
    if(suma == 15) return 2;

    return 0;
}
void MainWindow::zwyciezca(int z){
    if(z == 1) QMessageBox::information(this, "WYGRANA", "Wygral O", QMessageBox::Ok);
    if(z == 2) QMessageBox::information(this, "WYGRANA", "Wygral X", QMessageBox::Ok);
    if(z > 0) blokuj();
}
void MainWindow::blokuj(){
    ui->p_1->setDisabled(1);
    ui->p_2->setDisabled(1);
    ui->p_3->setDisabled(1);
    ui->p_4->setDisabled(1);
    ui->p_5->setDisabled(1);
    ui->p_6->setDisabled(1);
    ui->p_7->setDisabled(1);
    ui->p_8->setDisabled(1);
    ui->p_9->setDisabled(1);
}
void MainWindow::reset(){
    ui->p_1->setEnabled(1);
    ui->p_2->setEnabled(1);
    ui->p_3->setEnabled(1);
    ui->p_4->setEnabled(1);
    ui->p_5->setEnabled(1);
    ui->p_6->setEnabled(1);
    ui->p_7->setEnabled(1);
    ui->p_8->setEnabled(1);
    ui->p_9->setEnabled(1);
    ui->p_1->setText("");
    ui->p_2->setText("");
    ui->p_3->setText("");
    ui->p_4->setText("");
    ui->p_5->setText("");
    ui->p_6->setText("");
    ui->p_7->setText("");
    ui->p_8->setText("");
    ui->p_9->setText("");
    ox = true;
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            tab[i][j] = 0;
}
void MainWindow::on_p_1_clicked()
{
    kliknij(ui->p_1, tab, 0, 0);
}
void MainWindow::on_p_2_clicked()
{
    kliknij(ui->p_2, tab, 1, 0);
}
void MainWindow::on_p_3_clicked()
{
    kliknij(ui->p_3, tab, 2, 0);
}
void MainWindow::on_p_4_clicked()
{
    kliknij(ui->p_4, tab, 0, 1);
}
void MainWindow::on_p_5_clicked()
{
    kliknij(ui->p_5, tab, 1, 1);
}
void MainWindow::on_p_6_clicked()
{
    kliknij(ui->p_6, tab, 2, 1);
}
void MainWindow::on_p_7_clicked()
{
    kliknij(ui->p_7, tab, 0, 2);
}
void MainWindow::on_p_8_clicked()
{
    kliknij(ui->p_8, tab, 1, 2);
}
void MainWindow::on_p_9_clicked()
{
    kliknij(ui->p_9, tab, 2, 2);
}

void MainWindow::on_pushButton_clicked()
{
    reset();
}

