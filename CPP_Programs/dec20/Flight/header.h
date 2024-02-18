#include <iostream>
#include <cstring>

class Flight
{
private:
    static int count;

public:
    int flightObjects;
    long int flightNumber;
    float distance;
    float fuel;
    float fare;

    // Constructor with default parameter values
    Flight(long int flightNumber = 0, float distance = 0, float fare = 0, int flightObjects = 0);

    //Function to calcu;ate fue; quantity based on distance
    void calculateFuelQuantity();

    void feedInfo();

    void showInfo();

    long int getFlightNumber() const { return flightNumber; }
    
    float getFuel() const { return fuel; }
    void setFuel(float fuel_) { fuel = fuel_; }
   // void setFlightNumber(long int flightNumber_) { flightNumber = flightNumber_; }

    
};