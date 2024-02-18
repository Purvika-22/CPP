#include <iostream>
class Point
{
    int x, y;

public:
    Point()
    {
        x = y = 0;
    }
    Point(int x1, int y1)
    {
        x = x1;
        y = y1;
    }
    void display()
    {
        std::cout << "\n x = " << x;
        std::cout << "\n y = " << y;
    }
    // void add(Point &p)
    // {
    //     int x3 = this-> x + p2.x;
    // }

    Point operator+(Point &p)
    {
        Point sumobj;
        sumobj.x = x + p.x; // this -> x optional
        sumobj.y = this->y + p.y;
        std::cout << "Addition of x and y is: ";
        return sumobj;
    }
    Point operator-(Point &p2)
    {
        Point subobj;
        subobj.x = x - p2.x;
        subobj.y = this->y - p2.y;
        std::cout << "\nSubtraction of x and y is :";
        return subobj;
    }

    bool operator==(Point &p2)
    {
        if (this->x == p2.x && this->y == p2.y)
            return true;
        else
            return false;
    }

    bool operator!=(Point &p2)
    {
        if (this->x != p2.x && y != p2.y)
            // p2.x && this->y != p2.y)
            std::cout << "\n Not Equal of x and y is :";
        return true;
    }

    // avoid return by value bcozz it will call the copy ctor

    Point &operator++() // for pre increment
    {
        std::cout << "In pre incre ";
        ++x;
        ++y;
        return *this;
    }
    Point operator++(int) // for post increment
    {
        std::cout << "In post incre ";
        Point tempobj = *this; // tempobj = p2;
        x++;
        y++;
        return tempobj; // tempobj t is a local var so by value (!& idi pettamu)
    }
};

int main()
{

    Point p1(1, 2), p2(2, 3), p5(8, 9), p6(8, 9);
    Point p3 = p1 + p2; // p1.operator+(p2)          //p1.add(p2);
    p3.display();

    Point p4 = p5 - p2;
    p4.display();

    std::cout << " \n"
              << (p5 == p6);

    // Point p7 =

    // int a=10,b=90,c;
    // c=a+b;
    // cout<<"Sum is"<<c;

    return 0;
}