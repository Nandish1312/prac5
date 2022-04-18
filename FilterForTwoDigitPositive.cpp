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
  
  if ((count > 10) || (count < 99))
  
  {
    
    return true;
    
  }
  
  else
  
  {
    
    return false;
    
  }
  
}
