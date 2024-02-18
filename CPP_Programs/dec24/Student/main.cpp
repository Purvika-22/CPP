#include <iostream>
#include "student.h"

int main()
{
    Student *stud = new Student[3];

    int marks1[] = {23,23,45};
    Student s1;//("Jeshna",15,10,marks1);
    s1.accept();
    s1.display();

    int marks2[]={34,45,56};
    Student s2("Honey",13,10,marks2);
    s2.display();

    int marks3[] = {55,66,77};
    Student s3("Yashna",12,10,marks3);
    s3.display();

    // std :: cout <<"To get the whole details:";
    // s1.menu();


    // std :: cout <<"Updating GPA for Yashna:";
    // s3.setGpa(9.0);
    // s3.display();

    // s2.setSname("Josh");
    // s2.display();

    // for (int i = 0; i < 3; i++)
    // {
    //     std ::cout << "\nEnter the student details" << i + 1 << ":\n";
    //     stud[i].accept();
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     std ::cout << "\nStudent details" << i + 1 << ":\n";
    //     stud[i].display();
    // }

    delete[] stud;
    return 0;
}
