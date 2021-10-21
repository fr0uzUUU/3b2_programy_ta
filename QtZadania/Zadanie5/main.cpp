#include "hondurota.h"
#include <QTextStream>
#include <iostream>
using namespace std;

int main()
{
    cout << "Podaj dystans i ograniczenie predkosci" << endl;
    //cin >> distance >> speedLimit;
    Hondurota civic(25, 210, 55, 9);

    QTextStream cout(stdout);
    for (int i = 0; i <= 10; i++){
        cout << "Ile paliwa:" << " " << civic.getFuel();
    }
}
