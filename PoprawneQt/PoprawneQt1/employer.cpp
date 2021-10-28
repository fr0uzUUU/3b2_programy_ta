#include "employer.h"
Employer::Employer(){}
Employer::Employer(string name, string market)
{
    m_Name = name;
    m_Market = market;
}

bool Employer::hire(Person& newHire, Position pos)
{
    newHire.setPosition(*this, pos);
    return true;
}
string Employer::toString()
{
    return m_Name + " " + m_Market;
}
