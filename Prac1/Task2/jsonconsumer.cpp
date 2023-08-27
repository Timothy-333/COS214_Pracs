#include "jsonconsumer.h"
#include <cstring>
#include <iostream>
#include <sstream>

using namespace std;

string jsonConsumer::parseData(string s)
{
    string str = s;
    int length = s.length();
    char* stack = new char[length];
    int top = 0;
    string open = "{";
    string close = "}";
    int pos = str.find(open);
    while (pos < length)
    {
        if(str[pos] == '}')
        {
            top--;
            if (top <= -1)
            {
                return "Invalid JSON";
            }
            else
            {
                str.erase(pos, close.length());
                pos--;
            }
        }
        else if(str[pos] == '{')
        {
            stack[top++] = '{';
            str.erase(pos, open.length());
            pos--;
        }
        pos++;
    }
    if(top == 0)
    {
        return str;
    }
    else
    {
        return "Invalid JSON";
    }
    
}