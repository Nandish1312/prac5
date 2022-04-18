#ifndef FILTERGENERIC_H
#define FILTERGENERIC_H

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class FilterGeneric

{
    
    public:
    
        vector<int> filter(vector<int> num_vector);
    
    private:
    
        vector<int> vec_temp;
        
        virtual bool g(int count) = 0;

};

#endif 
