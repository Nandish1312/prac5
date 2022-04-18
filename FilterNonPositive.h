#ifndef FilterNonPositive_H
#define FilterNonPositive_H
#include <iostream>
#include <vector>
#include <string>
#include "FilterGeneric.h"
using namespace std;

class FilterNonPositive:public FilterGeneric{
    public:
    FilterNonPositive();
    
    protected:
    bool g(int number);
};
#endif
