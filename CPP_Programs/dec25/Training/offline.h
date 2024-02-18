#ifndef OFFLINE_H
#define OFFLINE_H

#include <iostream>
#include <cstring>
#include "training.h"
class Offline : public Training
{
public:
    Offline();
    Offline(const char *traineename, int budget, int participants, const char *material);
    ~Offline();

    void display() override;
    void offlinemode();
};

#endif // OFFLINE_H
