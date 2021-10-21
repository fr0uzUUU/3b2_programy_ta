#ifndef HONDUROTA_H
#define HONDUROTA_H


class Hondurota
{
public:
    Hondurota(double fuel, double odom, double capacity, double mpg);
    double addFuel(double gal);
    double getSpeed();
    double getTankCapacity();
    double getMPG();
    double drive(double speed, int minutes);
    double getFuel();
    double getOdometer();
    double highwayDrive(double distance, double speedLimit);
private:
    double m_Fuel;
    double m_Odometer;
    double m_TankCapacity;
    double m_MPG;
    double m_Speed;
    double m_Distance;
    double m_SpeedLimit;
};

#endif // HONDUROTA_H
