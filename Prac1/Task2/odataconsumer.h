#ifndef ODATACONSUMER_H/*define*/
#define ODATACONSUMER_H/*define*/

#include <string>
#include "consumer.h"

using namespace std;

class odataConsumer : public consumer {
public:
    odataConsumer() {}
    ~odataConsumer() {}
    
    string parseData(string s) override;
};

#endif ///*define*/