#ifndef HEADER_H //if not define
#define HEADER_H

#include <cstring>

class Student 
{
private:

    int rollnum; 
    char name[30];
    double marks;
    static int x; 
    static int cnt;
    
public:

    int getRollnum() const { return rollnum; } 
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

    void display() const;
    void accept();
   
    Student();
    Student(const char *, double); 

    static void showX() { }; 


   
};

;

;

#endif // HEADER_H
