#include "q.h"

#include <cmath>
#include <iostream>
#include <list>
#include <string>
#include <vector>
// TODO:
// 1. Implement the the functions in q.h.
// 2. Write some unit tests for them in student_test.cc

bool IsPrime(int number){
    if (number < 2){
        return false;
    }

    for (i = 2; i*i <= n; i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}