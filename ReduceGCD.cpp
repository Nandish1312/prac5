#include <iostream>
#include <vector>
#include <string>
#include "ReduceGeneric.h"
#include "ReduceGCD.h"
using namespace std;

ReduceGCD::ReduceGCD(){}

int ReduceGCD::binaryOperator(int x, int y) {  
    if (x == 0) {
      return y;
    }else if (y == 0) {
      return x; 
    } 
    if (x == y) {
      return x; 
    }  
    if (x > y) {
      return binaryOperator(x-y, y);
    } 
    return binaryOperator(x, y-x); 
}

