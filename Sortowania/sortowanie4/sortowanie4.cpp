#include<iostream>
using namespace std;
//sortowanie przez wstawianie
int main()
{
    int tab[5], i = 0, n = 5, pomocnicza, j = 1;
    int k;
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        tab[i] = rand() % 100;
    }
    //for (int i = 0; i < n; i++)
    //{
    //    //wstawienie 
    //    pomocnicza = tab[i]; 
    //    j = i - 1;

    //    //przesuwanie 
    //    while (j >= 0 && tab[j] > pomocnicza)
    //    {
    //        tab[j + 1] = tab[j]; //przesuwanie elementów
    //        --j;
    //    }
    //    tab[j + 1] = pomocnicza; 
    //}
    //for (int i = 0; i < n; i++) 
    //{
    //    cout << tab[i] << " ";
    //}
    while (j <= n)
    {
        k = j;
        while (k >= 1)
        {
            if (tab[k - 1] < tab[k])
            {
                swap(tab[k - 1], tab[k]);
                k--;
            }
            else break;
        }
        j++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << tab[i] << " ";
    }
}