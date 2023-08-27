#ifndef ACCEPTED_H
#define ACCEPTED_H
#include <iostream>
#include "SmartContractState.h"
using namespace std;
class Accepted: public SmartContractState
{
private:
public:
    Accepted(SmartContract*);
    void add();
    void remove();
    void accept();
    void reject();
    void complete();
    ~Accepted();
};
#endif // ACCEPTED_H
