#include <iostream>
#include "header.h"

Calculator ::Calculator() : xdistance(9), ydistance(9)
{
    int some_array[] = {1, 2, 3, 4, 5};
    arr = new int[5];
    for (int i = 0; i < 5; i++)
    {
        arr[i] = some_array[i];
    }
}
Calculator::Calculator(int *arr_, float x, float y) : arr(nullptr), xdistance(x), ydistance(y)
{
    arr = new int[5];
    for (int i = 0; i < 5; i++)
    {
        arr[i] = arr_[i];
    }
}

Calculator::Calculator(const Calculator &obj) : xdistance(obj.xdistance), ydistance(obj.ydistance)
{
    if (arr != nullptr)
    {
        arr = new int[5];
        for (int i = 0; i < 5; i++)
        {
            arr[i] = obj.arr[i];
        }
    }
}

void Calculator::accept()
{
    // std :: cout << "\n Enter array elements:";
    // for(int i=0;i<10;i++)
    // {
    //     std :: cin >> arr[i];
    // }
    std ::cout << "\n X distance is:";
    std ::cin >> xdistance;
    std ::cout << "\n Y distance is:";
    std ::cin >> ydistance;
}

int Calculator::operator+(int num)
{
    return xdistance + num;
}

Calculator &Calculator ::operator++()
{
    std ::cout << "\nPre-Incre";
    ++xdistance;
    ++ydistance;
    return *this;
}

Calculator Calculator::operator++(int num)
{
    std::cout << "\nPost-incre";
    Calculator object = *this;
    xdistance++;
    ydistance++;
    return object;
}

float Calculator::operator[](int index)
{
    return arr[index] / 10;
}

int Calculator::operator==(const Calculator &c) const
{
    return (xdistance == c.xdistance && ydistance == c.ydistance);
}

void Calculator::display() const
{
    std ::cout << "\n X distance is:" << xdistance;
    std ::cout << "\n Y distance is:" << ydistance;
    std ::cout << "\n Array Ele:";
    for (int i = 0; i < 5; i++)
    {
        std ::cout << arr[i] << "\n";
    }
}

Calculator ::~Calculator()
{
    delete[] arr;
}
