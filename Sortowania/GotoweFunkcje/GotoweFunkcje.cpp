#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

// QUICKSORT sami w domu
void QuickSort(int tab[], int l, int p);
void SortowanieShella(int tab[], int n);
void SortowaniePrzezWstawianie(int tab[], int n);
void SortowaniePrzezWybor(int tab[], int n);
void SortowanieNaiwne(int tab[], int n);
void BogoSort(int tab[], int n);
bool CzyPosortowane(int tab[], int n);

void BubbleSort(int tab[], int n) {
	do {
		for (int i = 0; i < n-1; i++)
		{
			if (tab[i] > tab[i+1])
			{
				swap(tab[i], tab[i + 1]);
			}
		}
		n--;
	} while (n > 1);
}

int main() {
	//Do losowania
	srand(time(NULL));
	//Ilosc miejsc w tablicy
	const int n = 10;
	//Tworzenie tablicy
	int tab[n];
	for (int i = 0; i < n; i++)
	{
		tab[i] = rand() % 1000;
		//Wypisywanie tablicy
		if (i < n - 1) {
			cout << tab[i] << " : ";
		}
		else {
			cout << tab[i];
		}
	}
	cout << endl;
	cout << endl;

	//BogoSort(tab, n);	//Zwariowane
	//SortowanieNaiwne(tab, n);
	//SortowaniePrzezWybor(tab, n);
	SortowaniePrzezWstawianie(tab, n);
	//SortowanieShella(tab, n);
	//QuickSort(tab, 0, n-1);
	//BubbleSort(tab, n);

	//Wypisywanie tablicy
	cout << endl;
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		if (i < n - 1) {
			cout << tab[i] << " : ";
		}
		else {
			cout << tab[i];
		}
	}
	cout << "\n\nCzy posortowane: " << CzyPosortowane(tab, n);
	return 0;
}

void QuickSort(int tab[], int l, int p) {
	if (p <= l)	return;

	int i = l - 1;
	int j = p + 1;

	int pivot = tab[(l+p) / 2];
	bool czyPetla = true;
	while (czyPetla)
	{

		while (pivot > tab[++i]);


		while (pivot < tab[--j]);


		if (i <= j)
			swap(tab[i], tab[j]);
		else
			czyPetla = false;
	}

	if (j > l)
		QuickSort(tab, l, j);
	if (i < p)
		QuickSort(tab, i, p);
}

void SortowanieShella(int tab[], int n) {
	int j, k, ile, tempTab[1000];
	for (int h = n / 2; h > 1; h--)
	{
		for (int i = 0; i < h; i++)
		{
			j = i;
			k = 0;
			ile = 0;
			while (j < n) {
				tempTab[k++] = tab[j];
				ile++;
				j += h;
			}

			SortowaniePrzezWstawianie(tempTab, ile);

			j = i;
			k = 0;
			while (j < n) {
				tab[j] = tempTab[k++];
				j += h;
			}
		}
	}
	SortowaniePrzezWstawianie(tab, n);
}

void SortowaniePrzezWstawianie(int tab[], int n) {

	int j = 1, k;
	while (j <= n-1) {
		k = j;
		while (k >= 1) {
			if (tab[k - 1] > tab[k])
			{
				swap(tab[k - 1], tab[k]);
				k--;
			}
			else break;
		}
		j++;
	}
}

void SortowaniePrzezWybor(int tab[], int n) {
	int index = 0;
	while (index != n) {
		int liczba = 0;
		int min = 1000;
		for (int i = index; i < n; i++)
		{
			if (tab[i] < min)
			{
				min = tab[i];
				liczba = i;
			}
		}
		swap(tab[index], tab[liczba]);
		index++;
	}
}

void SortowanieNaiwne(int tab[], int n) {
	int i = 0;
	while (i != n - 1) {
		if (tab[i] > tab[i + 1]) {
			swap(tab[i], tab[i + 1]);
			i = 0;
		}
		else {
			i++;
		}
	}
}

//	BogoSort() jest połączony z CzyPosortowane()
void BogoSort(int tab[], int n) {
	int licznik = 0;
	while (!CzyPosortowane(tab, n))
	{
		licznik++;
		for (int i = 0; i < n - 1; i++)
		{
			swap(tab[rand() % n], tab[rand() % n]);
		}
	}
	cout << endl << endl;
	for (int i = 0; i < n; i++)
	{
		if (i < n - 1) {
			cout << tab[i] << " : ";
		}
		else {
			cout << tab[i];
		}
	}
	cout << "\nUdalo sie za " << licznik << " razem";
}

bool CzyPosortowane(int tab[], int n) {
	for (int i = 0; i < n - 1; i++)
	{
		if (tab[i] <= tab[i + 1]) {}
		else
			return false;
	}
	return true;
}
