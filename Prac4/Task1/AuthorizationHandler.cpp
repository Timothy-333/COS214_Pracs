#include "AuthorizationHandler.h"

void AuthorizationHandler::handleRequest(Request request) 
{
    cout << "Your result is " << request.user.student_number << endl;
}
