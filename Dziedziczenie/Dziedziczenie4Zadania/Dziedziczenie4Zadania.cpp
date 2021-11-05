#include <iostream>

using namespace std;

class Komputer {
private:
    string marka, model;
public:
    Komputer() {};
    Komputer(string pMarka, string pModel) {
        marka = pMarka;
        model = pModel;
    };
    void SetMarka(string pMarka) {
        marka = pMarka;
    }
    void SetModel(string pModel) {
        model = pModel;
    }
    string GetMarka(){
        return marka;
    }
    string GetModel(){
        return model;
    }
    void zwrocDane() {
        cout << GetMarka() << GetModel() << endl;
    }
};

class PC: Komputer {
private:
    string obudowa;
public:
    PC() {};
    PC(string pObudowa) {
        obudowa = pObudowa;
    };
    void SetObudowa(string pObudowa) {
        obudowa = pObudowa;
    }
    string GetObudowa() {
        return obudowa;
    }
    void zwrocDane() {
        cout << GetObudowa() << endl;
    }
};

class Laptop : Komputer {
private:
    string przekatna, kolor;
public:
    Laptop() {};
    Laptop(string pPrzekatna, string pKolor) {
        przekatna = pPrzekatna;
        kolor = pKolor;
    };
    void SetPrzekatna(string pPrzekatna) {
        przekatna = pPrzekatna;
    }
    void SetKolor(string pKolor) {
        kolor = pKolor;
    }
    string GetPrzekatna() {
        return przekatna;
    }
    string GetKolor() {
        return kolor;
    }
    void zwrocDane() {
        cout << GetPrzekatna() << GetKolor() << endl;
    }
};

int main()
{
    PC pc1;
    pc1.SetObudowa("slim");
    Komputer k1;
    k1.SetMarka("X-Kom");
    k1.SetModel("Slaby");
    Laptop l1;
    l1.SetPrzekatna("17cali");
    l1.SetKolor("czarny");
    cout << k1.zwrocDane() << endl;
    cout << pc1.zwrocDane() << endl;
    cout << l1.zwrocDane() << endl;

}