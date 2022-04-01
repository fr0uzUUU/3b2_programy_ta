#include <iostream>
#include <ctime>

using namespace std;

class Kwadrat {
public:
	int a, h;
	Kwadrat();
	Kwadrat(int a, int h) {
		this->a = a;
		this->h = h;
	}
	virtual int PolePowierzchni() {
		return a * h;
	}
	virtual void wypisz() {
		cout << "Podstawa figury: " << a << endl
			<<"Wysokosc figury: "<<h << endl;
	}
};

class Prostokat : public Kwadrat{
public:
	int grubosc_lini;
	Prostokat();
	Prostokat(int a, int h, int grubosc_lini) {
		this->a = a;
		this->h = h;
		this->grubosc_lini = grubosc_lini;
	};
	virtual int PolePowierzchni() {
		return a * h;
	}
	virtual void wypisz() {
		cout << "Podstawa figury: " << a << endl
			<< "Wysokosc figury: " << h << endl
			<< "Grubosc linii: " << grubosc_lini << endl;
	}
};

class Romb : public Kwadrat{
public:
	int kat_ostry;
	Romb();
	Romb(int a, int h, int kat_ostry) {
		this->a = a;
		this->h = h;
		this->kat_ostry = kat_ostry;
	};
	virtual int PolePowierzchni() {
		return a * h;
	}
	virtual void wypisz() {
		cout << "Podstawa figury: " << a << endl
			<< "Wysokosc figury: " << h << endl
			<< "Kat ostry: " << kat_ostry << endl;
	}
};
void WszystkieZmienne() {

}
template<typename T>
T SumaWszystkich(Kwadrat k[], T ile) {
	T suma;
	for (int i = 0; i < ile; i++){
		suma += k[i].PolePowierzchni();
	}
	return suma;
}

int main()
{
	/*cout << "Podaj liczbę figur\n";
	cin >> ile;
	srand(time(NULL));
	cout << "Podaj rodzaj figur\n";
	for (int i = 0; i <= ile; i++)
	{
		a = rand() % 10 + 1;
		
		h = rand() % 10 + 1;
	}*/
	try {
		int ile;
		string rodzaj;
		cout << "Podaj liczbę figur\n";
		cin >> ile;
		cout << "Podaj rodzaj figur\n";
		cin >> rodzaj;
		if (ile < 1 && ile > 100) {
			throw ile;
		}
		if (rodzaj == "kwadrat" || rodzaj == "prostokat" || rodzaj == "romb") {
			throw rodzaj;
		}
		Kwadrat k[ile];
	}
	catch (int ile) {
		cout << "Same tu błędy";
	}
}

Kwadrat::Kwadrat()
{
	a = 0;
	h = 0;
}

Prostokat::Prostokat()
{
	a = 0;
	h = 0;
	grubosc_lini = 0;
}

Romb::Romb()
{
	a = 0;
	h = 0;
	kat_ostry = 0;
}
