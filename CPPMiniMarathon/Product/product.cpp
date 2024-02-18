#include "product.h"
#include <cstring>

int Product ::id = 1;
Product ::Product() : price(90), taxAmt(10) ,productId(id++)
{
    name = new char[20];
    strcpy(name, "first_item_laptop");
    strcpy(brand, "lenovo");
}

Product ::Product(const char *name_, const char *brand_, float p, float ta_)
    :productId(id++), price(p), taxAmt(ta_)
{
    name = new char[strlen(name_) + 1];
    strcpy(name, name_);
    strcpy(brand, brand_);
}

Product ::~Product()
{
    delete[] name;
}

Product::Product(const Product &p)
{
    productId = p.productId;
    price = p.price;
    taxAmt = p.taxAmt;
    name = new char[strlen(p.name) + 1];
    strcpy(name, p.name);
    strcpy(brand, p.brand);
}

void Product::accept()
{
    std ::cout << "\nEnter product name : ";
    std ::cin >> name;
    std ::cout << "\nEnter price :";
    std ::cin >> price;
    std ::cout << "\nEnter tax amount:";
    std ::cin >> taxAmt;
    std ::cout << "\nEnter Brand:";
    std ::cin >> brand;
}

void Product::display()
{
    std ::cout << "\nProduct id:" << productId;
    std ::cout << "\nYour product name : " << name;
    std ::cout << "\nPrice :" << price;
    std ::cout << "\nTax amount:" << taxAmt;
    std ::cout << "\nBrand :" << brand;
    std :: cout << "\n" <<std::endl;
}

int Product::calTax()
{
    if (price > 10000)
    {
        taxAmt = 0.05 * price;
    }
    else
    {
        taxAmt = 0.01 * price;
    }
    return taxAmt;
}

int calculateTotalTax(Product p[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + p[i].getTaxAmt();
    }
    return sum;
}

float avgPrice(Product p[], int n)
{
    int sum = 0;
    int avg = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + p[i].getPrice();
    }
    avg = sum / (n+1);
    return avg;
}

int highestPrice(Product p[], int n)
{
    int max = 0;
    for (int i = 0; i <= n; i++)
    {
        if (max < p[i].getPrice())
        {
            max = p[i].getPrice();
        }
    }
    return max;
}

Product searchProductByID(Product p[], int n, int search)
{
    int index;
    for (int i = 0; i < n; i++)
    {
        if (p[i].getProductId() == search)
        {
            index = i;
            // p[i].display();
        }
        else{
            throw "Not found exception";
        }
    }
    return p[index];
}

Product searchProductByBrand(Product p[], int n, const char element[])
{
    int index;
    for (int i = 0; i < n; i++)
    {
        if (strcmp(p[i].getBrand(), element) == 0)
        {
            index = i;
            // p[i].display();
        }
    }
    return p[index];
}

std::ostream &operator<<(std::ostream &os, const Product &pobj)
{
    os << "\nProduct id:" << pobj.productId;
    std ::cout << "\nYour product name : " << pobj.name;
    std ::cout << "\n Price :" << pobj.price;
    std ::cout << "\nTax amount:" << pobj.taxAmt;
    std ::cout << "\nTax amount:" << pobj.brand;
    return os;
}
