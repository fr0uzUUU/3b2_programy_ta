#include <iostream>

using namespace std;

class Samochod {
private:
    string marka{ "" };
    string model{ "" };
public:
    void setMarka(string pMarka) {
        marka = pMarka;
    }
    void setModel(string pModel) {
        model = pModel;
    }
    string getMarka() {
        return marka;
    }
    string getModel() {
        return model;
    }
    string zwrocDane() {
        return marka + " " + model;
    }
};

class Ciezarowe : public Samochod {
public:

private:

};

class Autobusy : public Samochod {
public:

private:

};

int main()
{
    
}