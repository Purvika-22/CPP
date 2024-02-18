#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include<cstring>

class Vehicle
{
protected:
    int chassis_num;
    char Vehicle_Brand[30]; 
    double Ex_Showroom_price;
    double tax;
    double insurance_amt;

public:

    Vehicle();
    Vehicle(int,const char *,double,double,double);
    // virtual ~Vehicle();
    
    void accept();
    void display();
    
    int chassisNum() const { return chassis_num; }
    void setChassisNum(int chassisNum) { chassis_num = chassisNum; }

    const char* vehicleBrand() const { return Vehicle_Brand; }
    void setVehicle_Brand(const char* vehicleBrand) { strcpy(Vehicle_Brand, vehicleBrand); }

    double exShowroomPrice() const { return Ex_Showroom_price; }
    void setEx_ShowroomPrice(double exShowroomPrice) { Ex_Showroom_price = exShowroomPrice; }

    double getTax() const { return tax; }
    void setTax(double tax_) { tax = tax_; }

    double insuranceAmt() const { return insurance_amt; }
    void setInsuranceAmt(double insuranceAmt) { insurance_amt = insuranceAmt; }
    
};


#endif // VEHICLE_H
