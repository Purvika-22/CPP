#include "device.h"
#include "laptop.h"
#include "mobile.h"
#include "tv.h"
#include "washingmachine.h"
#include <iostream>

int main()
{
    Device d;
    d.display();

    Device *d1 = new Laptop();//for child class functions ->base class object reference to derived class
    d1->switchoff();

    Device *d2 = new WashingMachine();
    WashingMachine *wd = dynamic_cast<WashingMachine *>(d2);//child special functions
    if (wd != nullptr)
    {
        wd -> washclothes();
        wd -> switchoff();
    }
    else
    {
        std ::cout << "\n No such program found";
    }
    Mobile mb("Iphone pro 15","Apple","White",2023,66000,10);
    mb.display();

    Device *d4 = new Tv("Samsung","black",2019,30000,34);
    d4 -> switchoff();
    
    delete d1;
    delete d2;
    delete d4;

    return 0;
}