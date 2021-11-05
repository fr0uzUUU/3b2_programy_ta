#include <QCoreApplication>
#include <QTextStream>
#include <kartkowka.h>

int main()
{
    QTextStream cout(stdout);
    srand( time( NULL ) );
    int a, h, hh;
    Trojkat trojkat;
    a = rand()%9 + 1;
    h = rand()%9 + 1;
    trojkat.set(a, h);
    cout << trojkat.GetA() << trojkat.GetH() << trojkat.oblicz();
    Graniastoslup g1;
}
