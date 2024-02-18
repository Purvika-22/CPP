#include <iostream>
#include "twowheeler.h"

// TwoWheeler::TwoWheeler()
//     : Vehicle() // Initialize base class (Vehicle) members
// {
// }

// TwoWheeler::TwoWheeler(const char *clr, const char *brd, int s, int m)
//     : Vehicle(clr, brd, s, m)
// // Call base class constructor and initialize derived class members
// {
// }

// void TwoWheeler::drive() const
// {
//     std::cout << "Two wheeler is driving with the following details:\n"
//               << "Speed: " << speed << "\n"
//               << "Color: " << getColor() << "\n"
//               << "Brand: " << getBrand() << "\n"
//               << "Mileage: " << getMileage() << "\n";
// }

// TwoWheeler::~TwoWheeler()
// {
//     std::cout<<"Twowheeler dtor called\n";
// }

TwoWheeler::TwoWheeler()
:Vehicle()
{
}

TwoWheeler::TwoWheeler(const char *brand_, const char *clr_, int s, int m , std::string name):
Vehicle(brand_,clr_,s,m) , name(name)
{
}

TwoWheeler::~TwoWheeler()
{
    std :: cout << "~Twowheeler() called...";
}

void TwoWheeler::display() const
{
    Vehicle :: display();
}

void TwoWheeler::drive()
{
    std :: cout <<"\n 2 wheeler driving";
}
