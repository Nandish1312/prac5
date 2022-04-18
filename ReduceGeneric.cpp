#include <iostream>
#include <vector>
#include <string>
#include "ReduceGeneric.h"
using namespace std;


int ReduceGeneric::reduce(vector<int> array) {
  if (array.size() == 2) {
    return binaryOperator(array[0], array[1]);
  }
  vector <int> temp(array.begin(), array.end()-1);
  return binaryOperator(reduce(temp),array[array.size()-1]);
}
