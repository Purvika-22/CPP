#include "washingmachine.h"

WashingMachine::WashingMachine() : Device()
{
}

WashingMachine::WashingMachine(const char *brand, const char *color, int releaseYear, int price, float discount)
    : Device(brand, color, releaseYear, price, discount)
{
}

WashingMachine::~WashingMachine()
{
    std ::cout << "\n~WashingMachine() called:";
}

void WashingMachine::switchon()
{
    std ::cout << " \nWashing machine switched on";
}

void WashingMachine::switchoff()
{
    std ::cout << " \nWashing machine switched off";
}

void WashingMachine::display()
{
    std::cout << "Washing MAchine  info:\n";
    std::cout << "Brand: " << getBrand() << "\n"
              << "Color: " << getColor() << "\n"
              << "Release Year: " << getReleaseYear() << "\n"
              << "Price: " << getPrice() << "\n"
              << "Discount: " << getDiscount() << "\n";
}
void WashingMachine::washclothes()
{
    std ::cout << "\nSpl child class function is to wash clothes";
}
