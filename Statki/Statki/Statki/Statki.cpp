#include <iostream>
#include <vector>
using namespace std;

int main()
{
	const int np = 7;
    int plansza1[np][np], x, y, z, id;
    vector <int> statki1[3];
	bool ok = false;

	for (int i = 0; i < np; i++)
	{
		for (int j = 0; j < np; j++)
		{
			plansza1[i][j] = 0;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		statki1[i].push_back(0);
	}
	while (ok == false)
	{
		ok = true;
		cout << "Podaj wspolrzedne 3-masztowca: ";
		cin >> x >> y >> z;
		if (z == 1) //poziomo
		{
			if (x > 3)
			{
				ok = false;
			}
			else
			{
				for (int i = x; i < x + 3; i++)
				{
					if (plansza1[i][y] != 0)
					{
						ok = false;
					}
				}
			}
		}
		else if (z == 0)
		{
			if (y > 3)
			{
				ok = false;
			}
			else
			{
				for (int i = y; i < y + 3; i++)
				{
					if (plansza1[x][i] != 0)
					{
						ok = false;
					}
				}
			}
		}
	}
	if (ok)
	{
		id = statki1[2][statki1->size() - 1];
		id++;
		if (z == 1) // poziomo
		{
			for (int i = x; i < x + 3; i++)
			{
				statki1[0].push_back(i); // x
				statki1[1].push_back(y); // y
				statki1[2].push_back(id); // numer statku
				plansza1[i][y] = 3;
			}
		}
		else // pionowo
		{
			for (int i = y; i <  y + 3; i++)
			{
				statki1[0].push_back(x); // x
				statki1[1].push_back(i); // y
				statki1[2].push_back(id); // numer statku
				plansza1[x][i] = 3;
			}
		}
	}
	for (int i = 0; i < np; i++)
	{
		for (int j = 0; j < np; j++)
		{
			cout << plansza1[j][i] << " ";
		}
		cout << "\n";
	}
	for (int i = 0; i < statki1->size(); i++)
	{
		cout << statki1[0][i] << " " << statki1[1][i] << " " << statki1[2][i] << endl;
	}
}
