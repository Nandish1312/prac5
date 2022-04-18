#ifndef ReduceGeneric_H
#define ReduceGeneric_H
#include <iostream>
#include <vector>
#include <string>
using namespace std;


class ReduceGeneric{
    protected:
        virtual int binaryOperator(int x, int y) = 0;
    public:
        int reduce(vector<int> array);
};
#endif 
