#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    srand(time(NULL));
    const int n = 5;
    int* tablica;
    tablica = new int[n];
    int* wsk;
    wsk = new int[n / 2];

    for (int i = 0; i < n; i++)
    {
        *tablica = rand() % 10;
        cout << *tablica++ << " ";
    }
    cout << endl;

    tablica = tablica - n;
    
    for (int i = 0; i < n / 2; i++)
    {
        *wsk++ = *tablica;
        tablica += 2;
       
    }

    delete[] tablica, wsk;
}