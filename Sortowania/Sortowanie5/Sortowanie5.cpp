//sortowanie shella 
#include<iostream>
using namespace std;
void sortowanie(int n, int tab[]) {
    int j = 1, k;
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
}
int main()
{
    const int n = 16;
    int tab[n];
    int ttab[n/2];
    int j;
    int k;
    int h;
    int ile;
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        tab[i] = rand() % 100;
    }
    for (h = n/2; h > 1; h-- )
    {
        for (int i = 0; i < h; i++)
        {
            j = i;
            k = 0;
            ile = 0;
            while (j < n)
            {
                ttab[k++] = tab[j];
                ile++;
                j += h;
            }
            
            sortowanie(ile, ttab);
            while (j >= 0)
            {
                tab[j - h] = ttab[--k];
                j -= h;
            }
        }
    }
    sortowanie(n, tab);
    
    for (int i = 0; i < n; i++)
    {
        cout << tab[i] << " ";
    }
 

}