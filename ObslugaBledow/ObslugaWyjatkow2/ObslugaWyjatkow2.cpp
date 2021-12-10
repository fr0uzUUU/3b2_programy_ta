#include <iostream>
#include <exception>

using namespace std;

class Wyjatek :public exception {
public:
    const char* what() const throw(){
        return "blad! proba dzielenia przez zero!";
    }
};

int main()
{
    try {
        double licznik = 1, mianownik = 0;
        if (mianownik == 0) {
            Wyjatek wyjatek;
            throw wyjatek;
        }
        else 
        {
            cout << licznik << " " << mianownik << endl;
            cout << licznik / mianownik << endl;
        }
    }
    catch (exception& e) {
        cout << e.what() << endl;
    }
}