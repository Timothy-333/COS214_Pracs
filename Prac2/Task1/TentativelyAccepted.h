#ifndef TentativelyAccepted_H
#define TentativelyAccepted_H
#include "SmartContractState.h"
using namespace std;
class TentativelyAccepted: public SmartContractState
{
private:
public:
    TentativelyAccepted(SmartContract*, vector<string>*, vector<string>*, int);
    void add(string) override;
    void remove(string) override;
    void accept(string) override;
    void reject() override;
    void complete() override;
    ~TentativelyAccepted();
};
#endif // TentativelyAccepted_H