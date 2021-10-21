#include "hondurota.h"
#include <QTextStream>
#include <iostream>
using namespace std;

Hondurota::Hondurota(double fuel, double odom, double capacity, double mpg)
{
    m_Speed = 0;
    m_Fuel = fuel;
    m_Odometer = odom;
    m_TankCapacity = capacity;
    m_MPG = mpg;
    //m_Distance = distance;
    //m_SpeedLimit = speedLimit;
}

double Hondurota::addFuel(double gal)
{
    m_Fuel += gal;
    return m_Fuel;
}

double Hondurota::getSpeed()
{
    return m_Speed;
}

double Hondurota::getTankCapacity()
{
    return m_TankCapacity;
}

double Hondurota::getMPG()
{
    return m_MPG;
}

double Hondurota::drive(double speed, int minutes)
{
    if(m_Fuel <= 0){
        speed = 0;
    }else{
        double ileKm = speed*(minutes/60);
        m_Fuel -= (ileKm/100)*m_MPG;
    }
    m_Speed = speed;
    return m_Fuel;
}

double Hondurota::getFuel()
{
    return m_Fuel;
}

double Hondurota::getOdometer()
{
    return m_Odometer;
}
double Hondurota::highwayDrive(double distance, double speedLimit)
{
    return m_SpeedLimit;
}
