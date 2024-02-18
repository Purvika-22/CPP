#ifndef DOG_H
#define DOG_H

#include"animal.h"


class Dog: public Animal
{
    public:
        Dog();
        Dog(int a);
        void makesound() override;
        void accept();
        void display();
        virtual ~Dog();
};

#endif // DOG_H