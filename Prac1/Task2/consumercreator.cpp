#include "consumercreator.h"
#include "odataconsumer.h"
#include "jsonconsumer.h"
#include <cstring>
#include <iostream>

using namespace std;

void consumerCreator::setConsumer(string c) {
    consumerType = c;
}

string consumerCreator::getConsumer() {
    return consumerType;
}

consumer* consumerCreator::createConsumer() {
    if (consumerType == "OData") {
        return new odataConsumer();
    } else if (consumerType == "JSON") {
        return new jsonConsumer();
    } else {
        // Return nullptr or handle the case when consumerType is unknown
        return nullptr;
    }
}