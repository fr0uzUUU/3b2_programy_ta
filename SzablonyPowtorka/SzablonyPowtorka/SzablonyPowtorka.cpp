#include <iostream>
#include <cmath>

using namespace std;

template <typename T> // dzieki temu nie trzeba podawac typu danych
T pole(T bok1, T bok2) { // za T można podać typ dancyh, np.:T pole(int bok1, T bok2)
	T p = bok1 * bok2;
	return p;
}

template<>
double pole(double bok1, double bok2) {
	double p = bok1 * bok2;
	return p;
}

template <typename T>
void  wypisz(T pole) {
	cout << pole << endl;
}

int main()
{
	cout << pole(5, 7) << endl;
	wypisz(pole(5, 7));
}