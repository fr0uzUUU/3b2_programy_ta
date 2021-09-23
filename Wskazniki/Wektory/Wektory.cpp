#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /*vector <int> wektor = { 10,20,30,40,50 };

	wektor.insert(wektor.begin(), 0);
	cout << wektor[0] << " ";

	for (int i = 1; i < wektor.size(); i++)
	{
		cout << wektor[i] << " ";
	}
	
	wektor.push_back(60);
	cout << wektor[wektor.size() - 1] << " ";*/

	vector <int> wektor;
	int temp;
	cout << "Podaj liczby do wektora: \n";
	for (int i = 0; i < 5; i++)
	{
		cin >> temp;
		wektor.push_back(temp);
	}
	for (int i = 0; i < wektor.size(); i++)
	{
		cout << wektor[temp] << ", ";
	}
}
