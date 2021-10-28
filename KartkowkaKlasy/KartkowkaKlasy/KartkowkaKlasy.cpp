#include <iostream>
#include <time.h>
using namespace std;

class Pokoj {
private:
    int a, b, p;
    string kolor;
public:
    Pokoj();
    Pokoj(int, int);
    int pole();
    void PobierzBoki(int&, int&, int&);
};

int main()
{
    srand(time(NULL));
    int a, b, suma = 0;
    Pokoj* pokoje = new Pokoj[10];

    for (int i = 0; i < 10; i++)
    {
        a = rand() % 9;
        b = rand() % 9;
        pokoje[i] = Pokoj(a, b);
        //cout << a << " " << b << endl;
    }

    for (int i = 0; i < 10; i++)
    {
        suma += pokoje[i].pole();
    }

    //cout << suma;

    delete[] pokoje;
    
}

Pokoj::Pokoj()
{
    kolor = "zielony";
}

Pokoj::Pokoj(int pA, int pB) 
{
    a = pA;
    b = pB;
}

int Pokoj::pole()
{
    int p;
    p = a * b;
    return p;
}

void Pokoj::PobierzBoki(int& pa, int& pb, int& pp)
{
    pa = a;
    pb = b;
    pp = p;
}
