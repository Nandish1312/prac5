#ifndef MAPTRIPLE_H
#define MAPTRIPLE_H

#include <iostream>
#include <vector>
#include <string>

#include "MapGeneric.h"
using namespace std;

class MapTriple:public MapGeneric 

{
    public:
    
        MapTriple();
        
    protected:
    
        int f(int a);
        
};

#endif 
