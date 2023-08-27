#include "window.h"

int window::getScreenHeight() const {
    return screenHeight;
}

void window::setScreenHeight(int height) {
    screenHeight = height;
}

int window::getScreenWidth() const {
    return screenWidth;
}

void window::setScreenWidth(int width) {
    screenWidth = width;
}

int window::getPrimitiveCount() const {
    return primitiveCount;
}

void window::setPrimitiveCount(int count) {
    primitiveCount = count;
}

int window::getPrimitiveCapacity() const {
    return primitiveCapacity;
}

void window::setPrimitiveCapacity(int capacity) {
    primitiveCapacity = capacity;
}
window::~window() {
    
}