// #include"header.h"
// #include<iostream>

// int main()
// {
//     Loan *l=new Loan[10];
//     int flag=1;
//     int index=0;
//     while(flag)
//     {
//         try
//         {
//             int ch;
//             std::cout<<"1)Accept\n2)display\n3)search\n4)highestcustomer\n5)exit"<<std::endl;
//             std::cin>>ch;
//             switch(ch)
//             {
//                 case 1:
//                 if(index<5 && index>=0)
//                 {
//                     l[index++].accept();
//                      break;
//                 }
//                 else
//                 {
//                     throw "only 5 objects are allowed";

//                 }
//                 case 2:
//                 if(index > 0){
//                     for(int i=0;i<index;i++)
//                     {
//                         l[i].display();
//                     }
//                     }
//                     else
//                     {
//                     throw "Nothing to display";
//                     }

//                     break;
//                      case 3:

//                     try
//                     {
//                         int sear;
//                         std::cout<<"Enter search element:";
//                         std::cin>>sear;
//                         search(l,index,sear).display();
//                     }
//                     catch(const char* msg1)
//                     {
//                         std::cout<<msg1;
//                         flag=0;
//                     }
//                     break;
//                 case 4:
//                     highestinterest(l,index).display();
//                     break;
//                 case 5:
//                     flag=0;
//                     break;
//                 default:
//                     std::cout<<"Invalid choice";

//             }
//         }
//          catch(const char *msg)
//         {
//             std::cout<<msg;
//             flag=0;
//         }
//     }

//     delete[] l;

//     return 0;
// }

#include <iostream>
#include "header.h"

int main()
{
    Loan *l = new Loan[10];
    bool flag = true;
    int index = -1;

    while (flag)
    {
        int choice;
        std::cout << "Enter your choice:";
        std::cout << " 1. Accept "
                  << "\n";
        std::cout << " 2. Display "
                  << "\n";

        std::cout << " 3. Search "
                  << "\n";

        std::cout << " 4. High Customer  "
                  << "\n";

        std::cout << " 5. EXIT!! "
                  << "\n";

        std::cin >> choice;
        switch (choice)
        {
        case 1:
            if (index >= -1 && index < 10)
            {
                l[++index].accept();
            }
            break;
        case 2:
            for (int i = 0; i <= index; i++)
            {
                l[i].display();
            }
            break;
        case 3:
            int s;
            std::cout << "Enter the element to search:"
                      << "\n";
            std::cin >> s;
            search(l, index, s).display();
            break;

        case 4:
            highestinterest(l, index).display();
            break;
        case 5:
            flag = false;
            break;

        default:
            break;
        }
    }

    delete[] l;
}