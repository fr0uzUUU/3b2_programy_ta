#include <iostream>
#include <cmath>

using namespace std;

template <class T>

class Oceny {
public:
    Oceny(){
        cout << "Wywolanie konstruktora klasy ogolnej ..." << endl;
    }
    T wyklad;
    T cwiczenia;
    T laboratorium;
    T seminarium;
    T srednia() {
        return (wyklad + cwiczenia + laboratorium + seminarium) / 4;
    }
};

template <> class
Oceny <double> {
public:
    Oceny() {
        cout << "Wywolanie konstruktora klasy specjalizowanej ..." << endl;
    }
    double wyklad;
    double cwiczenia;
    double laboratorium;
    double seminarium;
    double srednia() {
        return (round(wyklad) + 
            round(cwiczenia) +
            round(laboratorium) + 
            round(seminarium)) / 4;
    }
};

int main()
{
    Oceny <int> oceny1 = Oceny<int>();
    oceny1.wyklad = 3;
    oceny1.cwiczenia = 4;
    oceny1.laboratorium = 3;
    oceny1.seminarium = 4;

    cout << "Srednia ocen semestralnych: " << oceny1.srednia() << endl;

    Oceny<double> oceny2;
    oceny2.wyklad = 3.0;
    oceny2.cwiczenia = 4.0;
    oceny2.laboratorium = 3.0;
    oceny2.seminarium = 4.0;

    cout << "Srednia ocen semestralnych: " << oceny2.srednia() << endl;

    return 0;
}