#include <iostream>
using namespace std;

class Policjant {
public:
    string imie, nazwisko, stopien;
    void get() {
        cout << imie << " " << nazwisko << " " << stopien << endl;
    }
};

class Naczelnik : public Policjant {
public:
    Naczelnik() {
        cin >> imie >> nazwisko >> stopien >> wydział;
    }
    string wydział;
    void get() {
        cout << imie << " " << nazwisko << " " << stopien << " " << wydział << endl;
    }
};

int main()
{
    Policjant pies;
    pies.get();
    Naczelnik szycha;
    szycha.get();
}
