#ifndef VULKANWINDOW_H/*define*/
#define VULKANWINDOW_H/*define*/

#include <string>
#include "window.h"
#include "vulkanprimitive.h"

using namespace std;

class vulkanWindow : public window {
public:
    vulkanPrimitive* primitives;

    vulkanPrimitive* getPrimitives() const;
    void setPrimitives(vulkanPrimitive* primitives);
    string toString() override;
    ~vulkanWindow();
};

#endif ///*define*/