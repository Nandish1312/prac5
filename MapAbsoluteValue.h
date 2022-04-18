#ifndef MAPABSOLUTEVALUE_H
#define MAPABSOLUTEVALUE_H


#include <iostream>
#include <vector>
#include <string>

#include "MapGeneric.h"
using namespace std;

class MapAbsoluteValue:public MapGeneric 

{
    public:
    
        MapAbsoluteValue();
        
    protected:
        int f(int a);
};

#endif 
