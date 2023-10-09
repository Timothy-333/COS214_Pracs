#ifndef TOKEN_VALIDATION_HANDLER_H
#define TOKEN_VALIDATION_HANDLER_H

#include "Handler.h"
#include "Request.h"

class TokenValidationHandler : public Handler 
{
private:
    bool tokenIsValid;
public:
    void handleRequest(Request request) override;
};

#endif // TOKEN_VALIDATION_HANDLER_H
