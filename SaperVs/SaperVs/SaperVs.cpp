#include <iostream>
#include <ctime>

using namespace std;

class Pole {
public:
	int wartosc;
	bool klik;
	bool czyBomba;
	Pole();
	bool wpiszBombe();
	void dodaj();
};

class Metody : public Pole {
public:
	bool czyTrafilBombe(int);
	void wyswietlBomby();
	void wyswietl();
};

Metody tab[7][7];

void plansza() {
	for (int i = 1; i <= 5; i++, cout << endl)
		for (int j = 1; j <= 5; j++)
			tab[i][j].wyswietl();
}

bool calaPlansza() {
	for (int i = 1; i <= 5; i++)
		for (int j = 1; j <= 5; j++)
			if (tab[i][j].klik == false) return true;
	return false;
}

int main()
{
	srand(time(NULL));

	int x, y, licznik = 0, z;
	bool bomba, koniec = true;

	while (licznik < 5) {
		x = rand() % 5 + 1;
		y = rand() % 5 + 1;
		bomba = tab[x][y].wpiszBombe();
		if (bomba) {
			licznik++;
			for (int i = x - 1; i <= x + 1; i++)
				for (int j = y - 1; j <= y + 1; j++)
					tab[i][j].dodaj();
		}
	}
	while ((calaPlansza) && (koniec)) {
		cin >> y >> x >> z;
		bomba = tab[x][y].czyTrafilBombe(z);
		if (bomba) {
			for (int i = 1; i <= 5; i++, cout << endl)
				for (int j = 1; j <= 5; j++)
					tab[i][j].wyswietlBomby();
			koniec = false;
		}
		else plansza();
	}
}

Pole::Pole()
{
	wartosc = 0;
	klik = false;
	czyBomba = false;
}

bool Pole::wpiszBombe()
{
	if (wartosc == 9) return false;
	else {
		wartosc = 9;
		return true;
	}
}

void Pole::dodaj()
{
	if (wartosc != 9) wartosc++;
}

bool Metody::czyTrafilBombe(int z)
{
	klik = true;
	if (z == 1) {
		if (czyBomba) czyBomba = false;
		else czyBomba = true;
		return false;
	}
	else
		if (wartosc == 9) return true;
		else return false;
}

void Metody::wyswietlBomby()
{
	if (wartosc == 9)
		if (czyBomba) cout << "!";
		else cout << "X";
	else
		if (czyBomba) cout << "?";
		else cout << wartosc;
}

void Metody::wyswietl()
{
	if (klik)
		if (czyBomba) cout << "P";
		else cout << wartosc;
	else cout << "_";
}
