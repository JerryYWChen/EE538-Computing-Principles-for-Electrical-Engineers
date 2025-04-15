#include "q.h"

#include <cmath>
#include <iostream>
#include <list>
#include <string>
#include <vector>
// TODO:
// 1. Implement the the functions in q.h.
// 2. Write some unit tests for them in student_test.cc

// Creates an empty vector.
MyVector::MyVector(): data_(nullptr), size_(0), error_(ErrorCode::kNoError) {}

// Creates a vector of the given size.
MyVector::MyVector(int size){
  if(size < 0){
    data_ = nullptr;
    size_ = 0;
    error_ = ErrorCode::kIndexError;
  }

  else{
    data_ = new int[size]();
    size_ = size;
    error_ = ErrorCode::kNoError;
  }
}

// Copy constructor.
MyVector::MyVector(const MyVector& rhs): size_(rhs.size_), error_(rhs.error_) {
  data_ = new int[size_];
  std::copy(rhs.data_, rhs.data_ + size_, data_);
}

// Destructor.
// Should delete data and set it to nullptr. Also set size_ to 0.
MyVector::~MyVector(){
  delete [] data_;
  data_ = nullptr;
  size_ = 0;
}

// Inserts the given value at the back of the vector.
void MyVector::push_back(int value){
  int* new_data = new int[size_ + 1];
  std::copy(data_, data_ + size_, new_data);
  new_data[size_] = value;
  delete [] data_;
  data_ = new_data;
  size_++;
  error_ = ErrorCode::kNoError;
}

// Removes and returns a value from the backs of the vector.
int MyVector::pop_back(){
  if(size_ == 0){
    error_ = ErrorCode::kPopFromEmptyVector;
    return -1;
  }
  int new_size = size_ - 1;
  int* new_data = new int[new_size];
  int value = data_[new_size];
  std::copy(data_, data_ + new_size, new_data);
  delete [] data_;
  data_ = new_data;
  size_ = new_size;
  error_ = ErrorCode::kNoError;
  return value;
}

// Inserts the given value at the front of the vector.
void MyVector::push_front(int value){
  int* new_data = new int[size_ + 1];
  new_data[0] = value;
  std::copy(data_, data_ + size_, new_data + 1);    
  delete [] data_;
  data_ = new_data;
  size_++;
  error_ = ErrorCode::kNoError;
}

// Removes and returns a value from the front of the vector.
int MyVector::pop_front(){
  if(size_ == 0){
    error_ = ErrorCode::kPopFromEmptyVector;
    return -1;
  }
  int new_size = size_ - 1;
  int* new_data = new int[new_size];
  int value = data_[0];
  std::copy(data_ + 1, data_ + size_, new_data);
  delete [] data_;
  data_ = new_data;
  size_ = new_size;
  error_ = ErrorCode::kNoError;
  return value;
}

// Inserts the given value after the given index.
// 1. Create a new dynamic array
// 2. Copy from the old array until index
// 3. insert value
// 4. Copy the rest from the old array.
// 5. DELETE the array.
// 6. return the pointer inside the new dynamic array.
// If the given index is -1, it inserts the item at the very beginning of the
// vector.
// If the given index is invalid, set the error code.
void MyVector::insert(int value, int index){
  if(index > size_ || index < -1){
    error_ = ErrorCode::kIndexError;
    return;
  }
  if(size_ == 0){
    if(index != -1){
       error_ = ErrorCode::kIndexError;
       return;
      }
      data_ = new int[1];
      data_[0] = value;
      error_ = ErrorCode::kNoError;
      size_ = 1;
      return;
  }
  int* new_data = new int[size_ + 1];

  for(int i = 0; i < index + 1; i++){
    new_data[i] = data_[i];
  }

  new_data[index+1] = value;

  for(int i = index+1; i < size_; i++){
    new_data[i + 1] = data_[i];
  }

  delete [] data_;
  data_ = new_data;
  size_++;
  error_ = ErrorCode::kNoError;
}

// Returns the item at the given index.
int MyVector::at(int index){
  if(index >= size_ || index < 0){
    error_ = ErrorCode::kIndexError;
    return -1;
  }
  error_ = ErrorCode::kNoError;
  return data_[index];
}

// Returns the first index of the given item in the vector. Returns -1 if not
// found.
int MyVector::find(int item){
  int index;
  for(int i = 0; i < size_; i++){
    if(data_[i] == item){
      index = i;
      error_ = ErrorCode::kNoError;
      return index;
    }
  }
  error_ = ErrorCode::kNotFound;
  return -1;
}

// Returns the value of error_
ErrorCode MyVector::get_error() const{
  return error_;
}

// Returns the value of size_
int MyVector::size() const{
  return size_;
}

// Converts to std::vector. Used for testing.
std::vector<int> MyVector::ConvertToStdVector(){ 
  error_ = ErrorCode::kNoError;
  return std::vector<int> (data_, data_ + size_);
}

