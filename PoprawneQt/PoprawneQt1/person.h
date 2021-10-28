#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <employer.h>
#include <position.h>
class Position;
class Employer;
using namespace std;

class Person
{
private:
    string m_Name;
    bool m_Employed;
    Position m_Positon;
    Employer m_empolyer;
public:
    Person();
    Person(string);
    string toString();
    void setPosition(Employer, Position);
    Position getPosition();
    Position getEmployer();
};

#endif // PERSON_H
