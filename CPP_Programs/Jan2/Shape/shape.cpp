#include <iostream>

class Shape
{
    std ::string color;

public:
    Shape()
    {
        color = "white";
    }
    Shape(std::string clr)
    {
        color = clr;
    }
    void fillclr()
    {
        std::cout << "Fill clr" << color;
    }
    virtual void calarea() = 0; // whenever you don't want to create a body in base cls but you want it in derived class then keep it as virtual
    // pure virtual function
};

class circle : public Shape
{
    double r;

public:
    circle()
    {
        r = 6;
    }
    circle(double r, std ::string clr) : Shape(clr)
    {
        r = r;
    }
};
int main()
{
    return 0;
}