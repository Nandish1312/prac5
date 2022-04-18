#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include "MapGeneric.h"
#include "MapAbsoluteValue.h"
using namespace std;
MapAbsoluteValue::MapAbsoluteValue(){}

int MapAbsoluteValue::f(int n) {
  return abs(n);
}
