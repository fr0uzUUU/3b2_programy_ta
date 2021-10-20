#include <iostream>

using namespace std;

class Uczen {
public:
    string imie, nazwisko, klasa;
    int grupa, nr;
    Uczen();
    Uczen(string, string, string, int, int);
    void wyswietlDane();
};

Uczen::Uczen() {
    imie = "Jan";
    nazwisko = "Kowalski";
    klasa = "3b";
    grupa = 2;
}

Uczen& PobierzDane(Uczen& u) {
    cin >> u.imie;
    cin >> u.nazwisko;
    cin >> u.klasa;
    cin >> u.grupa;
    cin >> u.nr;
    return u;
}

int main()
{
    Uczen u1;
    u1.wyswietlDane();
    PobierzDane(u1);
    u1.wyswietlDane();
}
