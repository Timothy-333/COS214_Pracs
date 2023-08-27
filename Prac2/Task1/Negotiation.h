#ifndef NEGOTIATION_H
#define NEGOTIATION_H
#include <iostream>
#include "SmartContractState.h"
using namespace std;
class Negotiation: public SmartContractState
{
private:
public:
    Negotiation(SmartContract*);
    void add();
    void remove();
    void accept();
    void reject();
    void complete();
    ~Negotiation();
};
#endif // NEGOTIATION_H