#ifndef TentativelyAccepted_H
#define TentativelyAccepted_H
#include <iostream>
#include "SmartContractState.h"
using namespace std;
class TentativelyAccepted: public SmartContractState
{
private:
public:
    TentativelyAccepted(SmartContract*);
    void add();
    void remove();
    void accept();
    void reject();
    void complete();
    ~TentativelyAccepted();
};
#endif // TentativelyAccepted_H