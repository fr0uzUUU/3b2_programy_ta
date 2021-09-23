#include <iostream>
#include <time.h>
#include <algorithm>
#include <stdlib.h>
using namespace std;

int main()
{
	int tab[5], i = 0, n = 5, min, p;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		tab[i] = rand() % n;
	}

	while (i != n - 1)
	{
		cout << " * \n";
		min = n;
		for (int j = i; j < n; j++)
		{
			if (tab[j] < min)
			{
				min = tab[j];
				p = j;
			}
		}
		swap(tab[i], tab[p]);
		i++;
	}
	for (int i = 0; i < n; i++)
	{
		cout << tab[i] << " ";
	}
}
