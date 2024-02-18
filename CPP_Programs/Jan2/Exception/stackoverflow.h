#ifndef STACKOVERFLOW_H
#define STACKOVERFLOW_H
#include<cstring>
#include<iostream>

class StackOverFlow : public std::exception
{
    char msg[100];

public:
    StackOverFlow();
    StackOverFlow(const char *m);
    char *what();
};

#endif // STACKOVERFLOW_H
