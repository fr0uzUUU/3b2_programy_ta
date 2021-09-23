#include <iostream>
#include <vector>
#include <time.h>
#include <cstdlib>

using namespace std;

int main()
{
	srand(time(NULL));
	int licznik = 0;
	vector <int> wektor;
	int** tab2 = new int* [5];
	for (int i = 0; i < 5; i++)
	{
		tab2[i] = new int[5];
		for (int j = 0; j < 5; j++)
		{
			tab2[i][j] = rand() % 25 + 1;

			cout << tab2[i][j] << '\t';
		}
		cout << endl;
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			wektor.push_back(abs(tab2[i][j] - licznik++));
		}
	}
	

	for (int i = 0; i < 5; ++i)
	{
		delete[] tab2[i];
	}
	delete[] tab2;
}

