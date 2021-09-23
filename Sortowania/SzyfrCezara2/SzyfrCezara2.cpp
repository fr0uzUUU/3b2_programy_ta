#include <iostream>
#include <algorithm>

using namespace std;

void szyfruj(string napis, int k)
{
	if (k > 26)k = k % 26;

	for (int i = 0; i < napis.length(); i++)
	{
		if (napis[i] == ' ')continue;
		napis[i] += k;
		if (napis[i] > 'Z') napis[i] -= 26;
	}
}

int main()
{
	string napis;
	cout << "podaj slowo: ";
	cin >> napis;
	transform(napis.begin(), napis.end(), napis.begin(), ::toupper);
	srand(time(NULL));
	int klucz = rand() % 100;
	cout << "Twoj klucz: " << klucz << endl;
	szyfruj(napis, klucz);
	cout << napis << endl;
}