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
  
  vector<int> len = {};

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

  MapGeneric * map1 = new MapAbsoluteValue();
  
  MapGeneric * map2 = new MapTriple();
  
  vector <int> Lprime = map2->map(map1->map(L));

  FilterGeneric * filter1 = new FilterForTwoDigitPositive();
  
  FilterGeneric * filter2 = new FilterOdd();
  
  vector <int> Ldoubleprime = filter1->filter(filter2->filter(Lprime));

  ReduceGeneric * reduce1 = new ReduceMinimum();
  
  ReduceGeneric * reduce2 = new ReduceGCD();

  cout<<reduce1 -> reduce(Ldoubleprime)<<" "<<reduce2 -> reduce(Ldoubleprime)<<endl;
  
  return 0;
}

