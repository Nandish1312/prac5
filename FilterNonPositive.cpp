#include <iostream>
#include <vector>
#include <string>
#include "FilterGeneric.h"
#include "FilterNonPositive.h"
using namespace std;

FilterNonPositive::FilterNonPositive(){ 
}

bool FilterNonPositive::g(int number){
  if (number >= 0){
    return false;
  }else{
    return true;
  }
}
