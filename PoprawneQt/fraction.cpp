#include <QString>
#include "fraction.h"

void Fraction::set(int nn, int nd){
    m_Numerator = nn;
    m_Denominator = nd;
}
double Fraction::toDouble() const{
    return 1.0 * m_Numerator / m_Denominator;
}
QString Fraction::toString() const{
    return QString("%1 / %2").arg(m_Numerator).arg(m_Denominator);
}
Fraction Fraction::add(const Fraction &other){
    Fraction f;
    f.m_Numerator = m_Numerator * other.m_Denominator + other.m_Numerator * m_Denominator;
    f.m_Denominator = m_Denominator * other.m_Denominator;
    return f;
}
Fraction Fraction::subtract(const Fraction &other){
    Fraction f;
    f.m_Numerator = m_Numerator * other.m_Denominator - other.m_Numerator * m_Denominator;
    f.m_Denominator = m_Denominator * other.m_Denominator;
    return f;
}
Fraction Fraction::multiply(const Fraction &other){
    Fraction f;
    f.m_Numerator = m_Numerator * other.m_Denominator;
    f.m_Denominator = m_Denominator * other.m_Denominator;
    return f;
}
Fraction Fraction::divide(const Fraction &other){
    Fraction f;
    f.m_Numerator = m_Numerator * other.m_Denominator;
    f.m_Denominator = m_Denominator * other.m_Denominator;
    return f;
}
