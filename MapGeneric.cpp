#include <iostream>
#include <vector>
#include <string>
#include "MapGeneric.h"
using namespace std;

MapGeneric::MapGeneric(){
  test = {};
}

vector<int> MapGeneric::map(vector<int> array) {
  test.insert(test.end(),f(array[0]));
  if (array.size() == 1) {
    return test;
  }
  vector <int> temp(array.begin()+1, array.end());
  return map(temp);
}

// int f(int n) {
//   return n*3;
// }








