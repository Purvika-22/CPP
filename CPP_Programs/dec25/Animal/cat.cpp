#include "cat.h"
#include<iostream>

Cat::Cat():Animal()
{
}

Cat::Cat(int a):Animal(a)
{
}

void Cat::makesound()
{
    std::cout<<"Makes Meow Meow"<<std::endl;
}
void Cat::catsound()
{
    std::cout<<"Makes Meow Meow"<<std::endl;
}


void Cat::accept()
{
    Animal::accept();
}

void Cat::display()
{
    Animal::display();
}
Cat::~Cat()
{
}