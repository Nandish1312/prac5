#ifndef ReduceMinimum_H
#define ReduceMinimum_H

#include <iostream>
#include <vector>
#include <string>

#include "ReduceGeneric.h"
using namespace std;

class ReduceMinimum:public ReduceGeneric

{
            
    protected:
    
        int binaryOperator(int a, int b);
        
    public:
    
        ReduceMinimum();

};

#endif 
