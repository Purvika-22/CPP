#include <iostream>
#include "header.h"
#include <cstring>

int Book ::id = 0;

Book ::Book() : Bookid(++id), price(0), NumberOfdaysUsed(20)
{
    strcpy(bookname, "abcd");
    strcpy(authorname, "bnvb");
}

void Book ::calculateFine(int NumberOfdaysUsed)
{

    if (NumberOfdaysUsed > 10 && NumberOfdaysUsed < 20)
    {
        std ::cout << "Charge of your fine is 100 \n";
    }
    else if (NumberOfdaysUsed > 20 && NumberOfdaysUsed < 30)
    {
        std ::cout << "Charge of your fine is 200 \n";
    }
    else if (NumberOfdaysUsed > 30 && NumberOfdaysUsed < 40)
    {
        std ::cout << "Charge of your fine is 300 \n";
    }
    else if (NumberOfdaysUsed > 40)
    {
        std::cout << "Charge of your fine is 500 \n";
    }
}

void search_A(Book b[], int n)
{
    std :: cout << "\n";
    for (int i = 0; i < n; i++)
    {
        if (b[i].getAuthorname()[0] == 'A' || b[i].getAuthorname()[0] == 'a')
        {
            std::cout << "\nAuthorname starts with 'A' : \n";
            b[i].display();
        }
    }
}

void book_lessthan(Book b[], int n)
{
    std :: cout << "\n";
    for (int i = 0; i < n; i++)
    {
        if(b[i].getPrice() < 2500)
        {
            std::cout <<"\nBooks < 2500 : \n";
            b[i].display();
        }
    }
}

void Book ::accept()
{

    std ::cout << "\nenter details:";
    std ::cout << "\n Name of the book:";
    std ::cin >> bookname;

    std ::cout << "\n Author for the book:";
    std ::cin >> authorname;

    std ::cout << "\n Book Price:";
    std ::cin >> price;

    std ::cout << "\n NoOfDays that you have used the book:";
    std ::cin >> NumberOfdaysUsed;

    std :: cout << "\n";

    calculateFine(NumberOfdaysUsed);
}

void Book ::display() const
{
    std ::cout << "\nDisplay details:"<<"\n";

    std ::cout << "\n Book id : " << Bookid;

    std ::cout << "\n Name of the book:\t" << bookname;

    std ::cout << "\n Author for the book:\t" << authorname;

    std ::cout << "\n Book Price:\t" << price;
}
