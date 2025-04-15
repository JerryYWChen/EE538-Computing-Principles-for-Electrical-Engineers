#include "q.h"

#include <cmath>
#include <iostream>
#include <list>
#include <string>
#include <vector>
#include <algorithm>
// TODO:
// 1. Implement the the functions in q.h.
// 2. Write some unit tests for them in student_test.cc
std::set<int> setDifference(const std::set<int> &set1, const std::set<int> &set2){
    std::set<int> difference;
    for (int num:set1){
        if(set2.find(num) == set2.end()){
            difference.insert(num);
        }
    }
    return difference;
}


bool areDisjoint(const std::set<int> &set1, const std::set<int> &set2){
    for (int num:set1){
        if (set2.find(num) != set2.end()){
            return false;
        }
    }
    return true;
}
