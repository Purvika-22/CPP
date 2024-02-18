#include <iostream>

#include <cstring>
/* containment */

class MyDate
{
    int day, month, year;

public:
    MyDate()
    {
        day = 1;
        month = 1;
        year = 2023;
    }
    MyDate(int d, int m, int y)
    {
        day = d;
        month = m;
        year = y;
    }
    friend std::ostream &operator<<(std::ostream &os, const MyDate &m)
    {
        os << m.day << "/" << m.month << "/" << m.year << std::endl;
        return os;
    }
    void display()
    {
       //  std :: cout << m.day << "/" << m.month << "/" << m.year << std::endl;
    }
};

class Person
{
    char name[20];
    MyDate dob;

public:
    Person()
    {
        strcpy(name, "purvika");
    }
    friend std::ostream &operator<<(std::ostream &os, const Person &pr)
    {
        os << pr.name << pr.dob << std::endl;
        return os;
    }
    void display()
    {
        std::cout<<name;
        dob.display();
    }
};

// class Library
// {
//     int bookcode;
//     MyDate issudedate;

// };
int main()
{

    Person p; // memory is allocated for day mnth and year(containment)
    p.display();
    MyDate d1(2,2,2002);
    std::cout << d1 << "\n";


    // MyDate d1,d2;
    // std::cout<<d1<<d2; //cascading effect doesn't work with the void function
    // /*
    // cout<<d1                <<d2
    // operator<<(cout,d1)     <<d2
    // operator<<(cout,d2)*/
    return 0;
}