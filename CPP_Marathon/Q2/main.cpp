#include <iostream>
#include "bike.h"
#include "car.h"
#include "vehicle.h"
int main()
{
    int size = 2;
    Car *c = new Car[size];
    for (int i = 0; i < size; i++)
    {
        c[i].accept();
    }
    int chasisNumber_;
    std::cout << "\nEnter the chasis number for car to search: ";
    std::cin >> chasisNumber_;
    search(c, size, chasisNumber_);
    count_car(c, size, HatchBank);
    avg_car(c, size, HatchBank);


    Bike *b = new Bike[size];
    for (int i = 0; i < size; i++)
    {
        b[i].accept();
    }
    int chasisNumber_1;
    std::cout << "\nEnter the chasis number for bike to search: ";
    std::cin >> chasisNumber_1;
    search(b, size, chasisNumber_1);
    count_bike(b, size, Sports);
    avg_bike(b, size, Sports);

    delete[] c;
    delete[] b;

    return 0;
}
