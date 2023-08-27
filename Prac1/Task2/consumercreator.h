#ifndef CONSUMERCREATOR_H
#define CONSUMERCREATOR_H

#include <string>
#include "consumer.h"
#include "odataconsumer.h"
#include "jsonconsumer.h"

using namespace std;

class consumerCreator {
public:
    string consumerType;

    consumerCreator() {}
    
    void setConsumer(string c);
    string getConsumer();
    consumer* createConsumer();
};

#endif