#ifndef DATABASE_H
#define DATABASE_H
#include <vector>
#include "User.h"

struct Database
{
    std::vector<User> users;
};
#endif