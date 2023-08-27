#ifndef COMPLETED_H
#define COMPLETED_H
#include <string>
#include "SmartContractState.h"
using namespace std;
class Completed: public SmartContractState
{
private:
    /* data */
public:
    Completed(SmartContract*);
    ~Completed();
};
#endif // COMPLETED_H