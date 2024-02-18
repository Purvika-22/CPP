// student.h
#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include<cstring>

class Student
{
protected:
    char name[20];
    int age;
    char specialization[20];
public:
    Student();
    Student(const char *name, int age);
    Student(const char * name,const char* specialization,int age);
    virtual ~Student();

    const char *getName() const { return name; }
    void setName(const char *name_) { strcpy(name, name_); }

    int getAge() const { return age; }
    void setAge(int age_) { age = age_; }

    void display();

    virtual void exam_details() ;  // Declare a virtual function for polymorphism

    friend std::ostream &operator<<(std::ostream &os, const Student &s);
};

#endif // STUDENT_H
