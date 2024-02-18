#ifndef HEADER_H
#define HEADER_H

#include <iostream>
class MyDate
{
public:
    int day;
    int month;
    int year;

public:
    MyDate();
    MyDate(int day, int mon, int year);
    void accept();
    void display();

    friend std::ostream &operator<<(std::ostream &os,const MyDate &d);

    int getDay() const { return day; }
    void setDay(int day_) { day = day_; }

    int getMonth() const { return month; }
    void setMonth(int month_) { month = month_; }

    int getYear() const { return year; }
    void setYear(int year_) { year = year_; }
};

#endif // HEADER_H
