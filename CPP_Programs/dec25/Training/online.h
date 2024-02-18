#ifndef ONLINE_H
#define ONLINE_H

#include <iostream>
#include "training.h"
class Online : public Training
{
private:
    int duration;
    char platform[20];

public:
    Online();
    Online(const char *platform, int duration);
    ~Online();

    void accept();
    void display()  override;
    void onlinemode();

    int getDuration() const { return duration; }
    void setDuration(int duration_) { duration = duration_; }

    const char *getPlatform() const { return platform; }
    void setPlatform(const char *platform_) { strcpy(platform, platform_); }
};

#endif // ONLINE_H
