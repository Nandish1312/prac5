#include <iostream>
#include <vector>
#include <string>

#include "ReduceGeneric.h"
using namespace std;


int ReduceGeneric::reduce(vector<int> reduce) 

{
  
  if (reduce.size() == 2) 
  
  {
    
    return binaryOperator(reduce[0], reduce[1]);
    
  }
  
  vector <int> num(reduce.begin(), reduce.end()-1);
  
  return binaryOperator(reduce(num),reduce[reduce.size()-1]);
}



