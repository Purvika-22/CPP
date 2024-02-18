#ifndef BIKE_H
#define BIKE_H

#include <iostream>
#include "vehicle.h"
enum bike_category
{
    Commute,
    Sports,
    Offroader
};
class Bike : public Vehicle
{
public:
    Bike();
    Bike(int, const char *, double, double, double);
    // ~Bike();

    enum bike_category bc;

    void accept();
    void display();

    bike_category getBc() const { return bc; }
    void setBc(const bike_category &bc_) { bc = bc_; }
};

void search(Bike[], int, int);
void avg_bike(Bike[], int,enum bike_category);
void count_bike(Bike [],int ,enum bike_category );


#endif // BIKE_H
