#include <iostream>
#include "header.h"
// Every non-static member function in C++ has of [this] pointer
// if it is not there then the entire CPP will get collapsed

// void search(Student s[], int r)
// {
// }

float maxAvg(Student s[], int size)
{
    float avg[3];
    for (int i = 0; i < size; i++)
    {
        avg[i] = s[i].calAvg();
        std::cout << "avg[i] =  " << avg[i];
    }
    float max = avg[0];
    for (int i = 0; i < size; i++)
    {
        if (avg[i] > max)
            max = avg[i];
    }
    std::cout << " " << max;
    return max;

    // use max code to findout the max
}

void addrecord(Student s[], int index)
{
    s[index].accept();
}

void showrecords(Student s[], int totalrec) // global function
{
    for (int i = 0; i < totalrec; i++)
    {
        s[i].display();
    }
}

void searchrecords(Student s[], int totalrec, int r)
{
    // int r = 4;
    std::cout << "Enter the number that need to be search :";
    bool flag = false;
    for (int i = 0; i < totalrec; i++)
    {
        if (s[i].getRollnum() == r)
        {
            std ::cout << "REC found ";
            flag = true;
            break;
        }
    }
    if (flag == false)
    {
        std ::cout << "Not found";
    }
}
int main()
{
    int m[3] = {44, 55, 66};
    //   Student s1 (909,"Soham",m);
    Student s1;
    // s1();//functor object --> that acts like a function
    // object can be called like a function
    // std::cout << s1;

    Student *sp = new Student;

    int n = 100;

    Student *sp1 = new Student[10]; // this allocates memory for 10 students

    int cr = 0;
    while (1)
    {
        int ch;
        std::cout << "Enter your choice";
        std ::cin >> ch;
        switch (ch)
        {
        case 0:
            if (cr < 5)
            {
                sp1[cr].accept();
                addrecord(sp1, cr);
                cr++;
            }
            else
            {
                std::cout << "Memory full";
            }

        case 1:
            if (cr > 0)
            {
                showrecords(sp1, cr);
            }
            else
            {
                std ::cout << "DB is empty";
            }
        }
    }
    /*
    while(1)
    switch(ch):
    case 1: //
    if(cr<5)
    sp1[cr].accept();
                addrecord(sp1,cr);
                cr++;
                else
                memory full

    case 2: if(cr > 0)
    showrecords(sp1,cr);
    else
    DB empty

same for display,search,

    */  

    delete sp; // to free the memeory that is allocated in the heap section

    delete sp1; // to avoid memoery leakage

    int m1[3] = {44, 55, 66};
    int m2[3] = {33, 66, 22}; 
    int m3[3] = {33, 66, 88};
    int m4[3] = {33, 66, 88};
    
    Student s[4] = {{1, "Yashna", m1}, {2, "harika", m2}, {3, "kranti", m3}, {4, "fathima", m4}};

    std ::cout << "Max avg :" << maxAvg(s, 4) << std::endl;

    Student s1;
    s1.display();

    Student s2("SS", 34);
    s2.display();

    Student s3("jk", 89);
    s3.display(); 

    // Every non static member function can be called with object only

    // can I create obj as const object?
    // cnst objects can call const member functions only
    // and non const objects can call any member functions

    // Student :: showX();

    // const Student s4;
    // s4.display();

    // Student *sptr1 = new Student();
    // sptr1->display();

    // Student *sptr2 = new Student(404, "jay", 78);
    // sptr2->display();

    // int n;
    // std::cout << "How many student?\n";
    // std ::cin >> n;
    // Student *sp = new Student[n];

    // Student sarr[3] = {{1, "ds", 45}, {2, "hari", 34}, {3, "anuj", 90}};
    // for (int i = 0; i < 3; i++)
    // {
    //     // sarr[i].accept();
    //     sarr[i].display();
    // }
    // search(sarr, 102);

    // non const object
    // Student s1; // obj of student class //s1 is an instance of a class
    // s1.display();
    // Student s2, s3, s4;
    // Student s2 = {3,"hjd",45}; //C++ will not allow you to initialize the values at the time of declaration
    // s2.display();
    // s3.display();

    // Student s2(2, "df", 78);
    // s2.display();

    // s2.setMarks(80);
    // std::cout << "Updated marks = " << s2.getMarks();

    /*
    - allocate memory
    - constructor is called(if u provide your own constructor then it will be called ortherwise the old constructor will be called)
    - but user defined ctor will have more precedence
    - initialize the data memebers of that object
    */

    // std ::cout << "Size of student class" << sizeof(Student) << std::endl;
}