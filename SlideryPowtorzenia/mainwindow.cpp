#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <ctime>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    srand(time(NULL));
    s1 = 1;
    s2 = 2;
    generuj(tab1, s1);
    generuj(tab2, s2);
    ui->label->setNum(porownaj(tab1, s1, tab2, s2));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::generuj(int tab[50], int ile){
    for(int i=0;i<ile;i++) tab[i] = rand()%50+1;
}

int MainWindow::porownaj(int t1[50], int ileS1, int t2[50], int ileS2){
    int powtorzenia = 0;
    for(int i=0;i<ileS1;i++)
        for(int j=0;j<ileS2;j++)
            if(t1[i]==t2[j]) powtorzenia++;
    return powtorzenia;
}

void MainWindow::on_verticalSlider_valueChanged(int value)
{
    s1 = value;
    generuj(tab1, s1);
    ui->label->setNum(porownaj(tab1, s1, tab2, s2));

}


void MainWindow::on_verticalSlider_2_valueChanged(int value)
{
    s2 = value;
    generuj(tab2, s2);
    ui->label->setNum(porownaj(tab1, s1, tab2, s2));
}

