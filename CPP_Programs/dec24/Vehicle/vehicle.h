// #ifndef VEHICLE_H
// #define VEHICLE_H

// #include <iostream>
// #include <cstring>
// class Vehicle
// {
// protected:
//     int speed;
//     int mileage;

// private:
//     char color[20];
//     char brand[20];

// public:
//     Vehicle();
//     Vehicle(const char *clr, const char *brd, int spd, int mlg);
//     virtual ~Vehicle();

//     virtual void drive();
//     void accept();
//     void display();

//     int getSpeed() const { return speed; }
//     void setSpeed(int speed_) { speed = speed_; }

//     int getMileage() const { return mileage; }
//     void setMileage(int mileage_) { mileage = mileage_; }

//     const char *getColor() const { return color; }
//     void setColor(const char *color_) { strcpy(color, color_); }

//     const char *getBrand() const { return brand; }
//     void setBrand(const char *brand_) { strcpy(brand, brand_); }
// };

// #endif // VEHICLE_H

#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <cstring>
class Vehicle
{
protected:
    int speed;
    int millage;
    char brand[20];
    char color[30];

public:
    Vehicle();
    Vehicle(const char *brand_, const char *color_, int speed_, int millage_);
    virtual ~Vehicle();

    void accept();
    void display() const;

    virtual void drive();

    friend std::ostream &operator<<(std::ostream &os,const Vehicle &v);

    int getSpeed() const { return speed; }
    void setSpeed(int speed_) { speed = speed_; }

    int getMillage() const { return millage; }
    void setMillage(int millage_) { millage = millage_; }

    const char *getBrand() const { return brand; }
    void setBrand(const char *brand_) { strcpy(brand, brand_); }

    const char *getColor() const { return color; }
    void setColor(const char *color_) { strcpy(color, color_); }
};

#endif // VEHICLE_H
