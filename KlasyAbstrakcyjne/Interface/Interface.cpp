#include <iostream>
using namespace std;

class Info { //interfejs
public:
    virtual void wyswietlDane() = 0;
};

class Osoba {
public:
    string imie, nazwisko, szkola;
};

class Pracownik : public Info, public Osoba {
public:
    string stanowisko;
    void wyswietlDane() {
        cout << imie << " " << nazwisko << " " << stanowisko << endl;
    }
};

class Uczen : public Info, public Osoba {
public:
    string klasa;
    void wyswietlDane() {
        cout << imie << " " << nazwisko << " " << klasa << endl;
    }
};

int main()
{
    Pracownik pracownik;
    pracownik.imie = "Jan";
    pracownik.nazwisko = "Kowalski";
    pracownik.stanowisko = "nauczyciel";
    pracownik.wyswietlDane();

    Uczen uczen;
    uczen.imie = "Jaś";
    uczen.nazwisko = "Fasola";
    uczen.klasa = "3b";
    uczen.wyswietlDane();
}