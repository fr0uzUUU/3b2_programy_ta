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

const int n = 5;
const int ib = 5;

Metody tab[n + 2][n + 2];

void plansza() {
	for (int i = 1; i <= n; i++, cout << endl)
		for (int j = 1; j <= n; j++)
			tab[i][j].wyswietl();
}

bool calaPlansza() {
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			if (tab[i][j].klik == false) return true;
	return false;
}

bool licznikBomb() {
	int licznik = 0;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			if (tab[i][j].czyBomba) licznik++;
	if (licznik >= ib) return false;
	else return true;
}

void zera(int x, int y) {
	for (int i = x - 1; i <= x + 1; i++)
		for (int j = y - 1; j <= y + 1; j++)
			if (tab[i][j].klik == false)
				if (tab[i][j].wartosc == 0) {
					tab[i][j].klik = true;
					zera(i, j);
				}
				else tab[i][j].klik = true;
}

void zablokuj(int x, int y) {
	for (int i = x - 1; i <= x + 1; i++)
		for (int j = y - 1; j <= y + 1; j++)
			tab[i][j].wartosc += 100;
}

void odblokuj(int x, int y) {
	for (int i = x - 1; i <= x + 1; i++)
		for (int j = y - 1; j <= y + 1; j++)
			tab[i][j].wartosc -= 100;
}

int main()
{
	srand(time(NULL));

	int x, y, licznik = 0, z, a, b;
	bool bomba, koniec = true;

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			tab[i][j].wartosc = 0;

	cin >> b >> a;
	zablokuj(a, b);

	while (licznik < ib) {
		x = rand() % n + 1;
		y = rand() % n + 1;
		bomba = tab[x][y].wpiszBombe();
		if (bomba) {
			licznik++;
			for (int i = x - 1; i <= x + 1; i++)
				for (int j = y - 1; j <= y + 1; j++)
					tab[i][j].dodaj();
		}
	}

	odblokuj(a, b);
	zera(a, b);
	plansza();

	while ((calaPlansza()) && (koniec)) {
		cin >> y >> x >> z;
		bomba = tab[x][y].czyTrafilBombe(z);
		if (bomba) koniec = false;
		else {
			if (tab[x][y].wartosc == 0) zera(x, y);
			plansza();
		}
	}

	for (int i = 1; i <= n; i++, cout << endl)
		for (int j = 1; j <= n; j++)
			tab[i][j].wyswietlBomby();
}

Pole::Pole()
{
	wartosc = 100;
	klik = false;
	czyBomba = false;
}

bool Pole::wpiszBombe()
{
	if (wartosc >= 9) return false;
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
	if (z == 1) {
		if (licznikBomb())
			if (czyBomba) {
				czyBomba = false;
				klik = false;
			}
			else {
				czyBomba = true;
				klik = true;
			}
		return false;
	}
	else
	{
		czyBomba = false;
		klik = true;
		if (wartosc == 9) return true;
		else return false;
	}
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
