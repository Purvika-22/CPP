#include<cstring>
#include<iostream>
#include"stackoverflow.h"

    StackOverFlow::StackOverFlow()
    {
        strcpy(msg, "Stack is full");
    }
    StackOverFlow::StackOverFlow(const char *m)
    {
        strcpy(msg, m);
    }
   
    char *StackOverFlow::what()
    {
        return msg;
    }
   