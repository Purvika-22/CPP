#include <iostream>
#include "test1.h"
#include "stackoverflow.h"
#include "stackunderflow.h"
int main()
{
    cStack c1;
    try
    {
        c1.push(10);
        c1.push(20);
        c1.push(30);
    }
    catch (StackOverFlow e)
    {
        std::cout << e.what() << '\n';
    }
    catch(std :: exception e)
    {
        std :: cout << e.what() << std :: endl;
    }
    try
    {
        c1.pop();
        c1.pop();
        c1.pop();
    }
    catch (StackUnderFlow e)
    {
        std::cout << e.what() << '\n';
    }

    return 0;
}