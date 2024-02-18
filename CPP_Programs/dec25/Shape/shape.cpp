#include "shape.h"

Shape::Shape()
{
    strcpy(color, "Black");
}

Shape::Shape(const char *color_)
{
    strcpy(color, color_);
}

Shape::~Shape()
{
    std::cout << "\n~shape() called"
              << "\n";
}

// int Shape::area()
// {
//     std ::cout << "\nArea of the respective shapes"
//                << "\n";
//     return 0;
// }

void Shape::accept()
{
    std::cout << "\n Enter  clr:\n";
    std ::cin >> color;
}

void Shape::display()
{
    std::cout << "\n***Shape info display***";
    std ::cout << "\n Clr of the shape:"
               << color;
}
