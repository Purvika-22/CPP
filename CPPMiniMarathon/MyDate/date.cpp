#include "date.h"

MyDate::MyDate() : day(2), month(2), year(2002)
{
}

MyDate ::MyDate(int d, int m, int y) : day(d), month(m), year(y)
{
}

void MyDate ::accept()
{
    std::cout << "\nEnter DD-MM-YY :";
    std::cin >> day >> month >> year;
}

void MyDate ::display()
{
    std::cout << "\nDate is: " << day << "-"<< month << "-" << year;
}

std::ostream &operator<<(std::ostream &os,const MyDate &d)
{
    std :: cout <<"\nDD - MM - YY =" << d.day << "-" << d.month << "-" << d.year ;
    return os;
}