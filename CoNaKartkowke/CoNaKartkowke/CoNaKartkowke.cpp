#include <iostream>

using namespace std;

class Prostokat
{
private:
    int a, b;
public:
    Prostokat();
    void PobierzBoki(int&, int&);
    void WyswietlDane();
};

Prostokat::Prostokat()
{
    cin >> a;
    cin >> b;
}

void Prostokat::PobierzBoki(int& pa, int& pb)
{
    pa = a;
    pb = b;
}

void Prostokat::WyswietlDane()
{
    cout << a << " " << b << endl;
}

class Prostopadloscian
{
private:
    int a, b, h = 5;
public:
    Prostopadloscian(int, int);
    int ObliczObjetosc();
    int ObliczPole();
};

Prostopadloscian::Prostopadloscian(int pa, int pb)
{
    a = pa;
    b = pb;
}

int Prostopadloscian::ObliczPole()
{
    int p;
    p = (2 * a * b) + (2 * b * h) + (2 * a * h);
    return p;
}

int Prostopadloscian::ObliczObjetosc()
{
    int o;
    o = a * b * h;
    return o;
}

int main()
{
    int a, b;
    Prostokat p1;
    p1.WyswietlDane();
    p1.PobierzBoki(a, b);
    Prostopadloscian pp1(a, b);
    cout << "Objetosc: " << pp1.ObliczObjetosc() << endl 
        << "Pole: " << pp1.ObliczPole() << endl;
}