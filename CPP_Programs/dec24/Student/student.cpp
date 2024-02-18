#include <iostream>
#include <cstring>
#include "student.h"

int Student ::id = 1;

Student :: Student() : studentid(id++), age(10), gpa(10)
{
    strcpy(sname, "purviii");
}

Student ::Student(const char *sname_, int age, int gpa, int s[])
    : studentid(id++), age(age), gpa(gpa)
{
    std ::strcpy(sname, sname_);
    for (int i = 0; i < 3; i++)
    {
        sub[i] = s[i];
    }
}

void Student ::accept()
{
    std ::cout << "Enter name:";
    std ::cin >> sname;
    std ::cout << "Enter age:";
    std ::cin >> age;
    std ::cout << "Enter GPA:";
    std ::cin >> gpa;
}

void Student::display()
{
    std ::cout << "Student ID: " << studentid << "\n";
    std ::cout << "Student name is: " << sname << "\n";
    std ::cout << "Student age is: " << age << "\n";
    std ::cout << "Student GPA is: " << gpa << "\n";
}

float Student::avg()
{
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum += sub[i];
    }
    return sum / 3.0;
}


//    os << p.getName() << p.getPhoneid() << p.getPrice() << std::endl;
std::ostream &operator<<(std::ostream &os, Student &s)
{
    os << s.getSname() << " " << s.getAge() <<" " << s.getGpa() << std ::endl;
    return os;
}


