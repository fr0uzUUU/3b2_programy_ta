#include <iostream>
using namespace std;

int main()
{
    /*int zmiennaInt = 1024;
    cout << zmiennaInt << endl;
    cout << sizeof(zmiennaInt) << endl;
    cout << &zmiennaInt;*/

    /*double bok1 = 10;
    double *w_bok1;
    w_bok1 = &bok1;
    double bok2 = 15;
    double *w_bok2;
    w_bok2 = &bok2;
    double pole;
    double* w_pole = &pole;
    pole = bok1 * bok2;
    w_pole = (*w_bok1) * (*w_bok2);
    cout << pole << endl;
    cout << *w_pole;*/

    /*int* w_ocena;
    w_ocena = new int;
    *w_ocena = 4;
    cout << w_ocena << " " << *w_ocena;
    delete w_ocena;*/

    double* w_bok1;
    w_bok1 = new double(10);

    double* w_bok2;
    w_bok2 = new double(15);

    double* w_pole;
    w_pole = new double;

    *w_pole = (*w_bok1) * (*w_bok2);

    cout << w_pole << endl;
    cout << *w_pole;

    delete w_bok1, w_bok2, w_pole;
}

