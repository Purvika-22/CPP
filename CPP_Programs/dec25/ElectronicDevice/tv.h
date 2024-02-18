//brand protected

#ifndef TV_H
#define TV_H

#include<iostream>
#include "device.h"
class Tv : public Device
{
    public:
    Tv();
    Tv(const char* brand,const char* color,int releaseYear,int price,float discount);
    ~Tv();

    void display();
    void switchoff() override;
    void switchon() override;
};

#endif // TV_H
