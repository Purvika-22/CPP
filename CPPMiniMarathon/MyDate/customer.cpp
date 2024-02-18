#include "customer.h"
#include <cstring>

Customer::Customer() : date(MyDate())
{
    strcpy(name, "purvika");
}

Customer::Customer(const char *name_, MyDate d) : date(d)
{
    strcpy(name, name_);
}

Customer::Customer(const Customer &object)
{
}

void Customer::accept()
{
    std ::cout << "\nEnter name: ";
    std ::cin >> name;
    date.accept();
}

void Customer::display()
{
    std ::cout << "\n Name of the customer: " << name;
    date.display();
}

std::ostream &operator<<(std::ostream &os, const Customer &c)
{
    // TODO: insert return statement here
    std ::cout << "\n Name of the customer: " << c.name;
    return os;
}
