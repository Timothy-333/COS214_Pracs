#include "openglwindow.h"
#include "openglprimitive.h"

openGLPrimitive* openGLWindow::getPrimitives() const {
    return primitives;
}
openGLWindow::openGLWindow() {
}
void openGLWindow::setPrimitives(openGLPrimitive* newPrimitives) {
    // Limit the number of primitives to 3
    int newPrimitiveCount = 0;
    this->primitives = new openGLPrimitive[primitiveCapacity];
    if (newPrimitives) {
        // Copy up to 3 primitives from the newPrimitives array to the primitives array
        for (int i = 0; i < 3; ++i) 
        {
            if (newPrimitives) 
            {
                ++newPrimitiveCount;
            } else {
                break;  // Stop copying if encountering a nullptr
            }
        }

        this->primitiveCount = newPrimitiveCount;
        for (int i = 0; i < newPrimitiveCount; ++i) 
        {
            if (newPrimitives != nullptr) 
            {
                primitives[i] = newPrimitives[i];
            } 
        }
    }
}

string openGLWindow::toString() {
    string result = "OpenGL window " + to_string(getScreenWidth()) + "x" + to_string(getScreenHeight()) + ":\n";
    
    if (getPrimitiveCount() > 3) {
        result += "Only up to 3 primitives are allowed.";
    } else {
        // Print primitive info here
         for(int i = 0; i < this->primitiveCount; i++)
        {
            this->primitives[i].toString();
        }
    }
    
    return result;
}
