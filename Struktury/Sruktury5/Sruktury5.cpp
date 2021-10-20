#include <iostream>
using namespace std;

struct Data
{
    int dd, mm, rr;
};

class Pracownik{
public:
    int id;
    string imie, nazwisko;
    Data data_urodzenia;
    //Pracownik() {
    //    id = -1;
    //    imie = "aa";
    //    nazwisko = "dsa";
    //    data_urodzenia = { 31,12,1999 };
    //}
    //Pracownik(int, string, string, Data);  //prototyp
    //Pracownik(int, Data);  
    void wyswietlDane();
};

//Pracownik::Pracownik(int pId, string pImie, string pNazwisko, Data pDataUrodzenia) {   // definicja prototypu
//    id = pId;
//    imie = pImie;
//    nazwisko = pNazwisko;
//    data_urodzenia = pDataUrodzenia;
//}
//
//Pracownik::Pracownik(int pId, Data pDataUrodzenia) {
//    id = pId;
//    data_urodzenia = pDataUrodzenia;
//}

void Pracownik::wyswietlDane() {
    cout << id << " " << imie << " " << nazwisko << " " << endl
        << data_urodzenia.dd << "." << data_urodzenia.mm << "." << data_urodzenia.rr << endl;
}

int main()
{
    Pracownik pracownik1{ 1,"jan", "kowal", {10,7,2000} };
    pracownik1.wyswietlDane();

    /*Pracownik pracownik1(2, "Adam", "Kowalski", { 17,06,2003 });
    pracownik1.wyswietlDane();

    Pracownik pracownik2(3, { 10,10,2003 });
    pracownik1.wyswietlDane();

    Pracownik pracownik3( "Janek", "Wiśnia", { 9,04,2002 });
    pracownik1.wyswietlDane();

    Pracownik pracownik4 = Pracownik();
    pracownik4.wyswietlDane();*/

    /*Pracownik pracownik1;
    pracownik1.wyswietlDane();

    Pracownik pracownik3;
    pracownik3.id = 1;
    pracownik3.imie = "Jan";
    pracownik3.imie = "Kowalski";
    pracownik3.wyswietlDane();*/
}