#include <iostream>
#include <vector>
#include <string>
using namespace std;
#include "FilterGeneric.h"
#include "FilterOdd.h"


FilterOdd::FilterOdd(){
  
}

bool FilterOdd::g(int number){
  if (number % 2 == 0){
    return false;
  }else{
    return true;
  }
}