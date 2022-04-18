#include <iostream>
#include <vector>
#include <string>

#include "FilterGeneric.h"
#include "FilterForTwoDigitPositive.h"
using namespace std;

FilterForTwoDigitPositive::FilterForTwoDigitPositive()
{}

bool FilterForTwoDigitPositive::g(int count)

{
  
  if ((count > 99) || (count < 10))    
  
  {
    
    return false;
    
  }
  
  else
  
  {
    
    return true;
    
  }
}
