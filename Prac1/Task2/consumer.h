#ifndef CONSUMER_H
#define CONSUMER_H

#include <string>
using namespace std;

class consumer {
public:
   string printData(string s);
   virtual ~consumer() {}

protected:
    virtual string parseData(string s) = 0;
};

#endif // CONSUMER_H
