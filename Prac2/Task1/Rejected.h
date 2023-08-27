#ifndef REJECTED_H
#define REJECTED_H
#include <string>
#include "SmartContractState.h"
using namespace std;
class Rejected: public SmartContractState
{
private:
    /* data */
public:
    Rejected(SmartContract*);
    ~Rejected();
};
#endif // REJECTED_H