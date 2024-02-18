#include "product.h"
#include <cstring>

int main()
{
    Product *p = new Product[3];
    int index = -1;
    int ch;
    do
    {
        std::cout << "\n-----------WELCOME------------" << std::endl;
        std::cout << "Choose an Option" << std::endl;
        std::cout << "1.Add Products" << std::endl;
        std::cout << "2.Display ALL Products" << std::endl;
        std::cout << "3.Search BY Product Id" << std::endl;
        std::cout << "4.Search BY Brand" << std::endl;
        std::cout << "5.Display Highest Price" << std::endl;
        std::cout << "6.Display Average Price" << std::endl;
        std::cout << "7.Total Tax Amount" << std::endl;
        std::cout << "8.Quit..." << std::endl;
        std ::cin >> ch;
        switch (ch)
        {
        case 1:
            p[++index].accept();
            break;
        case 2:
            for (int i = 0; i <= index; i++)
            {
                p[i].display();
            }
            break;
        case 3:
        try
         {   std ::cout << "\nEnter the product ID to be search :";
            int search;
            std ::cin >> search;
            searchProductByID(p, index + 1, search).display();
         }
         catch(const char * msg)
         {
            std :: cout << msg << std::endl;
         }
            break;
        case 4:
            std ::cout << "\nEnter the product brand to be search :";
            char ele[20];
            std ::cin >> ele;
            searchProductByBrand(p, index + 1, ele).display();
            break;
        case 5:
            std ::cout << "\nHighest Price is:"<<highestPrice(p, index + 1);
            break;
        case 6:
            std ::cout << "\nAvg Price is:"<<avgPrice(p, index + 1);
            break;
        case 7:
            std ::cout << "\nTotal tax is:"<<calculateTotalTax(p, index + 1);
            break;
        case 8:
            std::cout << "**QUIT**";
            break;
        default:
            std ::cout << "\n Invalid choice";
            break;
        }

    } while (ch != 8);
    delete[] p;
    return 0;
}