

#ifndef STACKUNDERFLOW_H
#define STACKUNDERFLOW_H

#include <cstring>
#include <iostream>
class StackUnderFlow : public std::exception
{
    char msg[100];

public:
    StackUnderFlow();
    StackUnderFlow(const char *m);
    char *what();
};

#endif // STACKUNDERFLOW_H
