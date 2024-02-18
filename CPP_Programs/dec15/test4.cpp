#include <iostream>
void fun(int a, int b = 0, int c = 0);
void fun(int, int = 0, int = 0);

// initialize values only in the case of declaration not in the definition of the function

void fun(int a, int b = 0, int c = 0)
// this function can work with 3 and 2 and 1 arguments
{
}

// void fun(int a = 0, int b, int c) //--> wrong
// // Initialization of default values should starts from right not from left
// {
// }

// void fun(int a, int b = 0, int c) // NA
// {
// }

void fun(int a, int b = 0, int c = 0)
// Initialization of default values should starts from right not from left
{
}
int main()
{
    fun(10, 20, 30);
    fun(10, 20);
    fun(10);
    // fun(10, ,70);// NA if you skip the value for b then you should skp it for c
    return 0;
}