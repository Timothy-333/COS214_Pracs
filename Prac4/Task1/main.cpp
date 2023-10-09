#include "NonceHandler.h"
#include "Handler.h"
#include "SignInHandler.h"
#include "TokenValidationHandler.h"
#include "AuthorizationHandler.h"
#include "Request.h"
#include "User.h"
#include "Database.h"
int main() {
    Handler* nonceHandler = new NonceHandler();
    Handler* signInHandler = new SignInHandler();
    Handler* tokenValidationHandler = new TokenValidationHandler();
    Handler* authorizationHandler = new AuthorizationHandler();

    // Connect the handlers in the chain
    nonceHandler->setNextHandler(signInHandler);
    signInHandler->setNextHandler(tokenValidationHandler);
    tokenValidationHandler->setNextHandler(authorizationHandler);

    // Start the process by passing a request to the first handler
    // Create a request
    Database db;
    User user;
    User user1;
    User user2;
    User user3;
    user.private_key = "asdf";
    user.student_number = "u22744968";
    user.private_key = "qwer";
    user.student_number = "u12341234";
    user.private_key = "zxcv";
    user.student_number = "u43214321";
    user.private_key = "tyui";
    user.student_number = "u69420420";
    db.users.push_back(user);
    db.users.push_back(user1);
    db.users.push_back(user2);
    db.users.push_back(user3);

    Request request;
    request.type = RequestType::REQUEST_NONCE;
    request.user = user;
    request.db = db;

    // Start the process by passing the request to the first handler
    nonceHandler->handleRequest(request);

    // Clean up memory (consider using smart pointers for automatic cleanup in real code)
    delete nonceHandler;
    delete signInHandler;
    delete tokenValidationHandler;
    delete authorizationHandler;


    return 0;
}
