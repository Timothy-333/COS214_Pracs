#include "vulkanprimitive.h"

float vulkanPrimitive::getXCoord() const {
    return xcoord;
}

void vulkanPrimitive::setXCoord(float x) {
    xcoord = x;
}

float vulkanPrimitive::getYCoord() const {
    return ycoord;
}

void vulkanPrimitive::setYCoord(float y) {
    ycoord = y;
}

string vulkanPrimitive::toString() {
    return "Vulkan " + shape + "\n" +
           "X Coordinate: " + to_string(xcoord) + "\n" +
           "Y Coordinate: " + to_string(ycoord);
}


