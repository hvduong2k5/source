#ifndef USERMANAGEMENT_H
#define USERMANAGEMENT_H

#include"user.h"
class UserManagement
{
private:
    User **user_table;
    long long hashUsername(QString);
public:
    void addUser();
    void deleteUser();

    UserManagement();
};

#endif // USERMANAGEMENT_H
