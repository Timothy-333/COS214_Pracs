#ifndef REQUEST_H
#define REQUEST_H
#include <string>
#include "User.h"
#include "Database.h"
enum class RequestType 
{
    REQUEST_NONCE,
    VALIDATE_SIGNIN_NONCE,
    VALIDATE_TOKEN,
    AUTHORIZED
};

struct Request 
{
    RequestType type;
    std::string nonceKey;
    User user;
    Database db;
    // Add any other data members needed for your requests
};

#endif // REQUEST_H
