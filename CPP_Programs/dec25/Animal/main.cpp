#include"animal.h"
#include"cat.h"
#include"dog.h"
#include<iostream>

int main()
{
    Dog d1(10);
    d1.display();
    d1.makesound();

    Animal *a1=new Dog();
    a1->makesound();
    
    
    Cat *c=dynamic_cast<Cat*>(a1);
    if(c!=0)
    {
        c->catsound();
        
    }
    else
    {
        std::cout<<"You are in wrong place";
    } 
    delete a1;
    return 0;
}