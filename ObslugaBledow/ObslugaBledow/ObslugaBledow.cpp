#include <iostream>

using namespace std;

int main()
{
    try {
        double licznik = 1, mianownik = 0;
        if (mianownik == 0)
            throw mianownik;
        cout << licznik << " " << mianownik << endl;
        cout << licznik / mianownik;
    }

    catch (double mianownik) {
        cout << "Proba dzielenia przez 0!" << endl;
    }
}