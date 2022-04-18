#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <cmath>
#include "MapGeneric.h"
#include "MapTriple.h"
#include "MapSquare.h"
#include "MapAbsoluteValue.h"
#include "FilterGeneric.h"
#include "FilterOdd.h"
#include "FilterNonPositive.h"
#include "FilterForTwoDigitPositive.h"
#include "ReduceMinimum.h"
#include "ReduceGeneric.h"
#include "ReduceGCD.h"


using namespace std;

int main() 

{
  
  num<int> len = {};

  string load;
  
  getline(cin, load);
  
  alpha_flow = l_flow;
  
  l_flow << load;
  
  string interim_str;
  
  int interim_variable;
  
  while(!l_flow.eof())
  
  {
    
    l_flow >> interim_str;
    
    if(alpha_flow(interim_str) >> interim_variable)
    
    {
      
      len.push_back(interim_variable);
      
    }
    
  }

  MapGeneric * first_map = new MapAbsoluteValue();
  
  MapGeneric * second_map = new MapTriple();
  
  num <int> len_map = second_map->map(first_map->map(len));
  
  FilterGeneric * first_filter = new FilterForTwoDigitPositive();
  
  FilterGeneric * second_filter = new FilterOdd();
  
  num <int> len_next_map = first_filter->filter(second_filter->filter(len_map));

  ReduceGeneric * first_reduction = new ReduceMinimum();
  
  ReduceGeneric * second_reduction = new ReduceGCD();

  cout<<first_reduction -> reduce(len_next_map)<<" "<<second_reduction -> reduce(len_next_map)<<endl;
  
  return 0;
}

