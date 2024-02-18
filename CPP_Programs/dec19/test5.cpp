#include <iostream>

class Address
{
    // state,city.pincode,country
};
class Student
{
    // containment obj of 1 class
    Address add;  //
    Address *add; // dynamic memory allocation ki use avutadi
};
class Product
{
    Address add;
};
class Employee
{
};
int main()
{
    return 0;
}