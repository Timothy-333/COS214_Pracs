#include "SmartContract.h"
#include "Negotiation.h"
#include "TentativelyAccepted.h"
#include "Accepted.h"
#include "Rejected.h"
#include "Completed.h"
SmartContract::SmartContract(string name, int numParties, vector<string>* conditions, vector<string>* aggreeingParties)
{
    this->name = name;
    this->numParties = numParties;
    this->conditions = conditions;
    this->aggreeingParties = aggreeingParties;
    acceptedState = new Accepted(this, conditions, aggreeingParties, numParties);
    negotiationState = new Negotiation(this, conditions, aggreeingParties, numParties);
    tentativelyAcceptedState = new TentativelyAccepted(this, conditions, aggreeingParties, numParties);
    rejectedState = new Rejected(this, conditions, aggreeingParties, numParties);
    completedState = new Completed(this, conditions, aggreeingParties, numParties);

    currentState = negotiationState;
}
void SmartContract::setState(SmartContractState* state)
{
    currentState = state;
}
void SmartContract::add(string condition)
{
    try
    {
        currentState->add(condition);
    }
    catch(const char* e)
    {
        cout << e << endl;
    }
    
}
void SmartContract::remove(string condition)
{
    try
    {
        currentState->remove(condition);
    }
    catch(const char* e)
    {
        cout << e << endl;
    }
}
void SmartContract::accept(string party)
{
    try
    {
        currentState->accept(party);
    }
    catch(const char* e)
    {
        cout << e << endl;
    }
    
}
void SmartContract::reject()
{
    try
    {
        currentState->reject();
    }
    catch(const char* e)
    {
        cout << e << endl;
    }
    
}
void SmartContract::complete()
{
    try
    {
        currentState->complete();
    }
    catch(const char* e)
    {
        cout << e << endl;
    }
}
void SmartContract::complete(string party)
{
    try
    {
        currentState->complete(party);
    }
    catch(const char* e)
    {
        cout << e << endl;
    }
}
void SmartContract::toString()
{
    cout << "Contract " << name << endl;
    cout << "\tState: "<< currentState->stateName << endl;
    if(currentState == tentativelyAcceptedState || currentState == acceptedState)
    {
        cout << "\tVotes: \n";
        for (const auto& party : *aggreeingParties)
        {
            cout << "\t\t" << party << endl;
        }
    }
    cout << "\tConditions: \n";
    for (const auto& condition : *conditions)
    {
        cout << "\t\t" << condition << endl;
    }
}
SmartContract::~SmartContract()
{
}