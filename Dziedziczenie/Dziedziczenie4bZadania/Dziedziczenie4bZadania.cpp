#include <iostream>

using namespace std;

class Osoba {
private:
    string imie{ "" };
    string nazwisko{ "" };
public:
    void setImie(string pImie) {
        imie = pImie;
    }
    void setNazwisko(string pNazwisko) {
        nazwisko = pNazwisko;
    }
    string getImie() {
        return imie;
    }
    string getNazwisko() {
        return nazwisko;
    }
    string zwrocDane() {
        return imie + " " + nazwisko;
    }
};

class Przedmiot {
public:
    string przedmiot;
    string zwrocDane() {
        return przedmiot;
    }
};

class Klasa {
public:
    string klasa;
    string zwrocDane() {
        return klasa;
    }
};

class Pracownik : public Osoba {
public:
    string id;
    string zwrocDane() {
        return getImie() + " " + getNazwisko() + " " + id;
    }
};
class Dyrektor : public Pracownik {
public:
    string zwrocDane() {
        return getImie() + " " + getNazwisko();
    }
};

class Nauczyciel : public Pracownik, public Przedmiot {
public:
    string zwrocDane() {
        return getImie() + " " + getNazwisko() + " " + przedmiot;
    }
};

class Wychowawca : public Nauczyciel, public Klasa {
public:
    string zwrocDane() {
        return getImie() + " " + getNazwisko() + " " + przedmiot + " " + klasa;
    }
};

class Sekretarka : public Pracownik {
public:
    string zwrocDane() {
        return getImie() + " " + getNazwisko();
    }
};


int main()
{
    Dyrektor d1;
    d1.setImie("andrzej");
    d1.setNazwisko("olecki");
    cout << d1.zwrocDane() << endl;

    Sekretarka s1;
    s1.setImie("anna");
    s1.setNazwisko("kot");
    cout << s1.zwrocDane() << endl;

    Wychowawca w1;
    w1.setImie("jan");
    w1.setNazwisko("kowalski");
    w1.przedmiot = "informatyka";
    w1.klasa = "3B";
    cout << w1.zwrocDane() << endl;
}