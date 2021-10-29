#include <header.h>
void SortowaniePrzezWstawianie(Pokoj tab[], int n) {

    int j = 1, k;

    while (j <= n - 1) {

        k = j;
        while (k >= 1) {
            if (tab[k - 1] > tab[k])
            {
                swap(tab[k - 1], tab[k]);
                k--;
            }
            else break;
        }
        j++;
    }
}
