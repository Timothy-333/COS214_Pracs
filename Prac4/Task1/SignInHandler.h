#ifndef SIGN_IN_HANDLER_H
#define SIGN_IN_HANDLER_H

#include "Handler.h"
#include "Request.h"

class SignInHandler : public Handler {
public:
    void handleRequest(Request request) override;
};

#endif // SIGN_IN_HANDLER_H
