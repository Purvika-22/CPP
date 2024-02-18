#ifndef FLIGHT_H
#define FLIGHT_H

#include <iostream>

class Flight
{
    static int id;
    int flightObjects;
    long int flightNum;
    float distance;
    float fuel;
    float fare;

public:

    Flight();
    Flight(int, long int, float, float, float);
    Flight(const Flight &f);


    // void accept();
    void display() const;
    friend std::istream &operator>>(std::istream &os,  Flight &f);
    friend std :: ostream &operator<<(std::ostream &os,const Flight &f);

    int getFlightObjects() const { return flightObjects; }
    void setFlightObjects(int flightObjects_) { flightObjects = flightObjects_; }

    long int getFlightNum() const { return flightNum; }
    void setFlightNum(long int flightNum_) { flightNum = flightNum_; }

    float getDistance() const { return distance; }
    void setDistance(float distance_) { distance = distance_; }

    float getFuel() const { return fuel; }
    void setFuel(float fuel_) { fuel = fuel_; }

    float getFare() const { return fare; }
    void setFare(float fare_) { fare = fare_; }


};
Flight search(Flight[],int n,int element);

#endif // FLIGHT_H
