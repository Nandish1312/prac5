#include <iostream>
#include <vector>
#include <string>

#include "MapGeneric.h"
using namespace std;

MapGeneric::MapGeneric()

{
  
  check = {};

}

vector<int> MapGeneric::map(vector<int> array) 

{
  
  check.insert(check.end(),f(array[0]));
  
  if (array.size() == 1) 
  
  {
    
    return check;
    
  }
  
  vector <int> random(array.begin()+1, array.end());
  
  return map(random);
  
}








