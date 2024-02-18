#include <iostream>
#include "vehicle.h"

Vehicle::Vehicle()
{
    strcpy(Vehicle_Brand, "Brand of vehicle");
}

Vehicle::Vehicle(int c_num, const char *brand_, double ex_price_, double tax_, double insurance_amt_)
    : chassis_num(c_num), Ex_Showroom_price(ex_price_), tax(tax_), insurance_amt(insurance_amt_)
{
    strcpy(Vehicle_Brand, brand_);
}

void Vehicle::accept()
{
    std::cout << "\n**Enter Vehicle details**";
    std::cout << "\nEnter Chassis Number :";
    std::cin >> chassis_num;
    std::cout << "\nEnter Vehicle Brand :";
    std::cin >> Vehicle_Brand;
    std::cout << "\nEnter Ex-Showroom price :";
    std::cin >> Ex_Showroom_price;
    std::cout << "\nEnter Tax :";
    std::cin >> tax;
    std::cout << "\nEnter insurrance amount :";
    std::cin >> insurance_amt;
}

void Vehicle::display()
{
    std::cout << "\n Chassis Number " << chassis_num;
    std::cout << "\n Vehicle Brand " << Vehicle_Brand;
    std::cout << "\nEx-Showroom price " << Ex_Showroom_price;
    std::cout << "\n Tax " << tax;
    std::cout << "\n Insurrance amount " << insurance_amt;
}
