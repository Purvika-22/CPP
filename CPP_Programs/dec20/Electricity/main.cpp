#include<iostream>
#include"header.h"
int main()
{
    Electricity e;
    e.setSanctionLoad();
    e.setPresentReading();
    e.displayDetails();
    e.calculateElectricityBill();
    return 0;
}