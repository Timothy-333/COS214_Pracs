#ifndef ACCEPTED_H
#define ACCEPTED_H
#include "SmartContractState.h"
using namespace std;
class Accepted: public SmartContractState
{
private:
public:
    Accepted(SmartContract*, vector<string>*, vector<string>*, int);
    void add(string) override;
    void remove(string) override;
    void accept(string) override;
    void reject() override;
    void complete(string) override;
    ~Accepted();
};
#endif // ACCEPTED_H
