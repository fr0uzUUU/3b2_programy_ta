#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

void sortowanie_babelkowe(int tab[][2], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i; j++)
		{
			if (tab[j - 1][1] > tab[j][1]) {
				swap(tab[j - 1][0], tab[j][0]);
				swap(tab[j - 1][1], tab[j][1]);
			}
		}
	}
}

int main()
{
    srand(time(NULL));
    int tab[6][2];
	for (int i = 0; i < 6; i++)
	{
		tab[i][0] = i;
		tab[i][1] = rand() % 9;
		cout << tab[i][0] << " " << tab[i][1] << endl;
	} 
	sortowanie_babelkowe(tab, 6);
	for (int i = 0; i < 6; i++)
	{
		cout << tab[i][0] << " " << tab[i][1] << endl;
	}
}
