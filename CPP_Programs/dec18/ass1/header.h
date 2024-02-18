#ifndef HEADER_H //if not define
#define HEADER_H
#include <ostream>
#include <cstring>
// Evry headers will contains the header guards
class Student // if u are using struct keyword then everything in ur template will be public
{
private:
//instance fields/non static fields // copy is created per object
//attributes of the cls only created when the obj is created
    int rollnum; // these var are local to main
    char name[30];
    double marks; 
    int sub[3];
    // In C++ u can't make a ctor as private
     
    static int x; //only single copy exists
    //default value zero
    //when the class is loaded this will be automatically stored in the memory
    // x will be added in the memory data section
 
public:
//cout<<s1;
friend void operator<<(std::ostream &os, const Student &s2 );
// {
//     os << s2.rollnum; //this can access the private data memebers of the class
//     os << s2.name;
//     os << s2.getMarks();
// }
void operator() ()
{
    display();
}

    Student(int , const char*,int []);

    float calAvg();    

    void accept();
    void display() const;

    Student();                          // default consturctor
    Student(const char *,double);
    Student(int, const char *, double); // parameterized ctor

    int getRollnum() const { return rollnum; } //const keyword required in both defn and declaration
    void setRollnum(int rollnum_) { rollnum = rollnum_; }
    
    char *getName()
    {
        return name;
    }
    void setName(const char *nm)
    {
        strcpy(name, nm);
    }

    double getMarks() const { return marks; }
    void setMarks(double marks_) { marks = marks_; }

    // void display() const;

    static void showX() { }; //static keyword req in the declaration of the function not in the defn
    // static void setX(int x) { Student::x = x; }


    /*
    1. has same name like class name
    2. no return type not even void
    3. **it will be called implicilty only when object is created**
    4. job of constructors is to initiialize attributes or data memebers
    */
};

;

;

#endif // HEADER_H
