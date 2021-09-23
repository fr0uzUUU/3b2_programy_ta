#include <iostream>
#include <time.h>
#include <algorithm>
#include <stdlib.h>
using namespace std;

void sortowanie1(){
	int tab[5];
	int licznik;
	int n = 5;
	int powto = 1;
	int i;
	bool posortowane = false;
	srand(time(NULL));

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
}

void sortownie2() {
	int tab[5];
	int i = 0;
	int n = 5;
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

void sortownie3() {
	int tab[5];
	int i = 0;
	int n = 5;
	int min;
	int p;
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
}

void sortownie4() {
	int tab[5];
	int i = 0;
	int n = 5;
	int j = 1;
	int k;
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
	int tab[5], licznik, n = 5, powto = 1;
	bool posortowane = false;
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        tab[i] = rand() % 100;
    }
	cout << "Sortwanie :\n";
	void sortowanie1();
	cout << "Sortwanie :\n";
	void sortowanie2();
	cout << "Sortwanie :\n";
	void sortowanie3();
	cout << "Sortwanie :\n";
	void sortowanie4();
}
