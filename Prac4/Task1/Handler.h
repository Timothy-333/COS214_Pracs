#ifndef HANDLER_H
#define HANDLER_H

#include "Request.h"
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Handler {
public:
    virtual void handleRequest(Request request) = 0;
    void setNextHandler(Handler* next) { nextHandler = next; }
    virtual ~Handler() {}

protected:
    Handler* nextHandler = nullptr;
};

#endif // HANDLER_H
