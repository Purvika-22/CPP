#include "vehicle.h"
// #include <iostream>
// #include "vehicle.h"
// #include <cstring>

// Vehicle ::Vehicle() : speed(100), mileage(20)
// {
//     strcpy(color, "Blue");
//     strcpy(brand, "Honda");
// }

// Vehicle::Vehicle(const char *clr, const char *brd, int s, int mlg)
//     : speed(s), mileage(mlg)
// {
//     strcpy(color, clr);
//     strcpy(brand, brd);
// }

// void Vehicle::drive()
// {
//     std::cout << "Vehicle is driving with the following details:\n"
//               << "Speed: " << getSpeed() << "\n"
//               << "Color: " << getColor() << "\n"
//               << "Brand: " << getBrand() << "\n"
//               << "Mileage: " << getMileage() << "\n";
// }

// void Vehicle::accept()
// {
//     std ::cout << "Enter vehicle color:\n";
//     std ::cin >> color;

//     std ::cout << "Enter vehicle speed:\n";
//     std ::cin >> speed;

//     std ::cout << "Enter vehicle brand:\n";
//     std ::cin >> brand;
// }

// void Vehicle::display()
// {
//     std ::cout << "Your vehicle color:"
//                << color;

//     std ::cout <<"\n"<< "Your vehicle speed:"
//                << speed;

//     std ::cout <<"\n"<< "Your vehicle brand:"
//                << brand;
// }

// Vehicle :: ~Vehicle() {
//     std::cout<<"Vehicle dtor called\n";
// }

Vehicle::Vehicle() : speed(100), millage(100)
{
    strcpy(brand, "Hero Honda");
    strcpy(color, "Black");
}

Vehicle::Vehicle(const char *brand_, const char *color_, int speed_, int millage_)
 : speed(speed_), millage(millage_)
{
    strcpy(brand, brand_);
    strcpy(color, color_);
}

Vehicle::~Vehicle()
{
    std :: cout << "\n ~Vehicle() called...";
}

void Vehicle::accept()
{
    std ::cout << "\n Enter Brand :";
    std ::cin >> brand;
    std ::cout << "\n Enter color :";
    std ::cin >> color;
    std ::cout << "\n Enter speed : ";
    std ::cin >> speed;
    std ::cout << "\n Enter millage : ";
    std ::cin >> millage;
}

void Vehicle::display() const
{
    std ::cout << "\n**Vehicle Details**"
               << "\n"
               << brand << "\n"
               << color << "\n"
               << speed << "\n"
               << millage << std ::endl;
}

void Vehicle::drive()
{
    std ::cout << "\nNormal vehicle driving";
}

std::ostream &operator<<(std::ostream &os, const Vehicle &v)
{
    os << "\n**Vehicle Details**"
       << "\n"
       << v.getBrand() << "\n"
       << v.getColor() << "\n"
       << v.getSpeed() << "\n"
       << v.getMillage() << std ::endl;

    return os;
}
