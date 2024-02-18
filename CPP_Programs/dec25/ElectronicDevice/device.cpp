#include "device.h"
#include <cstring>

Device::Device() : price(10000), discount(10), releaseYear(1992)
{
    strcpy(brand, "Redmi");
    strcpy(color, "Black");
}

Device::Device(const char *brand_, const char *color_, int ry, int p, float d)
: releaseYear(ry), price(p), discount(d)
{
    strcpy(brand, brand_);
    strcpy(color, color_);
}

Device::~Device()
{
    std ::cout << "\n~Device() called...";
}

void Device::display()
{
    std::cout << "Device info:\n";
    std::cout << "Brand: " << brand << "\n"
              << "Color: " << color << "\n"
              << "Release Year: " << releaseYear << "\n"
              << "Price: $" << price << "\n"
              << "Discount: " << discount<<"%" << "\n";
}

void Device::switchon()
{
    std :: cout << "\nYour device is Switched ON";
}

void Device::switchoff()
{
    std ::cout << "\nYour device is Switched OFF";
}

std::ostream &operator<<(std::ostream &os, const Device &rhs) {
    os << "brand: " << rhs.brand
       << " color: " << rhs.color
       << " releaseYear: " << rhs.releaseYear
       << " price: " << rhs.price
       << " discount: " << rhs.discount;
    return os;
}
