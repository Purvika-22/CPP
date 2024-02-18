#include <iostream>
#include "date.h"
#include <cstring>
#include "customer.h"
#include "bill.h"
#include "person.h"
int main()
{
    // Bill b(Customer("Purvika", MyDate(28, 12, 2023)),9000);
    // b.accept();
    // b.display();
    
    Person p1("Yuvi",MyDate(02,02,2002));
    p1.display();

    // Bill *b = new Bill[3];

    // for (int i = 0; i < 3; i++)
    // {
    //     std :: cout <<"\n Enter the details for :" << i+1 ;
    //     b[i].accept();
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     std :: cout << "\n";
    //     b[i].display();
    // }

    // delete[] b;

    // Person *p = new Person[3];

    // for (int i = 0; i < 3; i++)
    // {
    //     std ::cout << "\n";
    //     std :: cout <<"Enter the person details :" << i + 1;
    //     p[i].accept();
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     std ::cout << p[i];
    //     // p[i].display();
    // }

    // delete[] p;

    return 0;
}