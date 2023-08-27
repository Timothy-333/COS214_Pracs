#include "ship.h"

string ship::getShipName() {
    return shipName;
}

void ship::setShipName(string s) {
    shipName = s;
}

int ship::getShipId() {
    return shipId;
}

void ship::setShipId(int i) {
    shipId = i;
}

// Implement the clone() function here
ship* ship::clone() {
    // You need to implement the logic for cloning the ship object.
    // Depending on your use case, you might need to perform a shallow or deep copy.
    // For this example, let's assume we want a shallow copy:
    return new ship(*this);
}
