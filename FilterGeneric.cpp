#include "FilterGeneric.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> FilterGeneric::filter(vector<int> vector1)
{
  if(g(vector1[0]) == true)
  {
    temp_vector.insert(temp_vector.end(),vector1[0]);
  }  
  if (vector1.size() == 1)
  {
    return temp_vector;
  }
  vector <int> temp(vector1.begin()+1, vector1.end());
  return filter(temp);
}
