#include "TokenValidationHandler.h"

void TokenValidationHandler::handleRequest(Request request) 
{
    tokenIsValid = false;
    if (request.type == RequestType::VALIDATE_TOKEN) 
    {
        std::vector<User>::const_iterator it;
        for (it = request.db.users.begin(); it != request.db.users.end(); ++it) 
        {
            if (it->token == request.user.token) 
            {
                tokenIsValid = true;
            }
        }
        if (tokenIsValid) 
        {
            cout << "Token is valid" << endl;
            if (nextHandler != nullptr) 
            {
                request.type = RequestType::AUTHORIZED;
                nextHandler->handleRequest(request);
            }
        } 
        else 
        {
            cout << "Token is invalid" << endl;
        }
    } else {
        // Pass to the next handler
        if (nextHandler != nullptr) 
        {
            nextHandler->handleRequest(request);
        }
    }
}
