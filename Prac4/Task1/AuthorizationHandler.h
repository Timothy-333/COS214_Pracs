#ifndef AUTHORIZATION_HANDLER_H
#define AUTHORIZATION_HANDLER_H

#include "Handler.h"
#include "Request.h"

class AuthorizationHandler : public Handler {
public:
    void handleRequest(Request request) override;
};

#endif // AUTHORIZATION_HANDLER_H
