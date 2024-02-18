#include "header.h"
#include <cstring>
#include <iostream>
int Loan::loancounter = 1;

Loan::Loan() : loannumber(loancounter++), amount(200000), interestamount(90)
{

    name = new char[20];
    strcpy(name, "KPIT");
}

Loan::Loan(int am, const char *nm, int interestam)
    : loannumber(loancounter++), amount(am), interestamount(interestam)
{
    name = new char[strlen(nm) + 1];
    strcpy(name, nm);
}

Loan::Loan(const Loan &other)
    : loannumber(other.loancounter), amount(other.amount), interestamount(other.interestamount)
{
    name = new char[strlen(other.name) + 1];
    strcpy(name, other.name);
}

void Loan::accept()
{
    name = new char[20];
    std::cout << "Enter the name is:";
    std::cin >> name;
    std::cout << "Enter the amount is:";
    std::cin >> amount;
    std::cout << "Enter the interest amount is:";
    std::cin >> interestamount;
}

void Loan::display()
{
    std::cout << "The loan number is:" << loannumber << std::endl;
    std::cout << "The amount is:" << amount << std::endl;
    std::cout << "The name is:" << name << std::endl;
    // std::cout << "The interest amount is:" << calculateinterest() << std::endl;
}

Loan::~Loan()
{
    delete[] name;
}

Loan highestinterest(Loan l[], int size)
{
    int index = 0;
    int max = 0;
    for (int i = 0; i < size; i++)
    {
        if (max < l[i].getAmount())
        {
            max = l[i].getAmount();
            index = i;
        }
    }
    return l[index];
}

Loan search(Loan l[], int size, int se)
{
    int index;
    for (int i = 0; i <= size; i++)
    {
        if (se == l[i].getLoannumber())
        {
            index = i;
            break;
        }
        else
        {
            throw "loan number not found";
        }
    }
    return l[index];
}
