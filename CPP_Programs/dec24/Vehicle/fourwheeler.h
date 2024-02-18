// #ifndef FOURWHEELER_H
// #define FOURWHEELER_H

// #include "vehicle.h"

// class FourWheeler : public Vehicle
// {
// public:
//     // Constructors
//     FourWheeler();
//     FourWheeler( const char *color, const char *brand,int speed, int mileage);

//     // Destructor
//     ~FourWheeler();

//     // Member functions
//     void drive() const;
//     void AC();
// };

// #endif // FOURWHEELER_H

#ifndef FOURWHEELER_H
#define FOURWHEELER_H

#include "vehicle.h"

class FourWheeler : public Vehicle
{
public:
    FourWheeler();
    FourWheeler(const char *, const char *, int, int);
    ~FourWheeler();

    void display() const;
    void drive() override;
    void AC();
};

#endif // FOURWHEELER_H
