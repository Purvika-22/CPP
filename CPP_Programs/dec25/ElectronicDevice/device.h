// brand
#ifndef DEVICE_H
#define DEVICE_H

#include <iostream>
#include <cstring>

class Device
{
protected:
    char brand[20];
    char color[20];
    int releaseYear;

private:
    int price;
    float discount;

public:
    Device();
    Device(const char* brand,const char* color,int releaseYear,int price,float discount);
    virtual ~Device();


    void display();
    virtual void switchon();
    virtual void switchoff();

    const char *getBrand() const { return brand; }
    void setBrand(const char *brand_) { strcpy(brand, brand_); }

    int getPrice() const { return price; }
    void setPrice(int price_) { price = price_; }

    float getDiscount() const { return discount; }
    void setDiscount(float discount_) { discount = discount_; }

    const char* getColor() const { return color; }
    void setColor(const char* color_) { strcpy(color,color_); }

    int getReleaseYear() const { return releaseYear; }
    void setReleaseYear(int releaseYear_) { releaseYear = releaseYear_; }

    friend std::ostream &operator<<(std::ostream &os, const Device &rhs);
};


#endif // DEVICE_H
