#ifndef MAPABSOLUTEVALUE_H
#define MAPABSOLUTEVALUE_H

#include <iostream>
#include <vector>
#include <string>

#include "MapGeneric.h"
using namespace std;

class MapAbsoluteValue:public MapGeneric 

{
            
    protected:
    
        int f(int a);
      
    public:
    
        MapAbsoluteValue();
  
};

#endif 
