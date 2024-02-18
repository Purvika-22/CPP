#include <iostream>
int main()
{
    // int a = 10;
    // const int *p = &a; //(P is a non const pointer to constant integer)

    // int b=20;
    // p=&b;
    // *p =20; //error 

    int a = 20;
    int *const p = &a; //const pointer to non constant integer
    int b=30;
   // p=&b; //error
    *p=10;//yes the var it is pointing it  can chnage the value


    int a=10;
    int b=20;
    const int * const p = &a;//constant pointer to constant integer
    // p=&b;//error
    // *p=20;//error

    

}