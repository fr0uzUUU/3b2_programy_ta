#include <iostream>

using namespace std;

class Prostopadloscian {
	double a, b, h, p;
	Prostopadloscian();
	Prostopadloscian(double, double, double);
	double ObliczPole(double, double, double);
	double ObliczKrawedzie(double, double, double);
	double ObliczObjetosc(double, double, double);
};

Prostopadloscian::Prostopadloscian() {
	a = 1;
	b = 2;
	h = 3;
}

Prostopadloscian::Prostopadloscian(double pa, double pb, double ph) {
	a = pa;
	b = pb;
	h = ph;
}

double Prostopadloscian::ObliczPole(double pa, double pb, double ph) {
	double pp
}

double Prostopadloscian::ObliczKrawedzie(double pa, double pb, double ph) {
	double p;
	pp = (2 * pa * pb) + (2 * pa * ph) + (2 * ph * pb);
}

double Prostopadloscian::ObliczObjetosc(double pa, double pb, double ph) {

}
int main()
{
	
}
