#include <iostream>
#include "date.h"
#include "customer.h"
#include "bill.h"

int Bill ::billid = 0;

Bill::Bill() : billNum(billid++), c(Customer())
{
}

Bill::Bill(Customer cus,int billAmt_) : billNum(billid++), c(cus), billAmt(billAmt_)
{
}

void Bill::accept()
{
    std ::cout << "\nEnter your bill amt:";
    std::cin >> billAmt;
    c.accept();
}

void Bill::display()
{
    std ::cout << "\nBill Number :" << billid;
    std ::cout << "\nBill Amt :" << billAmt;
    c.display();
}

std::ostream &operator<<(std::ostream &os, const Bill &bill)
{
    std ::cout << "\nBill Number :" << bill.billid;
    std ::cout << "\nBill Amt :" << bill.billAmt;
    return os;
}

