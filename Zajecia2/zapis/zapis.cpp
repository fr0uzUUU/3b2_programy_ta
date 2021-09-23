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
    int max = 0;


    plik.open("plik.txt", ios::out | ios::trunc);
    if (plik.good() == true)
    {
        plik << "100 liczb losowych: \n";

        for (int i = 0; i < 100; i++)
        {
            plik << rand() % 100 + 1 << " " << endl;
            plik.close();
        }
        
        plik.open("plik.txt", ios::in);
        if (plik.good() == true){
            while (!plik.eof()){
                getline(plik, linia);
                if (linia.size() > 0) istringstream(linia) >> liczba;
                else break;
                if (liczba > max) max = liczba;
                tab[liczba] ++;
            }
          plik.close();
        }
        cout << max;
        max = 0;
        for (int i = 0; i < 101; i++)
        {
            if (tab[i] > max) {
                max = tab[i];
                lider = 1;
            }
        }

    }

    system("PAUSE");
    return(0);
}
