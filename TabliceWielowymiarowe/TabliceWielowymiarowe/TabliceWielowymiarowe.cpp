#include <iostream>
#include <vector>
#include <time.h>
#include <cstdlib>

using namespace std;

int main()
{
	srand(time(NULL));
	int odpowiednia = 0;
	int temp;
	vector <int> wektor = {};
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
	for (int j = 0; j < 5; j++)
	{
		odpowiednia++;
		for (int i = 0; i < 5; i++)
		{
			temp = abs(tab2[i][j] - odpowiednia);
			odpowiednia++;
			wektor.push_back(temp);
		}
	}
	
	for (int i = 0; i < wektor.size(); i++)
	{
		cout << wektor[temp] << ", ";
	}

	for (int i = 0; i < 5; ++i)
	{
		delete[] tab2[i];
	}
	delete[] tab2;
}

