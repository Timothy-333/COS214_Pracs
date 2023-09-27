#ifndef STATE_H
#define STATE_H

#include <string>
class Context;

class State {
public:
    virtual void handleChange(Context* c) = 0;
    virtual void update() = 0;
    virtual std::string getState() = 0;
    virtual ~State();
};

#endif  // STATE_H
