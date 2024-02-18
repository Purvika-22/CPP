#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include<cstring>

class Student
{

private:
    static int id; 
    int studentid;
    char sname[20];
    int age;
    double gpa;
    int sub[3];
    //static int generatestudentid;

public:

    Student();
    Student (const char * sname_,int age,int gpa,int s[]);

    float avg();

    void accept();
    void display();
    void menu();
//    friend void operator<<(std::ostream &os, Phone &p);

    friend std::ostream &operator<<(std::ostream &os,Student &s); 

    const char* getSname() const { return sname; }
    void setSname(const char* sname_) { strcpy(sname,sname_); }

    int getAge() const { return age; }
    void setAge(int age_) { age = age_; }

    double getGpa() const { return gpa; }
    void setGpa(double gpa_) { gpa = gpa_; }

};

#endif // STUDENT_H
