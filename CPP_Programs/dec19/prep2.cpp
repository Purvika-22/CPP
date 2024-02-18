#include <iostream>
#include <string.h>

class Point
{
private:
    char empname[20];

public:
   

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

   
    char& operator[](int index)
    {
        if(index < 0 || index > strlen(empname))
        {
            throw "ERROR!!!";
        }
        
        return empname[index] ;
    }

    ~Point() {}

    friend std::ostream &operator<<(std::ostream &os, const Point &rhs) {
        os << "empname: " << rhs.empname;
        return os;
    }
   
};

int main()
{

    Point p("Yashna");
    std::cout << "Enter the char index: " ;
    int index{0};
    std::cin >> index;

    std::cout << "Letter in that particular index is : " << p[index];

    // y
    // b
}