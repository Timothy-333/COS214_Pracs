#ifndef NONCE_HANDLER_H
#define NONCE_HANDLER_H

#include "Handler.h"
#include "Request.h"


class NonceHandler : public Handler {
public:
    NonceHandler();
    void handleRequest(Request request) override;
};

#endif // NONCE_HANDLER_H
