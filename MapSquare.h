#ifndef MAPSQUARE_H
#define MAPSQUARE_H

#include <iostream>
#include <vector>
#include <string>

#include "MapGeneric.h"
using namespace std;

class MapSquare:public MapGeneric 
{
    
    public:
    
        MapSquare();
        
    protected:
    
        int f(int a);
};

#endif 
