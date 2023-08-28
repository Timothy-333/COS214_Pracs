#ifndef NEGOTIATION_H
#define NEGOTIATION_H
#include "SmartContractState.h"
using namespace std;
class Negotiation: public SmartContractState
{
private:
public:
    Negotiation(SmartContract*, vector<string>*, vector<string>*, int);
    void add(string) override;
    void remove(string) override;
    void accept(string) override;
    void reject() override;
    void complete() override;
    ~Negotiation();
};
#endif // NEGOTIATION_H