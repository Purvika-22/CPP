#include <iostream>
#include "header.h"

// void search_A(Book b[], int n);
// void book_lessthan(Book b[], int n);

int main()
{
    Book b;
    // b.display();

    int n = 3;

    Book book[3];

    for (int i = 0; i < 3; i++)
    {
        book[i].accept();
        book[i].display();
    }

    search_A(book,n);
    book_lessthan(book,n);

    return 0;
}






 
