#include "laptop.h"

Laptop::Laptop() : Device()
{
}

Laptop::Laptop(const char *brand, const char *color, int releaseYear, int price, float discount)
    : Device(brand, color, releaseYear, price, discount)
{
}

Laptop::~Laptop()
{
    std ::cout << "\n~laptop() is called";
}

void Laptop::switchon()
{
    std ::cout << "\nyour laptop is switched on";
}

void Laptop::switchoff()
{
    std ::cout << "\nyour laptop is switched off";
}
