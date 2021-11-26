#include <iostream>
using namespace std;

class Osoba {
public:
    string imie, nazwisko;
    virtual void wyswietlDane() = 0;
};

class Stanowisko {
public:
    string stanowisko;
    virtual void wyswietlDane() = 0;
};

class Klasa {
public:
    string klasa;
    virtual void wyswietlDane() = 0;
};

class Pracownik : public Osoba, public Stanowisko {
public:
    virtual void wyswietlDane() {
        cout << imie << " " << nazwisko << " " << stanowisko << endl;
    }
};

class Uczen : public Osoba, public Klasa {
public:
    virtual void wyswietlDane() {
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