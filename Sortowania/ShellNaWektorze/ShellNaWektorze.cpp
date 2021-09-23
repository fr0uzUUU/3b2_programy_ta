#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <vector>
using namespace std;

void sortowanie(int* tab, int n) {
    int j = 1, k;
    while (j <= n)
    {
        for (k = j; k > 0; k--)
        {
            if (tab[k] > tab[k-1])
            {
                swap(tab[k], tab[k - 1]);
            }
            else
            {
                break;
            }
        }
        j++;
    }
    
}

int main()
{
    int j, k, h, n, ile=3;
    cin >> n;
    int* tab = new int[n];

    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        tab[i] = rand() % 100;
    }
    for (int i = 0; i < n; i++)
    {
        cout << tab[i] << " ";
    }
    cout << endl;
    for (h = n / 2; h > 1; h--)
    {
        for (int i = 0; i < h; i++)
        {
            j = i;
            k = 0;
            int* wsk = new int[ile];
            while (j < n)
            {
                *(wsk + k) = tab[j];
                k++;
                j += h;
            }
            sortowanie(wsk, k);
            while (j >= 0)
            {
                tab[j - h] = --*wsk;
                j -= h;
            }
            delete[] wsk;
        }
        ile++;
    }
    sortowanie(tab, n);
    for (int i = 0; i < n; i++)
    {
        cout << tab[i] << " ";
    }
}

