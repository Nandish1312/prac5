#ifndef MAPGENERIC_H
#define MAPGENERIC_H

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class MapGeneric 

{
    
     public:
    
        MapGeneric();
        
        vector<int> map(vector<int> generic);
        
    private:
    
        vector<int> check;
        
        virtual int f(int a) = 0;
        
};

#endif 



