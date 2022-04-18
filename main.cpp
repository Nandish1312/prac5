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
  
  vector<int> L = {};

  string input;
  
  getline(cin, input);
  
  stringstream str_strm;
  
  str_strm << input;
  
  string temp_str;
  
  int temp_int;
  
  while(!str_strm.eof())
  
  {
    
    str_strm >> temp_str;
    
    if(stringstream(temp_str) >> temp_int) 
    
    {
      L.push_back(temp_int);
    
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

