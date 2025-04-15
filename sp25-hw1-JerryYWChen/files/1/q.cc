#include "q.h"

#include <cmath>
#include <iostream>
#include <list>
#include <string>
#include <vector>
// TODO:
// 1. Implement the the functions in q.h.
// 2. Write some unit tests for them in student_test.cc

std::vector<int> Reverse(std::vector<int> input){
    int left = 0;
    int right = input.size()-1;
    
    while(left < right){
        int temp = input[left];
        input[left] = input[right];
        input[right] = temp;
        left++;
        right--;
    }
    return input;
}

std::vector<int> PlusOne(std::vector<int> input){
    if (input.empty){
        return {};
    }

    for (int num:input){
        if (num < 0 || num > 9){
            return -1;
        }
    }

    n = input.size()

    for (i = n-1; i >= 0; i--){
        if (input[i] < 9){
            input[i]++;
        }
        input[i] = 0
    }

    std::vector<int> result(n+1, 0);
    result[0] = 1;
    return result;
}