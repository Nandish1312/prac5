#ifndef ReduceGCD_H
#define ReduceGCD_H

#include <iostream>
#include <vector>
#include <string>

#include "ReduceGeneric.h"
using namespace std;

class ReduceGCD:public ReduceGeneric         

{
            
    protected:
    
        int binaryOperator(int a, int b);
    
    public:
    
        ReduceGCD();

};

#endif 
