#include "animal.h"
#include<iostream>

Animal::Animal()
{
    age=5;
}

Animal::Animal(int a):age(a){}


void Animal::makesound()
{
    std::cout<<"Makes some generic sound"<<std::endl;
}

void Animal::accept()
{
    std::cout<<"Enter age:"<<std::endl;
    std::cin>>age;
}

void Animal::display()
{
    std::cout<<"The age is:"<<age<<std::endl;
}

Animal::~Animal()
{}