
#include <cstring>
#include <iostream>
#include "stackunderflow.h"

    StackUnderFlow::StackUnderFlow()
    {
        strcpy(msg, "Stack is empty");
    }
    StackUnderFlow::StackUnderFlow(const char *m)
    {
        strcpy(msg, m);
    }

    char *StackUnderFlow::what()
    {
        return msg;
    }