// #ifndef TWOWHEELER_H
// #define TWOWHEELER_H

// #include "vehicle.h"

// class TwoWheeler : public Vehicle
// {
// public:

//     TwoWheeler();
//     // Constructor
//     TwoWheeler(const char *color, const char *brand,int speed, int mileage);

//     // Destructor
//     ~TwoWheeler();

//     // Member function
//     void drive() const;
// };

// #endif // TWOWHEELER_H

#ifndef TWOWHEELER_H
#define TWOWHEELER_H

#include "vehicle.h"
class TwoWheeler : public Vehicle
{
    private:
        std::string name {""};
public:
    TwoWheeler();
    TwoWheeler(const char *, const char *, int, int, std::string);
    virtual ~TwoWheeler();
    void display() const;
    void drive() override;
};

#endif // TWOWHEELER_H
