#ifndef FILTERODD_H
#define FILTERODD_H

#include <iostream>
#include <vector>
#include <string>
using namespace std;

#include "FilterGeneric.h"

class FilterOdd:public FilterGeneric

{
       
    protected:
    
    bool g(int count);
    
    public:
    
    FilterOdd();
 
};

#endif
