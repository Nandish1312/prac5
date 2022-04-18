#include <iostream>
#include <vector>
#include <string>
#include "ReduceGeneric.h"
#include "ReduceMinimum.h"
using namespace std;

ReduceMinimum::ReduceMinimum(){}

int ReduceMinimum::binaryOperator(int x, int y) {
  if(x>y) {
    return y;
  } else {
    return x;
  }
}

