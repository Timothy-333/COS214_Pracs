#include <iostream>
#include <string>
#include "SmartContractState.h"
#include "Negotiation.h"
#include "TentativelyAccepted.h"
#include "Accepted.h"
#include "Rejected.h"
#include "Completed.h"
#include "SmartContract.h"
using namespace std;

int main()
{
    vector<string>* conditions = new vector<string>();
    vector<string>* agreeingParties = new vector<string>();
    SmartContract* smartContract = new SmartContract("Smart Contract 1", 5, conditions, agreeingParties);
    for (int i = 1; i <= 10; i++)
    {
        smartContract->add("Condition " + std::to_string(i));
    }
    for (int i = 1; i <= 3; i++)
    {
        smartContract->accept("Party " + std::to_string(i));
    }
    smartContract->complete();
    smartContract->toString();
    smartContract->add("Condition 11");
    smartContract->remove("Condition 1");
    smartContract->remove("Condition 123");
    smartContract->toString();
    for (int i = 1; i <= 5; i++)
    {
        smartContract->accept("Party " + std::to_string(i));
    }
    smartContract->toString();
    for (int i = 1; i <= 4; i++)
    {
        smartContract->complete("Party " + std::to_string(i));
    }
    smartContract->complete("Party 1");
    smartContract->toString();
    smartContract->add("Condition 12");
    smartContract->complete("Party 5");
    smartContract->toString();
    return 0;
}