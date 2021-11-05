#include <iostream>

using namespace std;

class Pracownik {
public:
    string imie, nazwisko;
    Pracownik(){
        imie = "jan";
    } //kon.domyslny zdefiniowany
    Pracownik(string pImie, string pNazwisko) {//kon.parametryczny
        imie = pImie;
        nazwisko = pNazwisko;
    } 
    string zwrocDane() {
        return imie + " " + nazwisko;
    }
};

class Nauczyciel : public Pracownik {
public:
    string przedmiot;
    Nauczyciel() {};
    Nauczyciel(string pImie, string pNazwisko, string pPrzedmiot)  {
        przedmiot = pPrzedmiot;
    }
    Nauczyciel(string pImie, string pNazwisko) : Pracownik(pImie, pNazwisko) {};
    string zwrocDane() {
        return imie + " " + nazwisko + " " + przedmiot;
    }
};

int main()
{
    Nauczyciel n1;
    cout << n1.zwrocDane() << endl; // tu wyświetli domyślną wartość tzn. zadeklarowaną w konstr.. domyślnym w klasie Pracownik
    n1.imie = "zzz";
    n1.nazwisko = "yyy";
    n1.przedmiot = "xxx";
    cout << n1.zwrocDane() << endl;

    Nauczyciel n2("janek", "wisniewski", "padl"); // za pomocą kons.. parametrycznego
    cout << n2.zwrocDane() << endl;

    Nauczyciel n3("aga", "juzniemieszka");  // za pomoca 29 lini
    cout << n3.zwrocDane() << endl;
}