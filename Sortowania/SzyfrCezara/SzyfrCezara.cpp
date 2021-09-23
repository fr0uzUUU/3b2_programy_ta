#include <iostream>

using namespace std;

void szyfruj(int klucz, char tab[]) {
    int dlugosc = strlen(tab);

    if (klucz > 0)
    {
        for (int i = 0; i < dlugosc; i++)
            if (tab[i] + klucz <= 'Z')
                tab[i] += klucz;
            else
                tab[i] = tab[i] + klucz - 26;
    }
    else
    {
        for (int i = 0; i < dlugosc; i++)
            if (tab[i] + klucz >= 'A')
                tab[i] += klucz;
            else
                tab[i] = tab[i] + klucz + 26;
    }
}
int main()
{
    char tab[100];
    char zmiana;
    srand(time(NULL));
    int klucz = rand() % 26;
    cout << "Twoj klucz: " << klucz << endl;
    cout << "Podaj słowo: " << endl;
    cin >> tab;
    for (int j = 0; j <= 99; j++) {
        if ((int)tab[j] >= 97 && (int)tab[j] <= 122) {
            zmiana = (int)tab[j] - 32;
            tab[j] = zmiana;
        }
        else
            continue;
    }
    cout << tab;
    szyfruj(klucz, tab); 
    cout << endl;
    cout << "Po zaszyfrowaniu: " << tab << endl;
    szyfruj(-klucz, tab); 
    cout << "Po rozszyfrowaniu: " << tab << endl;
}

