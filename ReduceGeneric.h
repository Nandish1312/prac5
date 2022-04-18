#ifndef ReduceGeneric_H
#define ReduceGeneric_H

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class ReduceGeneric

{
          
    public:
    
        int reduce(vector<int> reduce_generic);
    
    protected:
    
        virtual int binaryOperator(int a, int b) = 0;
  
};

#endif 
