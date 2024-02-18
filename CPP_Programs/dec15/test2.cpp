#include <iostream>
#include <cstring> 
//string header from c library
// using namespace std;
int h = 10; // global var
int& fun2() // return by reference
{
    // int c=90;
    // return c; //not possible bcoz it's a local var
    return h;
}
void fun(int &a) // int &a = y; --> pass by reference
{ 
    a = 89;
}

void fun(int *m) // function overloading --> pass by value
{
}

/*
  & --> address operator
  int x;
  int &k = x; //here k is a reference to x
  int *p = &x ; //address
*/
 
/* RETURN BY REFERENCE == even if function gets terminated the var remains same
No local var bcoz when block is terminated */
// never ever return the reference to local only to the global it is good

int &fun3(int *s)
{
    return *s;
}

int main()
{ 
    // Array of references were not allowed
    // references can be initialzed in only single line
    // References can only be used for global var
    // int &q[5]; --> wrong
    // try reference to pointer

    int j = 10;
    j = fun3(&j);
    std :: cout <<"value " << j;
 
    int f = fun2();

    int a = 10, b = 20;
    int *p1 = &a;
    p1 = &b; // pointer is a variable which can take any address

    // int &r1 = a;
    // // int &r1 = b; //NO  bcoz its redeclaration
    // int &r2 = b;
    // int c = r1 + r2; // a+b;

    // POINTERS ARE FLEXIBLE BUT REFERENCE ARE RIGID
    //  reference
    //   int b = 20; //4 bytes are allocated for b
    //   int *p = &b; //p holds the address of b .. p is a pointer
    //   //for reference variable
    //   int &r = b; // r is a reference to b
    //  int &d = 100;
    //  fun(10);
    int y = 90;
    std::cout << "Y value is" << y << std::endl;
    fun(y);  // pass by value
    fun(&y); // pass by reference
    std::cout << "Y value is" << y << std::endl;
 
    // int n = 10;
    // int *arr = new int[n];  //(int *)malloc(n*sizeof(int)); ==> free to be used
    // char *arr1 = new char[20]; //allocates memory for 20 characters

    // char str[40] = "Happy Birthday";
    // int len = strlen(str);
    // std::cout<<"Length is:"<<len<<std::endl;

    // delete [] arr; //deleting the memory to be allocated must to be used like free in C
    // delete [] arr1; // use delete to avoid memory leakage
    // only delete arr1 ; means it is deletes only the very first reference
    // to free the entire array delete [] arr1;

    return 0;
}