#ifndef FilterForTwoDigitPositive_H
#define FilterForTwoDigitPositive_H

#include <iostream>
#include <vector>
#include <string>

#include "FilterGeneric.h"
using namespace std;

class FilterForTwoDigitPositive:public FilterGeneric

{
       
      protected:
    
    bool g(int count);

    public:
    
    FilterForTwoDigitPositive();
    
};

#endif
