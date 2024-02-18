#include "mobile.h"

Mobile::Mobile() : Device()
{
}

Mobile::Mobile(const char *model_, const char *brand, const char *color, int releaseYear, int price, float discount)
    : Device(brand, color, releaseYear, price, discount)
{
    setModel(model_);
}

Mobile::~Mobile()
{
    delete[] model;
}

void Mobile::display()
{
    std::cout << "Mobile info:\n";
    std::cout << "Brand: " << getBrand() << "\n"
              << "Model: " << getModel() << "\n"
              << "Color: " << getColor() << "\n"
              << "Release Year: " << getReleaseYear() << "\n"
              << "Price: $" << getPrice() << "\n"
              << "Discount: " << getDiscount() << " %"
              << "\n";
}



void Mobile::switchon()
{
    std ::cout << "\nYour mobile is switched on";
}

void Mobile::switchoff()
{
    std ::cout << "\n Your mobile is switched off";
}

// std::ostream &operator<<(std::ostream &os, const Mobile &rhs) 
// {
//     os << static_cast<const Device &>(rhs)
//        << " model: " << rhs.model;
//     return os;
// }
