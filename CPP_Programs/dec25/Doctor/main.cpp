
#include <iostream>
#include "doctor.h"
#include "hs.h"
#include "dentist.h"

int main()
{
    // Doctor d;
    // d.checkpatient();
    // //  std::cout<<d;

    // Dentist de("Kumar", "dentist", 2, 40000);
    // de.display();

    // Doctor *d1 = new HS();
    // d1->checkpatient();

    // HS *hs = dynamic_cast<HS *>(d1); //type casting
    // if (hs != nullptr)
    // {
    //     hs->checkpatient();
    //     hs->heartsurgery();
    // }
    // else
    // {
    //     std ::cout << "\nWrong place......Not found"<<"\n";
    // }
    // delete d1;

    Doctor *d2 = new Dentist();
    Dentist *den = dynamic_cast<Dentist *>(d2);
    if (den != nullptr)
    {
        den->rootcanal();
    }
    delete d2;

    return 0;

    // Doctor *dc = new HS;
    // dc->checkpatient();

    // // type casting
    // Dentist *dt = dynamic_cast<Dentist *>(dc); // down cast
    // if (dt != 0)
    //     dt->rootcanal();
    // else
    //     std::cout << "\n u r in wrong place ";
}