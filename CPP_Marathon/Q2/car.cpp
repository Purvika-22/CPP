#include "car.h"

Car::Car() : Vehicle()
{
    strcpy(Vehicle_Brand, "Car brand");
}

Car::Car(int c_num, const char *brand_, double ex_price_, double tax_, double insurance_amt_)
    : Vehicle(c_num, brand_, ex_price_, tax_, insurance_amt_)
{
    strcpy(Vehicle_Brand, brand_);
}

void Car::accept()
{
    int ch;
    std::cout << "\nEnter choice :";
    std ::cout << "\n 0.SUV 1.HatchBank 2.Sedan  ";
    std ::cin >> ch;
    switch (ch)
    {
    case 0:
        cc = SUV;
        break;
    case 1:
        cc = HatchBank;
        break;
    case 2:
        cc = Sedan;
        break;
    default:
        break;
    }
    Vehicle::accept();
}

void Car::display()
{
    Vehicle::display();
    if (cc == 0)
    {
        std ::cout << "\n SUV ";
    }
    else if (cc == 1)
    {
        std::cout << "\nHatchBack ";
    }
    else if (cc == 2)
    {
        std ::cout << "\nSedan ";
    }
}

void search(Car car[], int size, int cnum)
{
    for (int i = 0; i < size; i++)
    {
        if (car[i].chassisNum() == cnum)
        {
            car[i].display();
            break;
        }
    }
}

void count_car(Car c[], int size, car_category category)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (c[i].getCc() == category)
        {
            count++;
        }
    }
    if (count > 0)
        std::cout << count << " vehicles found" << std::endl;
    else
        std::cout << count <<"in else "<< "no vehicles found" << std::endl;
}

void avg_car(Car c[], int size, car_category category)
{
    std::cout << "in start car average function" << std::endl;
    int sum = 0;
    float average = 0;
    for (int i = 0; i < size; i++)
    {
        if (c[i].getCc() == category)
        {
            sum = sum + c[i].exShowroomPrice();
        }
    }
    average = sum / size;
    std::cout << "\n Avg = " << average;
    std::cout << "end in car average function" << std::endl;

}
