
#include "dog.h"
#include<iostream>

Dog::Dog():Animal()
{
}

Dog::Dog(int a):Animal(a)
{
}

void Dog::makesound()
{
    std::cout<<"Makes Bow Bow"<<std::endl;
}

void Dog::accept()
{
    Animal::accept();
}

void Dog::display()
{
     Animal::display();
}

Dog::~Dog()
{
}