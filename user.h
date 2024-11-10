#ifndef USER_H
#define USER_H
#include "dictionary.h"
class UserManagement;
class User
{
    string username;
    string password;
    Dictionary user_dict;
    int role;
public:
    User();
    friend class UserManagement;
};

#endif // USER_H
