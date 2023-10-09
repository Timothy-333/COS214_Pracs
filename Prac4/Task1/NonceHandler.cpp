#include "NonceHandler.h"

NonceHandler::NonceHandler() : Handler()
{

}

void NonceHandler::handleRequest(Request request) 
{
    if (request.type == RequestType::REQUEST_NONCE) 
    {
        long timestamp = std::time(nullptr);
        int randomNum = std::rand();
        string nonceValue = std::to_string(timestamp) + "-" + std::to_string(randomNum);

        request.nonceKey = nonceValue;
        std::cout << "Generated and persisted nonce: " << nonceValue << std::endl;
    } 
    if (nextHandler != nullptr) 
    {
        request.type = RequestType::VALIDATE_SIGNIN_NONCE;
        nextHandler->handleRequest(request);
    }
}
