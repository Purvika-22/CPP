#ifndef WASHINGMACHINE_H
#define WASHINGMACHINE_H

#include <iostream>
#include "device.h"

class WashingMachine : public Device
{
public:
    WashingMachine();
    WashingMachine(const char *brand, const char *color, int releaseYear, int price, float discount);
    ~WashingMachine();
    void switchon() override;
    void switchoff() override;
    void display();
    void washclothes();
};

#endif // WASHINGMACHINE_H
