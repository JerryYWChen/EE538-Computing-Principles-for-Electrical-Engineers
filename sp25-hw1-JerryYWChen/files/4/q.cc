#include "q.h"

#include <cmath>
#include <iostream>
#include <list>
#include <string>
#include <vector>
// TODO:
// 1. Implement the the functions in q.h.
// 2. Write some unit tests for them in student_test.cc
std::vector<int> Flatten3DVector(
    std::vector<std::vector<std::vector<int>>> input){
        std::vector<int> 1DVector;

        for (const &auto matrix : input){
            for (const &auto row : matrix){
                for (num : row){
                    1DVector.push_back(num);
                }
            }
        }
        return 1DVector;
    }