#include "FilterGeneric.h"

#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> FilterGeneric::filter(vector<int> num_vector)

{
  
  if(g(num_vector[0]) == true)
  
  {
    
    vec_temp.insert(vec_temp.end(),num_vector[0]);
    
  }  
  
  if (num_vector.size() == 1)
  
  {
    
    return vec_temp;
    
  }
  
  vector <int> num(num_vector.begin()+1, num_vector.end());
  
  return filter(num);
}
