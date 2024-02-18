// #include "header.h"
// #include <cstring>
// #include <iostream>

// int Inventory ::id = 1;
// Inventory::Inventory() : product_code(id++), balance_stock(10)
// {
//     strcpy(description_of_product, "First_Item");
// }

// Inventory::Inventory(const char *des, int bal)
//     : product_code(id++), balance_stock(bal)
// {
//     strcpy(description_of_product, des);
// }

// Inventory::Inventory(const Inventory &obj)
// {
//     product_code == id++;
//     balance_stock = obj.balance_stock;
//    // description_of_product = new char[strlen(obj.description_of_product) + 1];
//     strcpy(description_of_product, obj.description_of_product);
// }

// void Inventory::accept()
// {
//   //  description_of_product = new char[90];
//     std ::cout << "\n Enter the descrption:";
//     std::cin>>description_of_product ;
//     std ::cout << "\n Balance Stock:";
//     std ::cin >> balance_stock;
// }

// Inventory ::~Inventory()
// {
//     //delete[] description_of_product;
// }

// void Inventory::display() const
// {
//     std ::cout << "\n Product Code:"
//                << product_code;
//     std ::cout << "\n Enter the descrption:"
//                << description_of_product;
//     std ::cout << "\n Balance Stock:"
//                << balance_stock;
// }

// void search(Inventory in[], int size, int search)
// {
//     // int index = 0;
//     for (int i = 0; i < size; i++)
//     {
//         if (in[i].getProductCode() == search)
//         {
//             // index = i;
//             in[i].display();
//             break;
//         }
//     }
//     // return in[index];
// }

// void Inventory::purchase_stock()
// {
//     int purchase_stock;
//     std ::cout << "\nEnter the purchase stock:";
//     std ::cin >> purchase_stock;
//     balance_stock += purchase_stock;
// }

// void Inventory::sell_stock()
// {
//     int sell_stock = 0;
//     std ::cout << "\n Enter the sell stock:";
//     std ::cin >> sell_stock;
//     balance_stock -= sell_stock;
// }

// std::ostream &operator<<(std::ostream &os, const Inventory &inventory)
// {
//     std ::cout << "\n Product Code:"
//                << inventory.product_code;
//     std ::cout << "\n Enter the descrption:"
//                << inventory.description_of_product;
//     std ::cout << "\n Balance Stock:"
//                << inventory.balance_stock;
//     return os;
// }

#include "header.h"
#include <iostream>

/*    char * des;
    int product_code;
    int balance_stock;
    static int id;*/
int Inventory ::id = 0;
Inventory::Inventory() : product_code(++id), balance_stock(200)
{
    des = new char[20];
    strcpy(des, "first");
}

Inventory::Inventory(const char *des_, int b) : balance_stock(b), product_code(++id)
{
    strcpy(des, des_);
}

Inventory::Inventory(const Inventory &i) : product_code(i.id), balance_stock(i.balance_stock)
{
    des = new char[strlen(i.des) + 1];
    strcpy(des, i.des);
}

Inventory Inventory::search(Inventory I[], int n, int element)
{
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if (I[i].getProductCode() == element)
        {
            index = i;
            break;
        }
    }
    return I[index];

}

void Inventory::accept()
{
    delete[] des;
    des = new char[20];
    std::cout << "\nEnter des :";
    std ::cin >> des;
    std ::cout << "\nEnter bal_stock : ";
    std::cin >> balance_stock;
}

void Inventory::display()
{
    std ::cout << "\nProduct code :" << product_code;
    std::cout << "\nEnter des :" << des;
    std ::cout << "\nEnter bal_stock : " << balance_stock;
}

void Inventory::sell_stock()
{
    int sell_stock = 0;
    std ::cout << "\n Enter the sell stock:";
    std ::cin >> sell_stock;
    balance_stock += sell_stock;
}

void Inventory::purchase_stock()
{
    int purchase_stock = 0;
    std ::cout << "\n Enter the how many stocks to purchase:";
    std ::cin >> purchase_stock;
    if (balance_stock < purchase_stock)
        throw "Low BaL";
    else
        balance_stock -= purchase_stock;
}

// Inventory search(Inventory I[], int n, int element)
// {
//     int index = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (I[i].getProductCode() == element)
//         {
//             index = i;
//             break;
//         }
//     }
//     return I[index];
// }
