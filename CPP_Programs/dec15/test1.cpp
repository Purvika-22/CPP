#include <iostream>
//not <iosream.h> global namespace
//<istream> => only u can use cin obj
//-istream is a class.. cin is the object of istream class
//<ostream> => only u can use cout obj
//--cout is an object for ostream class
// include headers from strandard namespace
// namespace is a library in c++
// using namespace std;
// it's a bundle of classes functions and variables are bundled into namespace 
//  :: scope resolution
// printf() --> () bcoz it's a function
// cout is an object that is y insertion operator
int main()
{

    // std::cout<<"\n hello "<<std::endl; //<< insertion operator // >> extarction operator
    // // endl are the special objects or var designed to be used only with cout
    // int n1, n2;
    // std :: cout << "Enter two numbers:" << std :: endl;
    // std :: cin >> n1 >> n2; // cascading effect
    // int sum = n1 + n2;
    // std::cout << "Sum of two numbers :" << sum << std::endl;
    // return 0;

    int num1;
    std :: cout <<"Enter num1:";
    std :: cin >> num1;
    int num2;
    std :: cout << "Enter num2:";
    std :: cin >> num2;
    int sum = num1 + num2;
    std :: cout <<"Sum of num1 and num2 is: "<<sum;
    return 0;
}