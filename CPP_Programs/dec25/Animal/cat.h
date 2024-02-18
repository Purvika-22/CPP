#ifndef CAT_H
#define CAT_H

#include"animal.h"


class Cat: public Animal
{
    public:
        Cat();
        Cat(int a);
        void makesound() override;
        void catsound();
        void accept();
        void display();
        virtual ~Cat();
};

#endif // CAT_H