#ifndef OPENGLFACTORY_H/*define*/
#define OPENGLFACTORY_H/*define*/

#include <string>
#include "factory.h"
#include "openglwindow.h" // Include the header for the window class
#include "openglprimitive.h" // Include the header for the primitive class

using namespace std;

class openGLFactory: public factory {
public:
    window* createWindow();
    primitive* createPrimitive();
};

#endif ///*define*/