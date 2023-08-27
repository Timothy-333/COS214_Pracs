#include "SmartContract.h"
SmartContract::SmartContract(/* args */)
{
    acceptedState = new Accepted(this);
    negotiationState = new Negotiation(this);
    tentativelyAcceptedState = new TentativelyAccepted(this);
    rejectedState = new Rejected(this);
    completedState = new Completed(this);

    currentState = negotiationState;
}
void SmartContract::setState(SmartContractState* state)
{
    currentState = state;
}
void SmartContract::add()
{
    currentState->add();
}
void SmartContract::remove()
{
    currentState->remove();
}
void SmartContract::accept()
{
    currentState->accept();
}
void SmartContract::reject()
{
    currentState->reject();
}
void SmartContract::complete()
{
    currentState->complete();
}
SmartContract::~SmartContract()
{
}