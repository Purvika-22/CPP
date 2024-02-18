#ifndef HEADER_H
#define HEADER_H

#include <iostream>

class Calculator
{
private:
    int *arr;
    float xdistance;
    float ydistance;

public:

    Calculator();
    Calculator(int *arr, float x, float y);
    Calculator(const Calculator &obj);
    ~Calculator();

    void accept();
    void display() const;

    int operator+(int num);
    Calculator &operator++();
    Calculator operator++(int num);
    float operator[](int index);
    int operator==(const Calculator &c) const;
    friend std ::ostream &operator<<(std::ostream &os, const Calculator &c);

    int *getArr() const
    {
       return arr;
    }
    void setArr(int *arr_)
    {
        delete [] arr;
        arr = new int[10];
        for (int i = 0; i < 10; i++)
        {
            arr[i] = arr_[i];
        }
    }

    float getYdistance() const { return ydistance; }
    void setYdistance(float ydistance_) { ydistance = ydistance_; }

    float getXdistance() const { return xdistance; }
    void setXdistance(float xdistance_) { xdistance = xdistance_; }
};

#endif // HEADER_H
