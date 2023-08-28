#ifndef SMARTCONTRACT_H
#define SMARTCONTRACT_H
#include <iostream>
#include <string>
#include <vector>
class SmartContractState;
using namespace std;
class SmartContract
{
private:
    vector<string>* conditions;
    vector<string>* aggreeingParties;
    string name;
    int numParties;
public:
    SmartContract(string, int, vector<string>*, vector<string>*);
    void add(string);
    void remove(string);
    void accept(string);
    void reject();
    void complete();
    void complete(string);
    void setState(SmartContractState* state);
    void toString();
    ~SmartContract();
    SmartContractState* currentState;
    SmartContractState* negotiationState;
    SmartContractState* tentativelyAcceptedState;
    SmartContractState* acceptedState;
    SmartContractState* rejectedState;
    SmartContractState* completedState;
};
#endif // SMARTCONTRACTSTATE_H