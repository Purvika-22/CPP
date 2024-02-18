#ifndef TRAINING_H
#define TRAINING_H

#include <iostream>
#include <cstring>
class Training
{
protected:
    char traineename[20];
    double budget;
    int participants;
    char materials[40];

public:
    Training();
    Training(const char *traineename, double budget, int participants, const char *materials);
    virtual ~Training();
    void accept();

    virtual void display() ;
    
    const char *getTraineename() const { return traineename; }
    void setTraineename(const char *traineename_) { strcpy(traineename, traineename_); }

    double getBudget() const { return budget; }
    void setBudget(double budget_) { budget = budget_; }

    int getParticipants() const { return participants; }
    void setParticipants(int participants_) { participants = participants_; }

    const char *getMaterials() const { return materials; }
    void setMaterials(const char *materials_) { strcpy(materials, materials_); }
};

#endif // TRAINING_H
