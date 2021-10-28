#ifndef EMPLOYER_H
#define EMPLOYER_H
#include <string>
class Person;
using namespace std;

class Employer
{
private:
    string m_Name, m_Market;
public:
    Employer();
    Employer(string, string);
    bool hire(Person&, Position);
    string toString();
};

#endif // EMPLOYER_H
