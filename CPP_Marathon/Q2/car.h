#ifndef CAR_H
#define CAR_H

#include <iostream>
#include "vehicle.h"

enum car_category
{
    SUV ,
    HatchBank,
    Sedan
};

class Car : public Vehicle
{

public:
    Car();
    Car(int, const char *, double, double, double);
    // ~Car();

    enum car_category cc;

    void accept();
    void display();

    enum car_category getCc() const { return cc; }
    void setCc(const enum car_category &cc_) { cc = cc_; }

    
};
void search(Car[], int, int);
void count_car(Car[], int,enum car_category);
void avg_car(Car[],int,enum car_category);

#endif // CAR_H
