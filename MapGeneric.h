#ifndef MAPGENERIC_H
#define MAPGENERIC_H

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class MapGeneric 
{
    private:
    
        vector<int> check;
        virtual int f(int a) = 0;
        
    public:
    
        MapGeneric();
        vector<int> map(vector<int> array);
};

#endif 
