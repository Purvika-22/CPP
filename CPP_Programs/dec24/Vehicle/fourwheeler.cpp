#include <iostream>
#include "fourwheeler.h"

FourWheeler::FourWheeler()
    : Vehicle()  // Initialize base class (Vehicle) members
{
    // Additional initialization for FourWheeler if needed
}

FourWheeler::FourWheeler(const char *clr, const char *brd,int s, int m)
    : Vehicle(clr, brd,s,m)  // Call base class constructor and initialize derived class members
{
    // Additional initialization for FourWheeler if needed
}

void FourWheeler::display() const
{
    Vehicle :: display();
}

void FourWheeler::drive()
{
    std :: cout <<"\n 4 wheeler driving...";
}

void FourWheeler::AC()
{
    std::cout << "AC is ON in the Four Wheeler.\n";
}

FourWheeler::~FourWheeler()
{
    std::cout<<"Fourwheeler dtor called\n";
}


