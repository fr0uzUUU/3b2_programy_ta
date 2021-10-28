#include <iostream>

using namespace std;

struct Data
{
    int dd, mm, rr;
};

class Uczen
{
private:
    int lata;
    string imie, nazwisko;
    Data data_przyjecia;
    bool podstawowka;
public:
    string podst;
    Uczen();
    int IleLat(int, int, int);
    void WyswietlDane();
};

Uczen::Uczen()
{
    cin >> imie;
    cin >> nazwisko;
    cin >> data_przyjecia.dd;
    cin >> data_przyjecia.mm;
    cin >> data_przyjecia.rr;
    cin >> podst;
    if (podst == "tak") podstawowka = true;
    else podstawowka = false;
}

int Uczen::IleLat(int pDzisiejszaDD, int pDzisiejszaMM, int pDzisiejszaRR)
{
    int temp;
    if (pDzisiejszaMM > 6)
        temp = pDzisiejszaRR - data_przyjecia.rr;
    else temp = pDzisiejszaRR - data_przyjecia.rr - 1;
    if (podstawowka) lata = 5 - temp;
    else lata = 4 - temp;
    return lata;
}

void Uczen::WyswietlDane()
{
    cout << "Imie: " << imie << endl << "Nazwisko: " << nazwisko << endl << "Data przyjecia: " <<
        data_przyjecia.dd << "." << data_przyjecia.mm << "." << data_przyjecia.rr << endl <<
        "Czy po podstawowce? " << podstawowka << endl;
}

int main()
{
    int dd, mm, rr, lata;
    cin >> dd >> mm >> rr;
    Uczen u1;
    u1.WyswietlDane();
    lata = u1.IleLat(dd, mm, rr);
    if (lata < 1) cout << "uczen ukonczyl szkole";
    else cout << "Uczniowi zostalo " << lata << " lat/a nauki";
}