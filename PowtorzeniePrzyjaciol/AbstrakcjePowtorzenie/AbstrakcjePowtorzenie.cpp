#include <iostream>

using namespace std;

class Metody {
	virtual void wyswietl() = 0; // polimorfizm dynamiczny, statyczny korzysta tylko z klasy nadrzednej
};

class Osoba {
public:
	string imie, nazwisko;
};

class Szkola {
public:
	string nazwaSzkoly;
};

class Stanowisko {
public:
	string nazwaStanowiska;
};

class Pracownik : public Osoba, public Szkola, public Stanowisko, public Metody {
public:
	void set(string i, string n, string sz, string st) {
		imie = i;
		nazwisko = n;
		nazwaSzkoly = sz;
		nazwaStanowiska = st;
	}
	void wyswietl() {
		cout << imie << " " << nazwisko << endl
			<< nazwaSzkoly << endl
			<< nazwaStanowiska;
	}
};

class Uczen : public Osoba, public Szkola, public Metody {
public:
	void set(string i, string n, string sz) {
		imie = i;
		nazwisko = n;
		nazwaSzkoly = sz;
	}
	void wyswietl() {
		cout << imie << " " << nazwisko << endl
			<< nazwaSzkoly << endl;
	}
};

int main() {

}
