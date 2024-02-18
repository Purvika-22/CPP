#include <iostream>
#include "student.h"
#include "medical.h"
#include "engineer.h"
#include "degree.h"

int main()
{
    // Student s1;
    // std ::cout << s1;

    // Student s2("Teera", 14);
    // std ::cout << s2;

    Student *s3 = new Engineer("Manoj", "CSE",60);
    s3 -> display();

    Degree *stud = dynamic_cast<Degree *>(s3);
    if (stud != nullptr)
    {
        // stud->sem();
        stud->exam_details();
    }
    else
    {
        std::cout << "\nWrong";
    }


    return 0;
}