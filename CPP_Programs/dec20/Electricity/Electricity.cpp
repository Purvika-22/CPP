#include <iostream>
#include "header.h"

Electricity :: Electricity(int sanctionLoad, long presentReading, long previousReading) 
: sanctionLoad(sanctionLoad), presentReading(presentReading), previousReading(previousReading)
{
}

void Electricity :: setSanctionLoad()
{
    do
    {
        std ::cout << "Enter the Sanction Load [1,3,5]: ";
        std ::cin >> sanctionLoad;
    } while (sanctionLoad != 1 && sanctionLoad != 3 && sanctionLoad != 5);
}

void Electricity :: setPresentReading()
{
    do
    {
        std ::cout << "Enter the present Reading :";
        std ::cin >> presentReading;
    } while (presentReading > 0);
}

void Electricity ::calculateElectricityBill()
{
    int result = 0;
    if (presentReading < previousReading)
    {
        std ::cout << " The electricity bill is zero" << std ::endl;
    }
    else
    {
        if (sanctionLoad == 1)
        {
            result = (sanctionLoad * E1) + ((presentReading - previousReading) * E1) / 100;
        }
        else if (sanctionLoad == 3)
        {
            result = (sanctionLoad * E2) + ((presentReading - previousReading) * E2) / 100;
        }
        else if (sanctionLoad == 5)
        {
            result = (sanctionLoad * E3) + ((presentReading - previousReading) * E3) / 100;
        }

        std ::cout << "The electricity bill for the current month is" << result << std ::endl;
    }
}

void Electricity :: displayDetails()
{
    std :: cout <<"Sanction Load = " << sanctionLoad << std::endl;
    std :: cout <<"Previous Reading = "<<previousReading << std::endl;
    std :: cout <<"Present REading = " << presentReading << std::endl;
}