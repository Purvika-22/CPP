#include "circle.h"

Circle::Circle() : radius(7)
{
}

Circle::Circle(int r) : radius(r)
{
}

Circle::~Circle()
{
    std ::cout << "~Circle() called"
               << "\n";
}

int Circle::area()
{
    return 3.14 * radius * radius;
}

void Circle::accept()
{
    std ::cout << "\nEnter the radius of the circle:";
    std ::cin >> radius;
    Shape ::accept();
}

void Circle::display()
{
    std ::cout << "**Circle display**"
               << "\n";
    std ::cout << "Radius of circle :\n"
               << radius;
    Shape::display();
    std ::cout << "Area of the circle:\n"
               << area();
}
