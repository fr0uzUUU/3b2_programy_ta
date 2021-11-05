#ifndef KARTKOWKA_H
#define KARTKOWKA_H


class Trojkat
{
private:
    int a, h;
public:
    void set(int, int);
    float oblicz();
    int GetA();
    int GetH();
};

class Graniastoslup
{
private:
    int hh;
public:
    Graniastoslup(int);
    float obliczObjetosc();
    void wypisz();
};

#endif // KARTKOWKA_H
