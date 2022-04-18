#ifndef FilterNonPositive_H
#define FilterNonPositive_H

#include <iostream>
#include <vector>
#include <string>

#include "FilterGeneric.h"
using namespace std;

class FilterNonPositive:public FilterGeneric

{

    protected:

    bool g(int count);

    public:

    FilterNonPositive();
    
};

#endif
