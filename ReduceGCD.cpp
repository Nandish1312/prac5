#include <iostream>
#include <vector>
#include <string>

#include "ReduceGeneric.h"
#include "ReduceGCD.h"
using namespace std;

ReduceGCD::ReduceGCD()
{}

int ReduceGCD::binaryOperator(int a, int b) 

{
  
    if (a == 0) 
    
    {
      
      return b;
      
    }
    
    else if (b == 0) 
    
    {
      
      return a;
      
    } 
    
    if (a == b) 
    
    {
      
      return a;
      
    }  
    
    if (a > b)
    
    {
      
      return binaryOperator(a-b, b);
      
    } 
    
    return binaryOperator(a, b-a); 
}
