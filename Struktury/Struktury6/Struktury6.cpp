#include <iostream>

using namespace std;

class Prostokat {
private:
    double bok1;
    double bok2;
public:
    Prostokat();
    Prostokat(double, double);
    Prostokat(const Prostokat&); //konstruktor kopiujący
    void pobierzBoki(double&, double&);
    void ustawBoki(double, double);
};

Prostokat::Prostokat() {
    bok1 = 1;
    bok2 = 1;
}

Prostokat::Prostokat(double pBok1, double pBok2) {
    bok1 = pBok1;
    bok2 = pBok2;
}

Prostokat::Prostokat(const Prostokat& wzorzec) {
    bok1 = wzorzec.bok1;
    bok2 = wzorzec.bok2;
}

void Prostokat::pobierzBoki(double& pBok1, double& pBok2) {
    pBok1 = bok1;
    pBok2 = bok2;
}

void Prostokat::ustawBoki(double pBok1, double pBok2) {
    bok1 = pBok1;
    bok2 = pBok2;
}

Prostokat kopiujProstokat(Prostokat prostokat) {
    return prostokat;
}

int main()
{
    double b1, b2;
    Prostokat p1(1, 2);
    p1.pobierzBoki(b1, b2);
    cout << b1 << " " << b2 << endl;

    Prostokat p2 = p1;
    p2.pobierzBoki(b1, b2);
    cout << b1 << " " << b2 << endl;

    Prostokat p3(p1);                           // z wykorzystaniem konstruktora kopiującego
    p3.pobierzBoki(b1, b2);
    cout << b1 << " " << b2 << endl;

    Prostokat p4;                               // funkcja zewnetrza
    p4 = kopiujProstokat(p1);
    p4.ustawBoki(5, 10);
    p4.pobierzBoki(b1, b2);
    cout << b1 << " " << b2 << endl;

}
