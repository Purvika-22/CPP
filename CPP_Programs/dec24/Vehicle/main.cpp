#include <iostream>

#include "twowheeler.h"
#include "fourwheeler.h"
#include "vehicle.h"

int main()
{
    Vehicle* v = new Vehicle("Vehicle1" , "RED" , 45 , 67 );
    v->getColor();

    Vehicle* two =  dynamic_cast<TwoWheeler*>(v);
    if(two != nullptr)
    {
        std::cout << "Brand of Two wheeler: " << two->getBrand() << "\n";
    }


        Vehicle obj;
        // obj.accept();
        // obj.display();
        obj.drive();

        TwoWheeler tobj("hero","Pink", 100, 230 , "BIKE1");
        tobj.drive();

        Vehicle *v = new FourWheeler("Scoda","Pink", 120, 210);
        v->drive();

        FourWheeler *frw = dynamic_cast<FourWheeler *>(v);
        if (frw != nullptr)
        {
            frw->drive();
            frw -> AC();
        }                

        delete v;
    // Vehicle v;
    // v.accept();
    // v.display();
    // return 0;
}
