#ifndef ReduceMinimum_H
#define ReduceMinimum_H
#include <iostream>
#include <vector>
#include <string>
#include "ReduceGeneric.h"
using namespace std;

class ReduceMinimum:public ReduceGeneric{
    public:
        ReduceMinimum();
    protected:
        int binaryOperator(int x, int y);
};
#endif 
