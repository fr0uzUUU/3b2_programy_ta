#ifndef MAIN_H
#define MAIN_H
#include <iostream>
using namespace std;
#include <QString>

class Person{
public:
    void getPosition();
    void getEmployer();
private:
    string m_Name;
    bool m_Employed;
    Position m_position;
    Employer m_employer;
}
class Position{
public:
}

#endif // MAIN_H
