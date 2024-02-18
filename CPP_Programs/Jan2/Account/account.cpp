#include <iostream>
#include <cstring>
#include "account.h"

LowBalException::LowBalException() 
{
    strcpy(msg,"Error");
}
LowBalException::LowBalException(const char *m)
{
    strcpy(msg, m);
}
char *LowBalException::what()
{
    return msg;
}

Account::Account()
{
    balance = 2000;
    strcpy(name, "Kamal");
}

Account::Account(const char *n, int b) : balance(b)
{
    strcpy(name, n);
}

void Account::withdraw()
{
    int amt;
    std :: cout <<"\nEnter the amt to be withdrawn: " ;
    std :: cin >> amt;
    if (balance < amt)
    {
        throw LowBalException("Amt should be greater than 5K");
    }

    balance -= amt;
    std :: cout << "Bal = " << balance;
}
