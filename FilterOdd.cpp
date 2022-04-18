#include <iostream>
#include <vector>
#include <string>
using namespace std;

#include "FilterGeneric.h"
#include "FilterOdd.h"

FilterOdd::FilterOdd()
{}

bool FilterOdd::g(int count)

{
  
  if (count % 2 != 0)
  
  {
    
    return true;
    
  }
  
  else
  
  {
    
    return false;
  
  }

}
