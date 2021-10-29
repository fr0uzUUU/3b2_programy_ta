#include "header.h"
#include <QTextStream>


Pokoj::Pokoj()
{
    kolor = "bialy";
}

Pokoj::Pokoj(int pA, int pB) : Pokoj(){
    a = pA;
    b = pB;
}

Pokoj::Pokoj(const Pokoj& p){
    a = p.a;
    b = p.b;
    pole = p.pole;
    kolor = p.kolor;
}

void Pokoj::oblicz(){
    pole = a * b;
}

void Pokoj::pobierz(int &pA, int &pB, int &pPole, QString &pKolor){
    pA = a;
    pB = b;
    pPole = pole;
    pKolor = kolor;
}
QString Pokoj::toString(){
    return QString();
}
void Pokoj::sortowanie(Pokoj tab[], int n){
     int j = 1, k;
     while (j <= n ) {
         for (k = j; k > 0; k--)
             if (tab[k].pole > tab[k-1].pole) swap(tab[k], tab[k-1]);
             else break;
            j++;
    }
}
