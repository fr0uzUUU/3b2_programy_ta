#include <iostream>

using namespace std;

class Sortowanie {
public:
    void posortowane();
    /********************************************************
    * nazwa funkcji: <posortowane>
    * parametry wejściowe: <brak>
    * wartość zwracana: <brak>
    * autor: <Michał Ogórek>
    * ****************************************************/
    int tablica[10];
    int zwrocMax();
    /********************************************************
    * nazwa funkcji: <zwrocMax>
    * parametry wejściowe: <tablica>
    * wartość zwracana: <max>
    * autor: <Michał Ogórek>
    * ****************************************************/
};

int main()
{
    Sortowanie sortowanie;
    cout << "podaj 10 liczb to tablicy\n";
    for (int i = 0; i < 10; i++)
    {
        cin >> sortowanie.tablica[i];
    }
    cout << "Maksymalna wartosc to: " << sortowanie.zwrocMax() << endl;
}

void Sortowanie::posortowane()
{
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            if (tablica[i] > tablica[j])
                swap(tablica[i], tablica[j]);
}

int Sortowanie::zwrocMax()
{
    int max = 0;
    for (int i = 0; i < 10; i++)
    {
        if (tablica[i] >= max) {
            max = tablica[i];
        }
    }
    return max;
}