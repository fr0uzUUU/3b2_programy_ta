#include <iostream>

using namespace std;

class Prostokat;

class Graniastoslup {
private:
	int h;
public:
	int objetosc(Prostokat);
	int ppc(Prostokat);
	void set(int);
};

class Prostokat {
private:
	int a, b;
public:
	int pole();
	void set(int, int);
	//friend class Graniastoslup; //przyjaciel klasy
	friend int Graniastoslup::objetosc(Prostokat); //przyjaciel metody
	friend int Graniastoslup::ppc(Prostokat); //przyjaciel metody
};

void Graniastoslup::set(int h)
{
	this->h = h;
}

void Prostokat::set(int a, int b)
{
	this->a = a;
	this->b = b;
}

int main()
{
	Prostokat p1;
	p1.set(1, 1);
	Graniastoslup g1;
	g1.set(2);

	cout << "Objetosc: " << g1.objetosc(p1) << endl;
	cout << "Pole powierzchni calkowitej: " << g1.ppc(p1) << endl;
}

int Graniastoslup::objetosc(Prostokat pP)
{
	return pP.a * pP.b * h;
}

int Graniastoslup::ppc(Prostokat pP)
{
	return 2 * pP.a * pP.b + 2 * pP.a * h + 2 * pP.b * h;
}

int Prostokat::pole()
{
	return a * b;
}


