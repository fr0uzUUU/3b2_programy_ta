 /*<><><><><><><><> Polimorfizm <><><><><><><><>*/
#include <iostream>

using namespace std;

class Pracownik {
public:
    string imie, nazwisko;
    virtual void zwrocDane(); //metoda będzie aktualizowana
};

class Nauczyciel : public Pracownik {
public:
    string przedmiot;
    void zwrocDane();
};

class Wychowawca : public Nauczyciel {
public:
    string klasa;
    void zwrocDane();
};

int main()
{
    Pracownik* w_p; // nie można dopisać przez to przedmiotu i klasy 

    Pracownik p;
    w_p = &p;
    w_p->imie = "Jan";
    w_p->nazwisko = "Kowalski";
    w_p->zwrocDane();

    Nauczyciel n;
    w_p = &n;
    w_p->imie = "Adam";
    w_p->nazwisko = "Nowak";
    w_p->zwrocDane();

    Wychowawca w;
    w_p = &w;
    w_p->imie = "Janina";
    w_p->nazwisko = "K";
    w_p->zwrocDane();
}

void Pracownik::zwrocDane()
{
    cout << "Pracownik: " << imie << " " << nazwisko << endl;
}

void Nauczyciel::zwrocDane()
{
    cout << "Nauczyciel" << imie << " " << nazwisko << " " << przedmiot << endl;
}

void Wychowawca::zwrocDane()
{
    cout << "Wychowawca: " << imie << " " << nazwisko << " " << przedmiot << " " << klasa << endl;
}
