#include <iostream>
using namespace std;

class Pracownik {
public:
    string imie, nazwisko;
    void wyswietlDane() {
        cout << "Dane pracownika: " << imie << " " << nazwisko << endl;
    }
};
Pracownik* pobierzDane(Pracownik*);
void wyswietlDane(const Pracownik*);

int main()
{
    Pracownik* w_pracownik = new Pracownik();
    w_pracownik = pobierzDane(w_pracownik);
    wyswietlDane(w_pracownik);
    delete w_pracownik;
}

Pracownik* pobierzDane(Pracownik* w_p) {
    cin >> w_p->imie;
    cin >> w_p->nazwisko;
    return w_p;
}

void wyswietlDane(const Pracownik* w_p) {
    cout << w_p->imie << " " << w_p->nazwisko;
};
