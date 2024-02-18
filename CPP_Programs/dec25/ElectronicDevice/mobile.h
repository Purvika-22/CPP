// model

#ifndef MOBILE_H
#define MOBILE_H

#include <iostream>
#include "device.h"

class Mobile : public Device
{
private:
    char model[20];

public:
    Mobile();
    Mobile(const char* model,const char *brand, const char *color, int releaseYear, int price, float discount);
    ~Mobile();
    
    void display();

    void switchon() override;
    void switchoff() override;


    const char* getModel() const { return model; }
    void setModel(const char* model_) { strcpy(model, model_); }

    friend std::ostream &operator<<(std::ostream &os, const Mobile &rhs);
};

#endif // MOBILE_H
