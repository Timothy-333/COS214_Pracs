#ifndef REJECTED_H
#define REJECTED_H
#include "SmartContractState.h"
using namespace std;
class Rejected: public SmartContractState
{
private:
    /* data */
public:
    Rejected(SmartContract*, vector<string>*, vector<string>*, int);
    ~Rejected();
};
#endif // REJECTED_H