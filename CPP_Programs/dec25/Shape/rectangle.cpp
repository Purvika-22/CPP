#include "rectangle.h"
#include<iostream>

Rectangle::Rectangle() : length(10), breadth(10)
{
}

Rectangle::Rectangle(int l, int b) : length(l), breadth(b)
{
}

Rectangle::~Rectangle()
{
    std ::cout << "\n~Rectangle() called"
               << "\n";
}

void Rectangle::accept()
{
    std::cout<<"\nEnter the length of rectangle:";
    std :: cin >> length;
    std::cout <<"\nEnter the breadth of rectangle:";
    std :: cin >> breadth;
    Shape :: accept();
}

int Rectangle::area()
{
    return length * breadth;
}

void Rectangle::display()
{
    std ::cout << "*** Rectangle details display ***"<< "\n";
    std ::cout << "\n Length:\n " << length << "\nBreadth :\n " << breadth;
    Shape :: display() ;
    std :: cout << "\n Area is:"<<area();
}



