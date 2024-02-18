#ifndef ACCOUNT_H
#define ACCOUNT_H

#include<iostream>
#include<cstring>
class Account
{
    char name[20];
    int balance;
    public:
    Account();
    Account(const char*,int);
    void withdraw();    
};

class LowBalException : public std ::exception
{
    char msg[50];

public:
    LowBalException() ;
    LowBalException(const char *m);
    // {
    //     strcpy(msg, m);
    // }
    char *what();
    // {
    //     return msg;
    // }
};

#endif // ACCOUNT_H

