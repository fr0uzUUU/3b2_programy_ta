#ifndef HEADER_H
#define HEADER_H

#include <QString>

using namespace std;

class Pokoj
{
private:
    int a, b, pole;
    string kolor;
public:
    Pokoj();
    Pokoj(int, int);
    Pokoj(const Pokoj&);
    void oblicz();
    void pobierz(int&, int&, int&, QString&);
    QString toString();
    void sortowanie(Pokoj tab[], int);

};

#endif
