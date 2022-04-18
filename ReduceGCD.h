#ifndef ReduceGCD_H
#define ReduceGCD_H
#include <iostream>
#include <vector>
#include <string>
#include "ReduceGeneric.h"
using namespace std;

class ReduceGCD:public ReduceGeneric{
    public:
        ReduceGCD();
    protected:
        int binaryOperator(int x, int y);
};
#endif 
