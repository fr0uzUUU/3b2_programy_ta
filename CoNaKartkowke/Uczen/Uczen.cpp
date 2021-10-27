#include <iostream>
using namespace std;

struct Data
{
    int dd, mm, rr;
};

class Uczen {
public:
    string podst;
    Uczen();
    int ileZostalo(int, int, int);
private:
    int lata;
    string imie, nazwisko;
    Data data_przyjscia;
    bool podstawowka;
};

int main()
{
    int dd, mm, rr, lata;
    cin >> dd >> mm >> rr;
    cout << dd << "." << mm << "." << rr << endl;
    Uczen u1;
    lata = u1.ileZostalo(dd, mm, rr);
    if (lata < 1) cout << "uczen ukonczyl szkole";
    else cout << "uczniowi zostalo " << lata << " lat nauki";
}

Uczen::Uczen()
{
    cin >> imie;
    cin >> nazwisko;
    cin >> data_przyjscia.dd;
    cin >> data_przyjscia.mm;
    cin >> data_przyjscia.rr;
    cin >> podst;
    if (podst == "tak") podstawowka = true;
    else podstawowka = false;
}

int Uczen::ileZostalo(int pDzisiejszaDD, int pDzisiejszaMM, int pDzisiejszaRR)
{
    int temp;
    if (pDzisiejszaMM > 6)
        temp = pDzisiejszaRR - data_przyjscia.rr;
    else temp = pDzisiejszaRR - data_przyjscia.rr - 1;
    if (podstawowka) lata = 5 - temp;
    else lata = 4 - temp;
    return lata;
}
