#include <iostream>
#include "phone.h"
void func(Phone &ph1)
{
    ph1.setPrice(9000);
    std::cout << "hello " << std::endl;
    ph1.display();
}
int main(int argc, char const *argv[])
{
    // Phone p("realme",9900.99);
    // Phone p1;
    // p.display();
    // p1.accept();
    // p1.display();
    //  Taking array of objects:

    Phone p[2];
    Phone *p1 = new Phone[2]; // To create the dynamic we use *p because it developed using pointers;
    for (int i = 0; i < 2; i++)
    {
        p1[i].accept();
        p1[i].display();
        std::cout << p[i].getCount() << std::endl;   //-> calling the static method  using Object;
        std::cout << Phone::getCount() << std::endl; //-> calling the static method using ClassName;
    }

    delete[] p1;
    // Phone p;
    // // func(p);
    // std::cout << "hi";
    // std::cout << p;
    // p.display();
    return 0;
}

// concepts convered

//--> static increment, destructor pointers;
// take inputs from user;
// static methods and nonstatic methods --> calling them with objects and Class Name
