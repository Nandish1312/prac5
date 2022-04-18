#ifndef MAPGENERIC_H
#define MAPGENERIC_H

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class MapGeneric {
    private:
        vector<int> test;
        virtual int f(int n) = 0;
    public:
        MapGeneric();
        vector<int> map(vector<int> array);
};

#endif //MAPGENERIC.h
