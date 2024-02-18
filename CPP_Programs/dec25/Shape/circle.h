#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include "shape.h"

class Circle : public Shape
{
private:
    int radius;

public:
    Circle();
    Circle(int radius);
    ~Circle();

    int area() override;

    void display();
    void accept();

    int getRadius() const { return radius; }
    void setRadius(int radius_) { radius = radius_; }
};

#endif // CIRCLE_H
