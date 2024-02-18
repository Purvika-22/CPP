// #ifndef HEADER_H
// #define HEADER_H

// #include <iostream>
// #include <cstring>
// class Book
// {
//   int Bookid;
//   char bookname[30];
//   char authorname[30];
//   int price;
//   int NumberOfdaysUsed;

//   static int id;

// public:
//   Book();

//   void accept();
//   void display() const;

//   void calculateFine(int);
//   static void search_A(Book[], int);
//   static void book_lessthan(Book[], int);

//   int bookid() const { return Bookid; }
//   void setBookid(int bookid) { Bookid = bookid; }

//   const char *getBookname() const { return bookname; }
//   void setBookname(const char *bookname_) { strcpy(bookname, bookname_); }

//   const char *getAuthorname() const { return authorname; }
//   void setAuthorname(const char *authorname_) { strcpy(authorname, authorname_); }

//   int getPrice() const { return price; }
//   void setPrice(int price_) { price = price_; }

//   int numberOfdaysUsed() const { return NumberOfdaysUsed; }
//   void setNumberOfdaysUsed(int numberOfdaysUsed) { NumberOfdaysUsed = numberOfdaysUsed; }
// };

// #endif // HEADER_H


#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <cstring>

class Book
{
  int Bookid;
  char bookname[30];
  char authorname[30];
  int price;
  int NumberOfdaysUsed;

  static int id;

public:
  Book();

  void accept();
  void display() const;

  void calculateFine(int);
  // static void search_A(Book[], int);
  // static void book_lessthan(Book[], int);

  int bookid() const { return Bookid; }
  void setBookid(int bookid) { Bookid = bookid; }

  const char *getBookname() const { return bookname; }
  void setBookname(const char *bookname_) { std::strcpy(bookname, bookname_); }

  const char *getAuthorname() const { return authorname; }
  void setAuthorname(const char *authorname_) { std::strcpy(authorname, authorname_); }

  int getPrice() const { return price; }
  void setPrice(int price_) { price = price_; }

  int numberOfdaysUsed() const { return NumberOfdaysUsed; }
  void setNumberOfdaysUsed(int numberOfdaysUsed) { NumberOfdaysUsed = numberOfdaysUsed; }
};

   void search_A(Book[], int);
   void book_lessthan(Book[], int);

#endif // HEADER_H
