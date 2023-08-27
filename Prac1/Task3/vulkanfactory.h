#ifndef VULKANFACTORY_H/*define*/
#define VULKANFACTORY_H/*define*/

#include <string>
#include "factory.h"
#include "vulkanwindow.h" // Include the header for the window class
#include "vulkanprimitive.h" // Include the header for the primitive class

using namespace std;

class vulkanFactory: public factory {
public:
    window* createWindow();
    primitive* createPrimitive();
};

#endif ///*define*/