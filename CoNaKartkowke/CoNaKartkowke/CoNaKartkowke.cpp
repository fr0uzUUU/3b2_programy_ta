/*Klasy prostokat i prostopadloscian obliczanie pp,o na podstawie zmiennych prostokata */
#include <iostream>
using namespace std;

class Prostokat {
private:
	int a, b;
public:
	Prostokat();
	void pobierzBoki(int&, int&);
};

class Prostopadloscian {
private:
	int h = 5, obj, pp;
public:
	Prostopadloscian(int, int);
	int objentosc();
	int pole();
};

int main()
{
	int aa, bb;
	Prostokat p1;
	p1.pobierzBoki(aa, bb);
	Prostopadloscian pp1(aa, bb);
	cout << pp1.objentosc() << " " << pp1.pole() << endl;
}

Prostokat::Prostokat()
{
	cin >> a;
	cin >> b;
}

void Prostokat::pobierzBoki(int&, int&)
{
}

Prostopadloscian::Prostopadloscian(int, int)
{
}

int Prostopadloscian::objentosc()
{
	return 0;
}

int Prostopadloscian::pole()
{
	return 0;
}
