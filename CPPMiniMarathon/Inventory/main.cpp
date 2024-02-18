// #include <iostream>
// #include "header.h"
// int main()
// {
//     Inventory *in_arr = new Inventory[100];
//     int index = 0;
//     int ch;
//     int purchase_index = -1;
//     do
//     {
//         std ::cout << "\n***WELCOME***"
//                    << "\n";
//         std ::cout << "\n Choose an option:"
//                    << "\n";
//         std ::cout << "\n1.Add a new stock"
//                    << "\n";
//         std ::cout << "\n2.Sell a stock"
//                    << "\n";
//         std ::cout << "\n3.Search the stock"
//                    << "\n";
//         std ::cout << "\n4.Purchase Stock"
//                    << "\n";
//         std ::cout << "\n5.Display"
//                    << "\n";
//         std ::cout << "\n6.Quit"
//                    << "\n";
//         std ::cout << "\nEnter your choice:"
//                    << "\n";
//         std ::cin >> ch;
//         switch (ch)
//         {
//         case 1:
//             in_arr[++index].accept();
//             break;
//         case 2:
//             if (index > 0)
//             {
//                 std ::cout << "\nEnter for which product code you have to sell the stock :";
//                 int sell_pro_code;
//                 std ::cin >> sell_pro_code;
//                 int sell_index = -1;
//                 for (int i = 0; i < index; i++)
//                 {
//                     if (in_arr[i].getProductCode() == sell_pro_code)
//                     {
//                         sell_index = i;
//                         break;
//                     }
//                 }
//                 if (sell_index != -1)
//                 {
//                     in_arr[sell_index].sell_stock();
//                     for (int i = 0; i < index; i++)
//                     {
//                         in_arr[i].display();
//                     }
//                 }
//                 else
//                 {
//                     std::cout << "\nNo stocks available to sell.\n";
//                 }
//             }
//             break;
//         case 3:
//             std ::cout << "\nEnter the product code to be search:";
//             int in_search;
//             std ::cin >> in_search;
//             Inventory::search(in_arr, index, in_search).display();
//             // search(in_arr, index, in_search);
//             break;
//         case 4:

//             std ::cout << "\nEnter for which product code you have to purchase the stock :";
//             int purchase_pro_code;
//             std ::cin >> purchase_pro_code;
//             purchase_index = -1;
//             for (int i = 0; i < index; i++)
//             {
//                 if (in_arr[i].getProductCode() == purchase_pro_code)
//                 {
//                     purchase_index = i;
//                     break;
//                 }
//             }
//             if (purchase_index != -1)
//             {
//                 in_arr[purchase_index].purchase_stock();
//                 for (int i = 0; i < index; i++)
//                 {
//                     in_arr[i].display();
//                 }
//             }
//             else
//             {
//                 std::cout << "\nProduct not found";
//             }

//             break;

//         case 5:
//             if (index > 0)
//             {
//                 for (int i = 0; i < index; i++)
//                 {
//                     in_arr[i].display();
//                 }
//             }
//             else
//             {
//                 std ::cout << "\n Nothing to display";
//             }
//             break;
//         case 6:

//             std::cout << "\n**QUIT**"
//                       << "\n";
//             break;
//         default:
//             std::cout << "\n Invalid choice"
//                       << "\n";
//             break;
//         }
//     } while (ch != 6);

//     delete[] in_arr;

//     return 0;
// }

#include <iostream>
#include "header.h"
int main()
{

    Inventory *in_ = new Inventory[100];
    int index = -1;
    int ch;
    do
    {
        std ::cout << "\n***WELCOME***"
                   << "\n";
        std ::cout << "\n Choose an option:"
                   << "\n";
        std ::cout << "\n1.Add a new stock"
                   << "\n";
        std ::cout << "\n2.Sell a stock"
                   << "\n";
        std ::cout << "\n3.Search the stock"
                   << "\n";
        std ::cout << "\n4.Purchase Stock"
                   << "\n";
        std ::cout << "\n5.Display"
                   << "\n";
        std ::cout << "\n6.Quit"
                   << "\n";
        std ::cout << "\nEnter your choice:"
                   << "\n";
        std ::cin >> ch;

        switch (ch)
        {
        case 1:
            try
            {
                if (index >= 100)
                    throw "Full";
                else
                    in_[index++].accept();
            }
            catch (const char *e)
            {
                std::cerr << e << '\n';
            }
            break;
        case 2:
        if(index > 0)
        {
            int pro_code;
            std :: cout <<"\nEnter pro_code :";
            std :: cin >> pro_code;
            int pro_index = -1;
            for(int i=0;i<index;i++)
            {
                if(in_[i].getProductCode() ==pro_code)
                pro_index = i;
                break;
            }
            if(pro_index != -1)
            {
                in_[pro_index].sell_stock();
            }
            else{
                std::cout<<"\n Ntng to sell";
            }

        }

        default:
            break;
        }

    } while (ch != 5);

    return 0;
}


/*----------------------------inventory.h--------------------------------------
#include<cstring>
class Inventory
{
    static int productcounter;
    int pcode;
    char *description;
    int stockbalance;
    public:
        Inventory();
        Inventory(const char *description_,int stockbalance_);
        Inventory(const Inventory &other);

        void accept();
        void display();

        void sell_stock();
        void purchase_stock();

        

        const char *getDescription() const
        { 
            return description;
        }
        void setDescription(const char *description_)
        { 
            description=new char[strlen(description_)+1];
            strcpy(description,description_);
        }

        int getStockbalance() const { return stockbalance; }
        void setStockbalance(int stockbalance_) { stockbalance = stockbalance_; }

        int getPcode() const { return pcode; }
        void setPcode(int pcode_) { pcode = pcode_; }

        ~Inventory();

};

Inventory search(Inventory I[],int size,int se);


-----------------------------------------inventory.cpp---------------------------------------------------------------
#include "inventory.h"
#include<iostream>

int Inventory::productcounter=1;
Inventory::Inventory():pcode(productcounter++),stockbalance(10)
{
    description=new char[20];
    strcpy(description,"Good");
}

Inventory::Inventory(const char *description_, int stockbalance_):pcode(productcounter++),stockbalance(stockbalance_)
{
    description=new char[strlen(description_)+1];
    strcpy(description,description_);
}

Inventory::Inventory(const Inventory &other):pcode(other.pcode),stockbalance(other.stockbalance)
{
    description=new char[strlen(other.description)+1];
    strcpy(description,other.description);
}

void Inventory::accept()
{
    delete[] description;
    description=new char[20];
    std::cout<<"Enter description:";
    std::cin>>description;
    std::cout<<"Enter stockbalance:";
    std::cin>>stockbalance;
}

void Inventory::display()
{
    std::cout<<"Pcode is:"<<pcode<<std::endl;
    std::cout<<"Description is:"<<description<<std::endl;
    std::cout<<"stock balance is:"<<stockbalance<<std::endl;
}

void Inventory::sell_stock()
{
    int stock;
    std::cout<<"Enter how many stocks you want to sell";
    std::cin>>stock;
    stockbalance=stockbalance+stock;
}

void Inventory::purchase_stock()
{
    int stock;
    std::cout<<"Enter how many stocks you want to purchase";
    std::cin>>stock;
    if(stockbalance<stock)
        throw "low balance"; 
    else
    {
        stockbalance=stockbalance-stock;
    }
    
    
    
}

Inventory search(Inventory I[], int size, int se)
{
    int index=0;
    for(int i=0;i<size;i++)
    {
        if(I[i].getPcode()==se)
        {
            index=i;
            break;
        }
    }
    return I[index];
}

Inventory::~Inventory()
{
    delete[] description;
}

------------------------------------------------main.cpp------------------------------------------------------------------------
#include <iostream>
#include "inventory.h"

int main()
{

    Inventory *I = new Inventory[10];
    int flag = 1;
    int index = -1;
    while (flag)
    {
        int ch;
        std::cout << "Enter 1)accept\n2)display\n3)search\n4)purchasestock\n5)sellstock\n6)Exit\n";
        std::cin >> ch;

        switch (ch)
        {
        case 1:
            try
            {
                if (index >= 1)
                    throw "Limit Reached";
                index = index + 1;
                I[index].accept();
            }
            catch (const char *msg)
            {
                std::cout << msg << std::endl;
                flag = 0;
            }
            break;
        case 2:
            for (int i = 0; i <= index; i++)
            {
                I[i].display();
            }
            break;
        case 3:
            int se;
            std::cout << "Enter search element:";
            std::cin >> se;
            search(I, index + 1, se).display();
            break;
        case 4:
            try
            {
                int pc;
                std::cout << "Enter pc you want to purchase stock:";
                std::cin >> pc;
                for (int i = 0; i <= index; i++)
                {
                    if (I[i].getPcode() == pc)
                    {
                        I[i].purchase_stock();
                        break;
                    }
                }
            }
            catch (const char *msg)
            {
                std::cout << msg;
                flag = 0;
            }

            break;
        case 5:
            int pco;
            std::cout << "Enter pc you want to sell stock:";
            std::cin >> pco;
            for (int i = 0; i <= index; i++)
            {
                if (I[i].getPcode() == pco)
                {
                    I[i].sell_stock();
                    break;
                }
            }
            break;
        case 6:
            flag = 0;
            break;
        default:
            std::cout << "Invalid choice:" << std::endl;
        }
    }
    delete[] I;

    return 0;
}
*/