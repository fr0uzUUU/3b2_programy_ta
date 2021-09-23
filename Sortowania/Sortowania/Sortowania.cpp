#include <iostream>
#include <time.h>
#include <algorithm>
#include <stdlib.h>
using namespace std;

int main()
{
    srand(time(NULL));
    int tab[5], licznik, n = 5, powto = 1;
	bool posortowane = false;
	for (int i = 0; i < n; i++)
	{
		tab[i] = rand() % 10;
	}
	while (posortowane == false)
	{
		cout << powto << endl;
		licznik = 0;
		for (int i = 0; i < n - 1; i++)
		{
			if (tab[i] <= tab[i + 1])
			{
				licznik++;
			}
		}
		if (licznik == n - 1)
		{
			posortowane = true;
		}
		if (posortowane == false)
		{
			for (int i = 0; i < n - 1; i++)
			{
				swap(tab[rand() % n], tab[rand() % n]);
			}
		}
		powto++;
	}
	for (int i = 0; i < n; i++)
	{
		cout << tab[i] << " ";
	}
}

