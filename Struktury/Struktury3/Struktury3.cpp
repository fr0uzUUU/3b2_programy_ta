#include <iostream>
using namespace std;

class Pracownik{
public:
	int id = 1;
	string imie, nazwisko;
	static string nazwa_firmy;
	static string stanowisko;
	void ustawImie(string);
	void ustawNazwisko(string);
	void wyswietlDane() {
		cout << "Dane pracownika: "<< id << imie << " " << nazwisko << endl
			<< nazwa_firmy << " " << stanowisko << endl;
	}
};

string Pracownik::nazwa_firmy = "SAG";
string Pracownik::stanowisko = "Praktykant";

void Pracownik::ustawImie(string pImie) {
	imie = pImie;
}

void Pracownik::ustawNazwisko(string pNazwisko) {
	nazwisko = pNazwisko;
}

int main()
{
	/*
	Pracownik pracownik;
	pracownik.imie = "Jan";
	pracownik.nazwisko = "Kowalski";
	pracownik.wyswietlDane();

	Pracownik::stanowisko = "CO";
	Pracownik pracownik1;
	pracownik.ustawImie("Adam");
	pracownik.ustawNazwisko("Nowak");
	pracownik.wyswietlDane();*/

	Pracownik* w_pracownik = new Pracownik(); // dynamiczny wskaźnik
	w_pracownik->imie = "Jan";
	w_pracownik->nazwisko = "Kowalski";
	w_pracownik->wyswietlDane();
	delete w_pracownik;
}