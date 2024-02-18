#include <iostream>
#include <cstring>
int main()
{
    char *s1 = "HI"; // s1 is the non const pointer to const string
    char *s2 = "hello"; 
//     char *s3 = s1 + s2 ;//not works bcoz pointers can't be added
//    char *s3 = strcat(s1, s2); //C++ forbids converting a string constant to ‘char*’
   std :: string s3 = s1;
   s3 = s3 + s2;   
   std :: cout << s3;
}