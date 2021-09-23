#include <iostream>
#include <time.h>
#include <algorithm>
#include <stdlib.h>
using namespace std;

int main()
{
	int tab[20], i = 0, n = 20;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		tab[i] = rand() % n;
	}
	while (i != n - 1)
	{
		cout << " * \n";
		if (tab[i] > tab[i + 1])
		{
			swap(tab[i], tab[i + 1]);
			i = 0;
		}
		else
		{
			i++;
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << tab[i] << " ";
	}
}

