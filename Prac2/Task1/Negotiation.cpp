#include "Negotiation.h"
Negotiation::Negotiation(SmartContract* smartContract) : SmartContractState(smartContract)
{
}
Negotiation::~Negotiation()
{
}
void Negotiation::add()
{
    cout << "Negotiation: add" << endl;
}
void Negotiation::remove()
{
    cout << "Negotiation: remove" << endl;
}
void Negotiation::accept()
{
    cout << "Negotiation: accept" << endl;
}
void Negotiation::reject()
{
    cout << "Negotiation: reject" << endl;
}
void Negotiation::complete()
{
    cout << "Negotiation: complete" << endl;
}