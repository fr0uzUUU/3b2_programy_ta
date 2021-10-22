#include <iostream>
#include <ctime>

using namespace std;

class Prostopadloscian {
private:
    int a, b, h, o, p, k;
public:
    Prostopadloscian();
    Prostopadloscian(int, int, int, int, int, int);
    void setBoki(int, int, int);
    int obliczObjetosc();
    int obliczPole();
    int obliczKrawedzie();
};

int main()
{
    int objentosc = 0, pole = 0, dlugosc = 0;
    Prostopadloscian prostopadloscian;
    prostopadloscian.setBoki();
    prostopadloscian.obliczPole();
    prostopadloscian.obliczObjetosc();
    prostopadloscian.obliczKrawedzie();
}

Prostopadloscian::Prostopadloscian()
{
    a = 1;
    b = 2;
    h = 3;
    o = 0;
    p = 0;
    k = 0;
}

Prostopadloscian::Prostopadloscian(int pa, int pb, int ph, int po, int pp, int pk)
{
    a = pa;
    b = pb;
    h = ph;
    o = po;
    p = pp;
    k = pk;
}

void Prostopadloscian::setBoki(int, int, int)
{
    cin >> a;
    cin >> b;
    cin >> h;
}

int Prostopadloscian::obliczObjetosc()
{
    return o = a * b * h;
}

int Prostopadloscian::obliczPole()
{
    return (4 * a * b) + (4 * a * h) + (4 * h * b);
}

int Prostopadloscian::obliczKrawedzie()
{
    return 4 * (a + b + h);
}
