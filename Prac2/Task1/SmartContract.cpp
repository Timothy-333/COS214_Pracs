#include "SmartContract.h"
SmartContract::SmartContract(/* args */)
{
    acceptedState = new Accepted();
    negotiationState = new Negotiation();
    tentativelyAcceptedState = new TentativelyAccepted();
    rejectedState = new Rejected();
    completedState = new Completed();

    currentState = negotiationState;
}
SmartContract::~SmartContract()
{
}