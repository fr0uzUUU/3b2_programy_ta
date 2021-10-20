#include <iostream>
using namespace std;

class Figura {
public:
    int a, b, h;
    int obj, pole, dl;
};
Figura* pobierzDane(Figura*);
void oblicz(const Figura*);
void wyswietlDane(const Figura*);

int main()
{
    Figura* w_figura = new Figura();
    w_figura = pobierzDane(w_figura);
    wyswietlDane(w_figura);
    delete w_figura;
}

Figura* pobierzDane(Figura* w_p) {
    cout << "Podaj a: ";
    cin >> w_p->a;
    cout << "\nPodaj b: ";
    cin >> w_p->b;
    cout << "\nPodaj h: ";
    cin >> w_p->h;
    return w_p;
}

void oblicz(const Figura* w_p, int a, int b, int h) {
    int obj;
    int pole = (2 * a * b) + (2 * a * h) + (2 * h * b);
    int dl = 4 * (a + b + h);
}

void wyswietlDane(const Figura* w_p) {
    cout << w_p->a << " " << w_p->b << " " << w_p->h << endl;
};
