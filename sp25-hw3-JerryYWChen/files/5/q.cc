#include "q.h"

#include <cmath>
#include <iostream>
#include <list>
#include <string>
#include <vector>
#include<stack>
// TODO:
// 1. Implement the the functions in q.h.
// 2. Write some unit tests for them in student_test.cc
bool CPPLib::CheckValidExpression(const std::string& input){
    std::stack<char> s;

    for(char c : input){
        if (c == '(' || c == '[' || c == '{'){
            s.push(c);
        }
        else if (c == ')' || c == ']' || c == '}'){
            if (s.empty()) return false;
            char top = s.top();
            s.pop();
            if((c == ')' && top != '(') || (c == ']' && top != '[') || 
            (c == '}' && top != '{')){
                return false;
            }
        }
    }
    return s.empty();
}

// Checks if a string is a palindrome.
// An empty string is a palindrome.
// A non empty string is a palindrome if it is equal to its reverse string.

// Example 1: Input: "aba", output: true
// Example 2: Input: "abba", output: true

// You cannot use any std:: function.
// Your memory usage should be O(1).
bool CPPLib::IsPalindrome(const std::string& input){
    int left = 0;
    int right = input.length() - 1;

    while(left < right){
        if (input[left]!= input[right]){
            return false;
        }
        left ++;
        right --;
    }
    return true;
}

// Given a string, every letter appears even number of times except for one.
// Find that letter!

// Any solution that work is acceptable, but see if you can implement it while
// keeping your memory usage as O(1).
int CPPLib::OddChar(const std::string& input){
    int result = 0;

    for(char c : input){
        result ^= c;
    }

    return result;
}