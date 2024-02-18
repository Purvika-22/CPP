#include <iostream>
#include "shape.h"
class Rectangle : public Shape
{
private:
    int length;
    int breadth;

public:
    Rectangle();
    Rectangle(int length, int breadth);
    ~Rectangle();

    void accept();
    void display();

    int area() override;

    int getLength() const { return length; }
    void setLength(int length_) { length = length_; }

    int getBreadth() const { return breadth; }
    void setBreadth(int breadth_) { breadth = breadth_; }
};