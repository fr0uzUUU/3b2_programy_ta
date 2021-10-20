#include <iostream>

using namespace std;

class Prostokat {
private:
    double bok1;
    double bok2;
    string kolor;
public:
    Prostokat();
    Prostokat(double, double);
    void ustawKolor(string);
    void wyswietlDane();
    ~Prostokat() {                  // destruktor
        cout << "-------- DESTRUKTOR ---------" << endl;
    }
};

Prostokat::Prostokat() {
    kolor = "bialy";                // kolor = "biały"
}

Prostokat::Prostokat(double pBok1, double pBok2) : Prostokat::Prostokat(){
    bok1 = pBok1;
    bok2 = pBok2;
}

void Prostokat::ustawKolor(string pKolor) {
    kolor = pKolor;
}

void Prostokat::wyswietlDane(){
    cout << bok1 << " " << bok2 << " " << kolor << endl;
}

int main()
{
    /*Prostokat p1;
    p1.wyswietlDane();
    
    Prostokat p2(10, 5);
    p2.wyswietlDane();
    p2.ustawKolor("czarny");
    p2.wyswietlDane();*/

    {
        Prostokat p1;
        p1.wyswietlDane();
    }

    Prostokat* w_p = new Prostokat(4, 6);
    w_p->wyswietlDane();
    
    Prostokat p2(6, 8);
    p2.wyswietlDane();

    delete w_p;

}
