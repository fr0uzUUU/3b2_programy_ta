#include "kartkowka.h"
#include <QTextStream>
#include <ctime>

void Trojkat::set(int pA, int pH)
{
    a = pA;
    h = pH;
}

float Trojkat::oblicz(){
    return 0.5 * a * h;
}

int Trojkat::GetA(){
    return a;
}

int Trojkat::GetH(){
    return h;
}

Graniastoslup::Graniastoslup(int pHH){
    hh = pHH;
}

float Graniastoslup::obliczObjetosc(){
    return 0.5 * a * h * hh;
}
