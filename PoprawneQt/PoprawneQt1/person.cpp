#include "person.h"
Person::Person()
{
    m_Employed = false;
}
Person::Person(string name)
{
    m_Name = name;
    m_Employed = false;
}

string Person::toString()
{
    return m_Name + " " + m_position.toString() + " " + m_employer.toString();
}

void Person::setPosition(Employer NewC, Position NewP)
{
    m_position = NewP;
    m_employer = NewC;
    m_Employed = true;
}

Position Person::getPosition()
{
    return m_positon;
}
Employer Person::getEmployer()
{

}
