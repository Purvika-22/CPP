#ifndef HEADER_H
#define HEADER_H

#include <iostream>
enum ESlabs
{
    E1 = 100,
    E2 = 150,
    E3 = 200
};
class Electricity
{
    int sanctionLoad;
    long presentReading;
    long previousReading;

public:
    Electricity();
    Electricity(int, long, long);

    int getSanctionLoad() const { return sanctionLoad; }
    void setSanctionLoad(int sanctionLoad_) 
    { 
        std :: cout << "\nEnter sanction load {1,3,5}";
        sanctionLoad = sanctionLoad_;
    }

    long getPresentReading() const { return presentReading; }
    void setPresentReading(long presentReading_) { presentReading = presentReading_; }

    long getPreviousReading() const { return previousReading; }
    void setPreviousReading(long previousReading_) { previousReading = previousReading_; }
    
    void accept();
    void display() const;
    void calcElecBill();

};

#endif // HEADER_H
