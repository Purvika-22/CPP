#ifndef LAPTOP_H
#define LAPTOP_H

#include <iostream>
#include <cstring>
#include "device.h"
class Laptop : public Device
{
    public:
    Laptop();
    Laptop(const char* brand,const char* color,int releaseYear,int price,float discount);
    ~Laptop();

    void switchon() override;
    void switchoff() override;
};

#endif // LAPTOP_H
