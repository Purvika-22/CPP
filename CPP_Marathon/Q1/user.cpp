#include "user.h"
#include <cstring>
User::User()
{
    strcpy(Userid, "19A");
    strcpy(username, "Harish");
    strcpy(Department, "CSE");
}

User::User(const char *uid, const char *uname, const char *depart)
{
    strcpy(Userid, uid);
    strcpy(username, uname);
    strcpy(Department, depart);
}

void User::accept()
{
    std ::cout << "\n**Enter user details**";
    std ::cout << "\nEnter userid :";
    std ::cin >> Userid;
    std ::cout << "\nEnter Username :";
    std ::cin >> username;
    std ::cout << "\nEnter Department :";
    std ::cin >> Department;
}

void User::display()
{

    std ::cout << "\nUserid :" << Userid;
    std ::cout << "\n Username :" << username;
    std ::cout << "\nDepartment :" << Department;
}

char User::operator==(const User &u) const
{
    return u.Department == u.Department;
}

std::istream &operator>>(std::istream &is, User &u)
{
    std ::cout << "\nEnter userid :";
    is >> u.Userid;
    std ::cout << "\nEnter Username :";
    is >> u.username;
    std ::cout << "\nEnter Department :";
    is >> u.Department;
    return is;
}

void find(User u[], int size, char element[])
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (strcmp(u[i].getDepartment(), element) == 0)
        {
            u[i].display();
            count++;
        }
    }
    if (count == 0)
    {
        throw NoUserFound("exception");
    }
}

NoUserFound::NoUserFound(const char *msg)
{
    strcpy(message, msg);
}

char *NoUserFound::what()
{
    return message;
}
