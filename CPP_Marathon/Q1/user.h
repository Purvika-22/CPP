#ifndef USER_H
#define USER_H

#include <iostream>
#include<cstring>

class NoUserFound : public std :: exception
{
    char message[100];
    public:
    NoUserFound(const char *msg);
    char *what();

};

class User
{
    char Userid[30];
    char username[20];
    char Department[30];

public:
    User();
    User(const char*,const char*,const char*);
    void accept();
    void display();

    friend std::istream &operator>>(std::istream &is, User &u);

    char operator==(const User &u) const;

    

    const char *userid() const { return Userid; }
    void setUserid(const char *userid) { strcpy(Userid, userid); }

    const char *getUsername() const { return username; }
    void setUsername(const char *username_) { strcpy(username, username_); }

    const char *getDepartment() const { return Department; }
    void setDepartment(const char *department) { strcpy(Department, department); }
};

void find(User[], int, char[]);

#endif // USER_H
