#include <iostream>
#include <vector>
#include <string>
#include "FilterGeneric.h"
#include "FilterForTwoDigitPositive.h"
using namespace std;

FilterForTwoDigitPositive::FilterForTwoDigitPositive(){ 
}

bool FilterForTwoDigitPositive::g(int number){
  if ((number > 99) || (number < 10)){
    return false;
  }else{
    return true;
  }
}
