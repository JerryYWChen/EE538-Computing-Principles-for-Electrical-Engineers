#include "q.h"

#include <cmath>
#include <iostream>
#include <list>
#include <string>
#include <vector>
// TODO:
// 1. Implement the the functions in q.h.
// 2. Write some unit tests for them in student_test.cc
bool CanBecome(const std::string &s, const std::string &goal){
    if (s.length()!=goal.length()){
        return false;
    }
    return (s+s).find(goal)!=std::string::npos;
}