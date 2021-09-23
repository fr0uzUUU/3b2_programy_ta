#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    srand(time(NULL));
    /*const int n = 5;
    int tablica[n];

    int* wsk;
    wsk = tablica;
    int suma = 0;

    for (int i = 0; i < n; i++)
    {
        tablica[i] = rand() % 10;
        cout << *(wsk + i) << " " << wsk + i << " " << tablica[i] << " " << &tablica[i] << endl;
    }
    for (int i = 0; i < n; i++)
    {
        suma += *wsk++;
    }
    cout << suma;

    for (int& element : tablica)
    {
        cout << element << " ";
    }*/
    int* wsk;
    wsk = new int[5];

    for (int i = 0; i < 5; i++)
    {
        *(wsk + i) = rand() % 10;;
        cout << *(wsk + i);
    }
    delete[] wsk;
}
