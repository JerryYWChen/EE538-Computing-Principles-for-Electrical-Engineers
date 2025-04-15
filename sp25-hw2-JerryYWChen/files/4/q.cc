#include "q.h"

#include <cmath>
#include <iostream>
#include <list>
#include <string>
#include <vector>
#include<algorithm>

// TODO:
// 1. Implement the the functions in q.h.
// 2. Write some unit tests for them in student_test.cc
void UniqueVectorNotBySet(std::vector<int> &input){
    std::vector<int> UniqueElement;
    for (int num : input){
        if (std::find(UniqueElement.begin(), UniqueElement.end(), num) == 
        UniqueElement.end()){
            UniqueElement.push_back(num);
        }
    }
    input = UniqueElement;
}


void UniqueVectorBySet(std::vector<int> &input){
    std::set<int> Uniqueset(input.begin(), input.end());
    input.assign(Uniqueset.begin(), Uniqueset.end());
}


std::vector<int> IntersectVectors(const std::vector<int> &input1,
const std::vector<int> &input2){
    std::set<int> unique(input1.begin(), input1.end());
    std::vector<int> result;
    
    for(int num:input2){
        if (unique.find(num) != unique.end()){
            result.push_back(num);
            unique.erase(num);
        }
    }
    std::sort(result.begin(), result.end());
    return result;
}


std::set<int> DiffVectors(const std::vector<int> &input1,
const std::vector<int> &input2){
    std::set<int> result;
    std::vector<int> intersection = IntersectVectors(input1, input2);

    for(int num : input1){
        if (std::find(input1.begin(), input1.end(), num) == input1.end()){
            if (std::find(result.begin(), result.end(), num) == result.end()){
                result.insert(num);
            }
        }
    }
    return result;
}