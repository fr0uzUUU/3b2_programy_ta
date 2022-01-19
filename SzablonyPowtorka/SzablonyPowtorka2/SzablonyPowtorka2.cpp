#include <iostream>
#include <cmath>

using namespace std;

template <class T>
class Prostokat {
public:
	T bok1, bok2;
	T pole() {
		return bok1 * bok2;
	}
	T obwod();
};

template<>class
Prostokat <double> {
public:
	double bok1, bok2;
	double pole() {
		return bok1 * bok2;
	}
	double obwod() {
		return 2 * bok1 + 2 * bok2;
	}
};

int main()
{
	Prostokat<float> p1{ 4,7 };
	cout << p1.pole() << endl;
	cout << p1.obwod() << endl;
	Prostokat<double> p2{ 4.0,7.0 };
	cout << p2.pole() << endl;
	cout << p2.obwod() << endl;
}

template<class T>
T Prostokat<T>::obwod()
{
	return 2 * bok1 + 2 * bok2;
}
