#include <iostream>
#include <vector>
#include <string>

#include "ReduceGeneric.h"
using namespace std;


int ReduceGeneric::reduce(vector<int> reduce_generic)

{

  if (reduce_generic.size() == 2)

  {

    return binaryOperator(reduce_generic[0], reduce_generic[1]);

  }

  vector <int> temp(reduce_generic.begin(), reduce_generic.end()-1);

  return binaryOperator(reduce(temp),reduce_generic[reduce_generic.size()-1]);
}



