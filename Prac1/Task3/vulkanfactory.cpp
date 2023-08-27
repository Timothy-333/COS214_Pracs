#include "vulkanfactory.h"

window* vulkanFactory::createWindow() {
    // Implement the creation of an OpenGL window object here
    // For example:
    return new vulkanWindow(); // Assuming you have an OpenGLWindow class
}

primitive* vulkanFactory::createPrimitive() {
    // Implement the creation of an OpenGL primitive object here
    // For example:
    return new vulkanPrimitive(); // Assuming you have an OpenGLPrimitive class
}