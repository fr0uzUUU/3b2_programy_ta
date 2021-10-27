#ifndef FRACTION_H
#define FRACTION_H

#include <QString>
class Fraction{
public:
    void set(int, int);
    double toDouble() const;
    QString toString() const;
    Fraction add(const Fraction& other);
    Fraction subtract(const Fraction& other);
    Fraction multiply(const Fraction& other);
    Fraction divide(const Fraction& other);
private:
    int m_Numerator;
    int m_Denominator;
};

#endif
