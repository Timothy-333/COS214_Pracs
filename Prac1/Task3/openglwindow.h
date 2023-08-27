#ifndef OPENGLWINDOW_H/*define*/
#define OPENGLWINDOW_H/*define*/

#include <string>
#include "window.h"
#include "openglprimitive.h"

using namespace std;

class openGLWindow : public window {
public:
    openGLPrimitive* primitives;
    openGLWindow();
    openGLPrimitive* getPrimitives() const;
    void setPrimitives(openGLPrimitive* primitives);
    string toString() override;
};

#endif ///*define*/