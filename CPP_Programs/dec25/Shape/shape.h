#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <cstring>
class Shape
{

protected:

    char color[90];

public:

    Shape();
    Shape(const char *color);
    virtual ~Shape();

    virtual int area() = 0;

    void accept();
    void display();

    const char *getColor() const { return color; }
    void setColor(const char *color_) { strcpy(color, color_); }
};

#endif // SHAPE_H
