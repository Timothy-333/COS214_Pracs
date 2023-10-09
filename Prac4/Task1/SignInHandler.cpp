#include "SignInHandler.h"

void SignInHandler::handleRequest(Request request) 
{
    if (request.type == RequestType::VALIDATE_SIGNIN_NONCE) 
    {
        std::vector<User>::iterator it;
        for (it = request.db.users.begin(); it != request.db.users.end(); ++it) 
        {
            if (it->private_key == request.user.private_key && it->student_number == request.user.student_number) 
            {
                cout << "Signature valid" << endl;
                if (nextHandler != nullptr)
                {
                    long timestamp = std::time(nullptr);
                    int randomNum = std::rand();
                    string token = std::to_string(timestamp) + "-" + std::to_string(randomNum);
                    cout << "Token generated: " << token << endl;
                    it->token = token;
                    request.user.token = token;
                    request.type = RequestType::VALIDATE_TOKEN;
                    nextHandler->handleRequest(request);
                    return;
                }
            }
        }
        cout << "Failed to sign in, user not found" << endl;
    } 
    else if (nextHandler != nullptr)
    {
        nextHandler->handleRequest(request);
    }
}
