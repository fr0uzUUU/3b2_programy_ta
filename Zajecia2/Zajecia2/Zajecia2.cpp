// Zajecia2.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <time.h>
#include <algorithm>
#include <sstream>
using namespace std;

int main()
{
    string linia;
    fstream plik;
    int liczba;
    srand(time(NULL));
    int tab[100];
    int iloscPow[100];
    int lider = 0;

    plik.open("plik.txt", ios::out | ios::trunc); // app zapis, trunc nie nadpisuje kolejnych
    if (plik.good() == true)
    {
        plik << "100 liczb losowych: \n";

        for (int i = 0; i < 100; i++)
        {
            tab[i] = rand() % 100 + 1;
            plik << tab[i] << " " << endl;
        }
        sort(tab, tab + 100);
        for (int j = 0; j < 100; j++) {
            cout << tab[j]<< endl;
        }
        plik << "posortowane \n";
        for (int a = 0; a < 100; a++)
        {
            plik << tab[a] << " " << endl;
        }
        cout << "najwieksza: ";
        cout << tab[99] << endl;
        plik.close();
        if (linia.size() > 0) {
           // liczba = stoi(liczba);
        }
        else {
           // break;
        }
        for (int w = 0; w < 99; w++)
        {
            for (int q = 0; q < 99; q++)
            {
                if (tab[q] == tab[q+1]) {
                    iloscPow[q] + 1;
                }
                else {
                    cout << "index: " << q << iloscPow;
                    continue;
                }
            }
        }
        
   


    }

    

    system("PAUSE");
    return(0);
}






