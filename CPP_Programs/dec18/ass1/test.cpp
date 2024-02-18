#include <iostream>
#include <cstring>
#include "student.h"

class Product
{
    int procode;
    char *name;

public:
    Product()
    {
        procode = 11;
        strcpy(name, "kk");
    }
    void show()
    {
        std::cout << name;
    }
    ~Product()
    {
        delete[] name;
    }
    Product(int pcode, const char *nm)
    {
        procode = pcode;
        name = new char[strlen(nm) + 1];
        strcpy(name, nm);
    }
    Product(Product &p) //copy ctor -> to avoid dangling pointer
    {
        //this pointer pointes to p3
        procode  = p.procode;
        name = new char[strlen(p.name)+1]; //this statement get missed in previous
        strcpy(name,p.name);
        name = p.name;
    }
};


void f1(Product &p4) //photo cpy -->pass by val
//best opt pass by ref
{
    p4.show();
}
class Student
{
    int rollno;
    int *m; // m is a pointer we can adjust the array for any size that is y pointer
public:
    Student()
    {
        rollno = 1;
        m = new int[2];
        m[0] = 0;
        m[1] = 0; // if more than 2 then use for loop
    }

    Student(int r, int mk[], int n)
    {
        rollno = r;
        m = new int[n];
        for (int i = 0; i < n; i++)
        {
            m[i] = mk[i];
        }
    }

   Student::~Student()
{
        std ::cout << "Destor called()\n"
                   << std::endl;
        delete[] m; // desctor  will free the every memory
        // gets executed when evry obj goes out of scope
    }
};
//by defalut c++ provides tha copy ctor but it will done shallow copy(partial copy)
//if there is no pointer in the cls then the copy ctor will work properly
//for deep copy write your own copy ctor

int main()
{

    // Product p1;
    // p1.show();

    Product p2(33, "TV");
    Product p3(p2);//creating one obj as the copy of another

    Product *p = new Product;
    delete p;//to avoid memory leakage / req to call the dectructor

    // p2.show();
    // f1(p2);

    // Student s1a, d, b, s, e, f, g; // stack
    // Student *s2 = new Student();   // when pointers goes out of the scope then dector never gets called
    // but here Student * s2 ==> is a pointer that's y dector not be called

   // delete s2; // don't write means entire memory leakge can be done

    // delete s1.m;//free the memory that is pointed my m
    // desctor gets called to free the evry memeory
}