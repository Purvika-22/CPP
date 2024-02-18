#include <iostream>
#include <string.h>

class Point
{
private:
    int x{0};
    int y{0};
    char empname[20];

public:
    Point()
    {
        x = y = 0;
    }

    Point(const char* _empname)
    {
        // empname = new char[strlen(_empname) + 1]; // for * 
        strcpy(empname, _empname);
    }

    Point(const Point& obj)
    {
        strcpy(empname,obj.empname);
    }

    Point& operator=(const Point& obj)
    {
        strcpy(empname,obj.empname);
        return *this;
    }

    Point(int x1, int y1)
    {
        x = x1;
        y = y1;
    }
    Point(const Point &obj)
    {
        x = obj.x;
        y = obj.y;
    }
    Point &operator=(const Point &obj)
    {
        x = obj.x;
        y = obj.y;
        return *this;
    }
    Point operator+(const Point &obj)
    {
        x += obj.x;
        y += obj.y;
        return *this;
    }

    char& operator[](int index)
    {
        if(index < 0 || index > strlen(empname))
        {
            throw "ERROR!!!";
        }
        return empname[index];
    }



    ~Point() {}


    Point& operator++()
    {
        ++x;
        ++y;
        return *this;
    }

    Point operator++(int)
    {
        Point tempObject = *this;
        x++;
        y++;
        return *this;
    }

    // bool operator==(const Point &other) const
    // {
    //     return x == other.x && y == other.y;
    // }

    bool operator!=(const Point &other) 
    { 
        return !(*this == other);
    }
    //[]

    bool operator<(const Point &other) const
    {
        if (x < other.x)
            return true;
        if (other.x < x)
            return false;
        return y < other.y;
    }
    bool operator>(const Point &other) const
    {
        return other < *this;
    }
    bool operator<=(const Point &other) const { return !(other < *this); }
    bool operator>=(const Point &other) const { return !(*this < other); }

    bool operator==(const Point &other) const {
        return x == other.x
            && y == other.y;
    }
    bool operator!=(const Point &other) const { return !(*this == other); }

    friend std::ostream &operator<<(std::ostream &os, const Point &rhs)
    {
        os << "x: " << rhs.x
           << " y: " << rhs.y;
        return os;
    }
};

int main()
{
    Point object1(10, 20), object2(10, 20) , object4(50, 70);

    Point object3 = object1 + object2;

    std::cout << object3 << "\n";

    std ::cout << "equals: " << (object1 == object2) << "\n";

    std::cout << "Less than :" << (object2 < object4) << "\n";


    std::cout << "Pre-Increment :" << ++object1 << "\n";

    std::cout << "Post -Increment :" << object2++ << "\n";

    Point p("Yashna");
    std::cout << "Enter the char index: " ;
    int index{0};
    std::cin >> index;

    std::cout << "Letter in that particular index is : " << p[index];

    // y
    // b
}