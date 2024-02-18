#include <iostream>
#include "phone.h"

// static variable intialization
int Phone::cnt = 101;

Phone::Phone()
{
    std::cout << "default constructor" << std::endl;
    phoneid = cnt++;
    name = new char[strlen("default") + 1]; // without using malloc
    strcpy(name, "default");
    price = 0;
}

// Phone::Phone(const char *n, double p, std::string _features)
// {
//     std::cout << "In the constructor of Phone Class" << std::endl;
//     phoneid = cnt++;
//     name = new char[strlen(n) + 1]; // without using malloc
//     strcpy(name, n);
//     price = p;
// }

Phone::Phone(const char ph[], double price , std::string features) :_features(features), phoneid(cnt++)  , price(price) 
{
    name = new char[strlen(ph) + 1];
    strcpy(name , ph);
}

Phone::~Phone()
{
    std::cout << "In the destructor:" << std::endl;
    delete[] name;
}

void operator<<(std::ostream &os, Phone &p)
{
    os << p.getName() << p.getPhoneid() << p.getPrice() << std::endl;
}

void Phone::display() const
{
    std::cout << "phoneId :" << getPhoneid() << "\n" <<"Phone name:" << getName() << "\n"  <<"Price: " << getPrice() << std::endl;
}

void Phone::accept()
{
    std::cout << "enter the Phone name:";
    std::cin >> name;
    std::cout << "enter the price:";
    std::cin >> price;
}