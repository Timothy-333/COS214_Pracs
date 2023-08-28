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
    Completed(SmartContract*, vector<string>*, vector<string>*, int);
    ~Completed();
};
#endif // COMPLETED_H