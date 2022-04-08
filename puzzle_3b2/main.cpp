#include "widget.h"
#include <QApplication>
#include <QGridLayout>
#include <QPushButton>
#include <ctime>
#include <QString>
#include <QMessageBox>

using namespace std;

QPushButton *button[3][3];
int gI = 2, gJ = 2;

void change(int i, int j){
    QString temp;
    bool ok = false;
    for(int h=-1;h<=1;h+=2){
        if((i + h == gI) && (j == gJ)) ok = true;
        if((i == gI) && (j + h == gJ)) ok = true;
        if(ok){
            temp = button[i][j]->text();
            button[gI][gJ]->setText(temp);
            button[i][j]->setText(" ");
            gI = i;
            gJ = j;
        }
    }
}

bool winner(){
    int licznik = 1;
    bool ok = true;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(licznik != 9){
                if(button[i][j]->text().toInt() != licznik) ok = false;
            }
            licznik++;
        }
    }
    return ok;
}

int main(int argc, char *argv[])
{
    srand(time(NULL));
    QApplication a(argc, argv);

    QGridLayout *gridLayout = new QGridLayout;

    QString liczby[9] = {"1", "2", "3", "4", "5", "6", "7", "8", " "};
    for(int i = 0; i < 20; i++)
        swap(liczby[rand()%8], liczby[rand()%8]);

    int licznik = 0;
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++){
            button[i][j] = new QPushButton;
            button[i][j]->setText(liczby[licznik++]);
            button[i][j]->setStyleSheet("background-color: #AEF6C7; color: black; font-family: 14px, Arial;");
            button[i][j]->setFixedSize(100,100);
            gridLayout->addWidget(button[i][j], i, j, 1, 1);
            QObject::connect(button[i][j],&QPushButton::clicked,[=](){
                change(i, j);
                if(winner()){
                    QMessageBox wynik;
                    wynik.setText("Wygrales");
                    wynik.exec();
                }
            });
        }

    Widget w;
    w.setFixedSize(350, 350);
    w.setLayout(gridLayout);

    w.show();
    return a.exec();
}
