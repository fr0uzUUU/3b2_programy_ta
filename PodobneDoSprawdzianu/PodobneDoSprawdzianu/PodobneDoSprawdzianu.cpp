#include <iostream>

using namespace std;

class Osoba;
class Szkola {
public:
	Szkola() {}
	Szkola(string n) {
		nazwaSzkoly = n;
	}
	friend class Osoba;
private:
	string nazwaSzkoly;
	friend class Osoba;
};

class Stanowisko {
private:
	string stanowisko;
public:
	void setStanowisko(string s) {
		stanowisko = s;
	}
	string getStanowsiko() {
		return stanowisko;
	}
};

class Osoba : public Stanowisko {
public:
	Osoba() {}
	Osoba(string i, string n, Szkola sk, string st) {
		imie = i;
		nazwisko = n;
		s = sk;
		setStanowisko(st);
	}
	Osoba(string i, string n){}
	void setSzkola(string n) {
		s.nazwaSzkoly = n;
	}
	string getSzkola() {
		return s.nazwaSzkoly;
	}
	void Wyswietl(Szkola s) {
		cout << imie << " " << nazwisko << " " << getStanowsiko() << " " << s.nazwaSzkoly << endl;
	}
private:
	string imie, nazwisko;
	Szkola s;
};

int main() {
	Szkola s1("TKK Polna");
	Szkola s2("Wiśniowa");
	Szkola s3("Zajączek");
	Szkola s4("Kasprzak");

	Osoba o[5];

	o[0] = Osoba("Adam", "Kowalski", s1, "Dyrektor");
	o[1] = Osoba("Piotr", "Nowak", s2, "Nauczyciel");
	o[2] = Osoba("Artur", "Andrus", s3, "Dyrektor");
	o[3] = Osoba("Anna", "Joanna", s4, "Sekretarka");
	o[4] = Osoba("Filip", "Nowaczkiewicz", s3, "Pracownik");

	for (int i = 0; i < 5; i++)
	{
		o[i].Wyswietl();
		cout << endl;
	}
}