#include "openglfactory.h"

window* openGLFactory::createWindow() {
    // Implement the creation of an OpenGL window object here
    // For example:
    return new openGLWindow(); // Assuming you have an OpenGLWindow class
}

primitive* openGLFactory::createPrimitive() {
    // Implement the creation of an OpenGL primitive object here
    // For example:
    return new openGLPrimitive(); // Assuming you have an OpenGLPrimitive class
}