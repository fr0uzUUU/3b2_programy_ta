#include <iostream>
using namespace std;

class Info {
public:
    virtual double pole(int, int) = 0;
    virtual double obwod(int, int) = 0;
};

class Figura {
private:
    int a, h;
public:
    virtual void set() {
        cout << "Podaj a: \n";
        cin >> a;
        cout << "Podaj wysokosc: \n";
        cin >> h;
    }
    virtual int getA() {
        return a;
    }
    virtual int getH() {
        return h;
    }
};

class Prostokat : public Info, public Figura{
public:
    double pole(int a, int h){
        return a * h;
    }
    double obwod(int a, int h) {
        return 2 * a + 2 * h;
    }
};

class Romb : public Info, public Figura {
public:
    double pole(int a, int h) {
        cout << "ROMB: \n";
        return a * h;
    }
    double obwod(int a, int h) {
        return 4 * a;
    }
};

class Trojkat : public Info, public Figura {
public:
    double pole(int a, int h) {
        return a * h * 0.5;
    }
    double obwod(int a, int h) {
        return a + h + sqrt(pow(a, 2) + pow(h, 2));
    }
};

int main()
{
    int x;
    cout << "1. Kwadrat\n2. Prostokat\n3. Romb\n4. Trojkat\n";
    cin >> x;
    
    switch (x){
    case 1: {
        Prostokat kwadrat;
        kwadrat.set();
        cout << "Pole: " << kwadrat.pole(kwadrat.getA(), kwadrat.getH()) << endl;
        cout << "Obwod: " << kwadrat.obwod(kwadrat.getA(), kwadrat.getH()) << endl;
        break;
    }
    case 2:{
        Prostokat prostokat;
        prostokat.set();
        cout << "Pole: " << prostokat.pole(prostokat.getA(), prostokat.getH()) << endl;
        cout << "Obwod: " << prostokat.obwod(prostokat.getA(), prostokat.getH()) << endl;
        break; 
    }    
    case 3: {
        Romb romb;
        romb.set();
        cout << "Pole: " << romb.pole(romb.getA(), romb.getH()) << endl;
        cout << "Obwod: " << romb.obwod(romb.getA(), romb.getH()) << endl;
        break;
    }
    case 4: {
        Trojkat trojkat;
        trojkat.set();
        cout << "Pole: " << trojkat.pole(trojkat.getA(), trojkat.getH()) << endl;
        cout << "Obwod: " << trojkat.obwod(trojkat.getA(), trojkat.getH()) << endl;
        break;
    }
    }
}