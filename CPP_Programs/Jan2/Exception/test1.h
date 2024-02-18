#ifndef TEST1_H
#define TEST1_H

#include <iostream>

class cStack
{
    int top, size;
    int *arr;

public:
    cStack();
    cStack(int);
    bool isEmpty();
    bool isFull();
    void push(int);
    int pop();
    int peek();
};

#endif // TEST1_H
