#include "primitive.h"

primitive::primitive() {
}

string primitive::getShape() const {
    return shape;
}

void primitive::setShape(string shape) {
    this->shape = shape;
}
