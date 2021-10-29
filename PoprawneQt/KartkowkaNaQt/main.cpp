#include <header.h>
#include <QString>
#include <ctime>
#include <QTextStream>

using namespace std;

int main()
{
    QTextStream cout(stdout);
    srand(time(NULL));
    int a, b, pole, suma = 0;
    QString kolor;
    Pokoj* pokoje = new Pokoj[10];

    for(int i=0; i<10; i++){
        a = rand()%9 + 1;
        b = rand()%9 + 1;
        pokoje[i] = Pokoj(a, b);
        pokoje[i].oblicz();
        pokoje[i].pobierz(a, b, pole, kolor);
        cout << pokoje[i].toString();
        suma += pole;
    }
    Pokoj sort;
    sort.sortowanie(pokoje,10);

    Pokoj kopia(pokoje[9]);

    delete[] pokoje;
}
