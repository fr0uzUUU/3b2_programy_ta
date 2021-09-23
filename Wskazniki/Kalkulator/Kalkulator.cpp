#include <iostream>
using namespace std;

int main()
{
    double* pierwsza;
    pierwsza = new double(8);

    double* druga;
    druga = new double(6);

    double* dodawanie;
    dodawanie = new double;

    double* odejmowanie;
    odejmowanie = new double;

    float* mnozenie;
    mnozenie = new float;

    float* dzielenie;
    dzielenie = new float;

    *dodawanie = (*pierwsza) + (*druga);
    *odejmowanie = (*pierwsza) - (*druga);
    *mnozenie = (*pierwsza) * (*druga);
    *dzielenie = (*pierwsza) / (*druga);
    
    cout << "dodawanie: " << 1 << endl;
    cout << "odejmowanie: " << 2 << endl;
    cout << "mnozenie: " << 3 << endl;
    cout << "dzielenie: " << 4 << endl;

    int wybor;
    cin >> wybor;

    switch (wybor)
    {
    case 1:
        cout << *dodawanie << endl;
        break;
    case 2:
        cout << *odejmowanie << endl;
        break;
    case 3:
        cout << *mnozenie << endl;
        break;
    case 4:
        cout << *dzielenie << endl;
        break;
    }
    

    //cout << *dodawanie << endl;
    //cout << *odejmowanie << endl;
    //cout << *mnozenie << endl;
    //cout << *dzielenie << endl;

    delete pierwsza, druga, dodawanie, odejmowanie, mnozenie, dzielenie;
}
