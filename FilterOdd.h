#ifndef FILTERODD_H
#define FILTERODD_H
#include <iostream>
#include <vector>
#include <string>
using namespace std;
#include "FilterGeneric.h"

class FilterOdd:public FilterGeneric{
    public:
    FilterOdd();
    
    protected:
    bool g(int number);
};
#endif
