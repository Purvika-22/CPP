#include "bike.h"
#include "vehicle.h"

Bike::Bike() : Vehicle()
{
    strcpy(Vehicle_Brand, "Bike brand");
}

Bike::Bike(int c_num, const char *brand_, double ex_price_, double tax_, double insurance_amt_)
    : Vehicle(c_num, brand_, ex_price_, tax_, insurance_amt_)
{
    strcpy(Vehicle_Brand, brand_);
}

void Bike::accept()
{
    Vehicle::accept();
    int ch;
    std::cout << "\nEnter choice :";
    std::cout << "\n 0.Commute \n 1.Sports \n2.Offroader ";
    std ::cin >> ch;
    switch (ch)
    {
    case 0:
        bc = Commute;
        break;
    case 1:
        bc = Sports;
        break;
    case 2:
        bc = Offroader;
        break;
    default:
        break;
    }
}

void Bike::display()
{
    Vehicle::display();
    if (bc == 0)
    {
        std ::cout << "\n Commute ";
    }
    else if (bc == 1)
    {
        std::cout << "\n Sports ";
    }
    else if (bc == 2)
    {
        std ::cout << "\n Offroader  ";
    }
}

void search(Bike bike[], int size, int cnum)
{
    for (int i = 0; i < size; i++)
    {
        if (bike[i].chassisNum() == cnum)
        {
            bike[i].display();
            break;
        }
    }
}


void count_bike(Bike b[], int size, bike_category category)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (b[i].getBc() == category)
        {
            sum++;
        }
    }
    if (sum > 0)
    {
        std::cout << "Cout of Bike = " << sum;
    }
    else
    {
        std::cout << "Not found ";
    }
}

void avg_bike(Bike b[], int size, bike_category category1)
{
    int sum = 0;
    float average = 0;
    for (int i = 0; i < size; i++)
    {
        if (b[i].getBc() == category1)
        {
            sum = sum + b[i].exShowroomPrice();
        }
    }
    average = sum / size;
    std::cout << "\n Avg  of Bike is = " << average;
}
