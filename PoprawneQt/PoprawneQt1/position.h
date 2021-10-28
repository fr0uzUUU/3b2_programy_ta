#ifndef POSITION_H
#define POSITION_H
#include <string>
using namespace std;

class Position
{
private:
    string m_Name, m_Description;
public:
    Position();
    Position(string, string);
    string toString();
};

#endif // POSITION_H
