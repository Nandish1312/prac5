#include <iostream>
#include <vector>
#include <string>

#include "MapGeneric.h"
using namespace std;

MapGeneric::MapGeneric()

{
  
  check = {};

}

vector<int> MapGeneric::map(vector<int> generic) 

{
  
  check.insert(check.end(),f(generic[0]));
  
  if (generic.size() == 1) 
  
  {
    
    return check;
    
  }
  
  vector <int> random(generic.begin()+1, generic.end());
  
  return map(random);
  
}








