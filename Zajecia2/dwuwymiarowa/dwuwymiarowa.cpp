#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;

int main()
{
	srand(time(NULL));
	int tab[10][10], temp[100], licznik = 0 ;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			tab[i][j] = rand() % 100 + 1;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			temp[licznik++] = tab[i][j];
		}
	}
	sort(temp, temp + 100);
	licznik = 0;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			tab[i][j] = temp[licznik++];
		}
	}
	for (int i = 0; i < 10; i++)
	{
		cout << "\n";
		for (int j = 0; j < 10; j++)
		{
			cout << tab[i][j] << " ";
		}
	}
}

