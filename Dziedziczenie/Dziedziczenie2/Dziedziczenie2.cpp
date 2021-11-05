#include <iostream>

using namespace std;

class Prostokat {
public:
    int a, b;
};

class Prostopadloscian : private Prostokat{
public:
    int h = 5;
    int objentosc() {
        return a * b * h;
    }
    void set(int pA, int pB) {
        a = pA;
        b = pB;
    }
};

int main()
{
    Prostopadloscian pp1;
    pp1.set(5, 3);
    cout << pp1.objentosc();
}