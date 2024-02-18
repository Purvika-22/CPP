#include <iostream>
#include <cstring>
// Overloading subscript operator
class Employee
{
    char empname[30];

public:
    Employee() { strcpy(empname, "AAA"); }
    Employee(const char *n) { strcpy(empname, n); }

    void display()
    {
        std::cout << empname << std::endl;
    }
    

    char &operator[](int index)
    {
        if (!(index >= 0 && index < strlen(empname)))
         // all ctrl paths are not returning the value if(!) not
            throw "Index out of bounds";

        return empname[index];
    }

    friend std::ostream &operator<<(std::ostream &os, const Employee &rhs) {
        os << "empname: " << rhs.empname;
        return os;
    }
};
int main()
{
    Employee e1("Akshay");

    std::cout << e1[0];

    char ch = e1[0];
    std::cout << "char ch = " << ch << std::endl;
    // char ch = e1[0];
    // char ch = e1.operator[](0)
    /*LHS RHS
    char ch = func call on right side of assignment operator*/

    e1[1] = 'a';
    /*
    e1.operator[](1) = 'a';
    funcall on left side = 'a';
    */
}

// Default ctor
// copy ctor
// overloade assignment operator --> CPP provides earlier