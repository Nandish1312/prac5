#ifndef FILTERGENERIC_H
#define FILTERGENERIC_H
#include <iostream>
#include <vector>
#include <string>
using namespace std;


class FilterGeneric{
    private:
        virtual bool g(int number) = 0;
        vector<int> temp_vector;
        
    public:
        vector<int> filter(vector<int> vector1);
};
#endif 
