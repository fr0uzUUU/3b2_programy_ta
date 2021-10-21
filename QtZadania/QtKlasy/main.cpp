#include <QTextStream>
#include "QtKlasy.h"
#include <iostream>
using namespace std

void display(Thing t, int n){
    int i;
    for (i = 0; i < n; i++)
        t.show();
}

int main(){
    QTextStream cout(stdout);
    Thing t1, t2;
    t1.set(23, 'H');
    t2.set(1234, 'w');
    t1.increment();
    cout <<t1.m_Number;
    display(t1, 3);
    cout<<i<<endl;
    t2.show();
    return 0;
}
