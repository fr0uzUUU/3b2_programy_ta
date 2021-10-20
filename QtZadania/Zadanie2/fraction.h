#ifndef FRACTION_H
#define FRACTION_H
#include <iostream>

#include <QString>

class Fraction {
public:
    void set(int numerator, int denominator);
    double toDouble() const;
    QString toString() const;
private:
    int m_Numerator;
    int m_Denominator;
};

#endif // FRACTION_H
