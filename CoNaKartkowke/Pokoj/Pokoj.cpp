#include <iostream>
using namespace std;

class Pokoj {
private:
    int a, b;
public:
    Pokoj();
    Pokoj(int, int);
    int pole();
};
int main()
{
    int ile, a, b, suma = 0;
    cin >> ile;
    Pokoj* pokoje = new Pokoj[ile];

    for (int i = 0; i < ile; i++)
    {
        cin >> a >> b;
        if (a == 0) pokoje[i] = Pokoj();
        else pokoje[i] = Pokoj(a, b);
    }

    for (int i = 0; i < ile; i++)
    {
        suma += pokoje[i].pole();
    }

    cout << suma;

    delete[] pokoje;
}

Pokoj::Pokoj()
{
    a = 3;
    b = 3;
}

Pokoj::Pokoj(int pA, int pB)
{
    a = pA;
    b = pB;
}

int Pokoj::pole()
{
    return a * b;
}
