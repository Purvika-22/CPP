#include "test1.h"
#include <cstring>
#include"stackoverflow.h"
#include"stackunderflow.h"

cStack::cStack()
{
    top = -1;
    size = 2;
    arr = new int[size];
}
cStack::cStack(int s)
{
    top = -1;
    size = s;
    arr = new int[size];
}

bool cStack::isEmpty()
{
    return top == -1;
}

bool cStack::isFull()
{
    return top == size-1;
}

void cStack::push(int ele)
{
    if (isFull())
        throw StackOverFlow("stack is full");
    arr[++top] = ele;
}

int cStack::pop()
{
    if (isEmpty())
        throw StackUnderFlow("stack is empty");
    return arr[top--];
}

int cStack::peek()
{
    if (isEmpty())
        throw "stack is empty";
    return arr[top];
}
