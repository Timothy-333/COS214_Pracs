#ifndef JSONCONSUMER_H/*define*/
#define JSONCONSUMER_H/*define*/

#include <string>
#include "consumer.h"

using namespace std;

class jsonConsumer : public consumer {
public:
    jsonConsumer() {}
    ~jsonConsumer() {}

    string parseData(string s) override;
};

#endif ///*define*/