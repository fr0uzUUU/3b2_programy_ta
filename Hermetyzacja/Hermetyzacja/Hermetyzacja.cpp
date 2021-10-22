#include <iostream>
#include <ctime>

using namespace std;

class Prostokat {
private:
    double bok1{ 0 }, bok2{ 0 };
public:
    Prostokat();
    Prostokat(double, double);
    void setBok(double, double);
    double getBok1();
    double getBok2();
    void pobierzBoki(double&, double&);
};

int main()
{
    double dlugosc = 1, szerokosc = 2;

    Prostokat prostokat;
    prostokat.setBok(5, 7);
    prostokat.pobierzBoki(dlugosc, szerokosc);
    
    cout << prostokat.getBok1() << " " << prostokat.getBok2();
}

Prostokat::Prostokat()
{
}

Prostokat::Prostokat(double pBok1, double pBok2)
{
    bok1 = pBok1;
    bok2 = pBok2;
}

void Prostokat::setBok(double pBok1, double pBok2)
{
    bok1 = pBok1;
    bok2 = pBok2;
}

double Prostokat::getBok1()
{
    return bok1;
}

double Prostokat::getBok2()
{
    return bok2;
}

void Prostokat::pobierzBoki(double& pBok1, double& pBok2)
{
    pBok1 = bok1;
    pBok2 = bok2;
}
