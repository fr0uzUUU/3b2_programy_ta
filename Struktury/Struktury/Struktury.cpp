#include <iostream>
#include <string>
using namespace std;

struct Data
{
	int dd, mm, rr;
};

struct Pracownik
{
	string imie;
	string nazwisko;
	string stanowsisko;
	Data data_urodzenia;
};

int main()
{
	Pracownik* wsk = new Pracownik;
	
	wsk->imie = "Jan";
	wsk->nazwisko = "Kowalski";

	//Pierwsza wersja
	//Pracownik pracownik1{ "Jan", "Kowalski", "programista", {30, 10, 2001} };
	//Pracownik* wsk = &pracownik1;
	//cout << pracownik1.imie << endl;
	//cout << pracownik1.nazwisko << endl;
	//cout << pracownik1.stanowsisko << endl;
	//cout << pracownik1.data_urodzenia.dd << "." 
	//	 << pracownik1.data_urodzenia.mm << "." 
	//	 << pracownik1.data_urodzenia.rr << endl;

	//cout << "to samo, ale na wskaznikach";

	cout << wsk->imie << endl;
	cout << wsk->nazwisko << endl;
	cout << wsk->data_urodzenia.dd << "."
		 << wsk->data_urodzenia.mm << "."
		 << wsk->data_urodzenia.rr << endl;

	delete wsk;
}
