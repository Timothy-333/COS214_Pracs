#include "openglprimitive.h"

float openGLPrimitive::getXCoord() const {
    return xcoord;
}

void openGLPrimitive::setXCoord(float x) {
    xcoord = x;
}

float openGLPrimitive::getYCoord() const {
    return ycoord;
}

void openGLPrimitive::setYCoord(float y) {
    ycoord = y;
}

string openGLPrimitive::toString() {
    return "OpenGL " + shape + ":\n" +
           "X Coordinate: " + to_string(xcoord) + "\n" +
           "Y Coordinate: " + to_string(ycoord);
}