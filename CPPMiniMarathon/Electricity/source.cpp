#include "header.h"

Electricity::Electricity()
    : sanctionLoad(10), presentReading(10), previousReading(10)
{
}

Electricity::Electricity(int sl, long preRea, long prevRea)
    : sanctionLoad(sl), previousReading(prevRea), presentReading(preRea)
{
}

void Electricity::calcElecBill()
{
    int res = 0;
    if (sanctionLoad == 1)
    {
        res = (sanctionLoad * E1) + ((presentReading - previousReading) * E1) / 100;
    }
    if (sanctionLoad == 3)
    {
        res = (sanctionLoad * E2) + ((presentReading - previousReading) * E2) / 100;
    }
    if (sanctionLoad == 5)
    {
        res = (sanctionLoad * E3) + ((presentReading - previousReading) * E3) / 100;
    }

    std ::cout << "\nElectricity Bill is :" << res;
}

void Electricity::accept()
{
    std ::cout << "\nSanction Load is {1,3,5}: ";
    std ::cin >> sanctionLoad;
    std ::cout << "\nPresent Reading : ";
    std ::cin >> presentReading;
    std ::cout << "\nPrevious Reading : ";
    std ::cin >> previousReading;
}

void Electricity::display() const
{
    std ::cout << "\nSanction Load is : " << sanctionLoad;
    std ::cout << "\nPresent Reading : " << presentReading;
    std ::cout << "\nPrevious Reading : " << previousReading;
}
