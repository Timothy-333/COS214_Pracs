#include "accepted.h"
Accepted::Accepted(SmartContract* smartContract) : SmartContractState(smartContract)
{
}
void Accepted::add()
{
    cout << "Accepted: add" << endl;
}
void Accepted::remove()
{
    cout << "Accepted: remove" << endl;
}
void Accepted::accept()
{
    cout << "Accepted: accept" << endl;
}
void Accepted::reject()
{
    cout << "Accepted: reject" << endl;
}
void Accepted::complete()
{
    cout << "Accepted: complete" << endl;
}
Accepted::~Accepted()
{
}
