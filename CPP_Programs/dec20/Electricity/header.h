#ifndef HEADER_H
#define HEADER_H

enum ElectricitySlabs
{
    E1 = 125,
    E2 = 150,
    E3 = 200
};

class Electricity
{
private:
    int sanctionLoad;
    long presentReading;
    long previousReading;

public:
    Electricity(int sanctionLoad = 0, long presentReading = 0, long previousReading = 0);
    void setSanctionLoad();
    void setPreviousReading();
    void setPresentReading();
    void calculateElectricityBill();
    void displayDetails();
};

#endif // HEADER_H
