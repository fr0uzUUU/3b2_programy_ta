#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <vector>
using namespace std;

int main()
{
    srand(time(NULL));
    int pivot = rand() % 100 + 1;
    int liczba;
    vector <int> wektor;

    while (liczba != pivot)
    {
        cin >> liczba;
        if (liczba > pivot)
        {
            wektor.push_back(liczba);
        }
        else if (liczba < pivot)
        {
            wektor.insert(wektor.begin(), liczba);
        }
        for (int i : wektor)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    cout << "Trafiles";
}
