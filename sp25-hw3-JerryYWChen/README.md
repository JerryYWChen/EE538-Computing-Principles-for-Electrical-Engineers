[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/YiBV7igX)
# HW3 EE538

## University of Southern California

## Instructor: Arash Saifhashemi

Please clone this repository, edit README.md to answer the questions, and fill up functions to finish the homework.

## Important:

- Use address sanitizer!
- Every time that you use a dereferencing operator (* or ->) make sure your pointer is valid!

Also note that:

- Please find each question in a separate folder under [files](/files).
- For non-coding questions, fill out the answers in the README file.
- For coding questions, edit the files and check them in.
- For coding questions unless specified, you should add unit tests to the student_test.cc. We will clone and test your repo using your tests and some other tests (that are not provided). Your code should pass all of them.
- For submission, please push your answers to Github before the deadline.
- Rubrics:

| Question | Points |
| -------- | ------ |
| 1        | 16     |
| 2        | 20     |
| 3        | 20     |
| 4        | 20     |
| 5        | 24     |

- 100 points is considered full credit.

See [cpp-template](https://github.com/ourarash/cpp-template) for help on installing bazel and debugging.

# Question
- Please refer to [files](/files).
- For each question, implement and test it in the [files](/files).
- Write the runtime complexity of each question in this README file.

# Answers
[TODO: Should be filled out with runtime complexity of each question with justification.]
Question1:
Q1
Non-parameterized constructor //default constructor
o1.v_.size():0  //o1.v_ is not modified by default constructor
Destructor  //end of the block, destruct
---------------------------------------------------------------
Q2
Non-parameterized constructor //default constructor
Parameterized constructor //with value
Copy constructor //o3 copy o1
Destructor  //end of the block, destruct o3
Destructor  //end of the block, destruct o2
Destructor  //end of the block, destruct o1
---------------------------------------------------------------
Q3
Non-parameterized constructor //default constructor
Copy constructor //copy o
something 1.
Destructor  //after copy, destruct it (pass by value)
Destructor  //end of the block, destruct o
---------------------------------------------------------------
Q4
Non-parameterized constructor //default constructor
something 2. //pass by reference (no copy constructor)
Destructor  //end of the block, destruct o
---------------------------------------------------------------
Q5
Non-parameterized constructor //default constructor
something 3. //pass by reference (no copy constructor)
Destructor  //end of the block, destruct o
---------------------------------------------------------------
Q6
Non-parameterized constructor //default constructor
Copy constructor //copy o to o2
something 4.
Destructor  //after something 4, destruct o2
Destructor  //end of the block, destruct o
---------------------------------------------------------------
Q7
Parameterized constructor //with value
Copy constructor //copy to p1
Destructor //after copy, destruct temporary 
p1.first.v_.size():0 //p1.first.v_ is not modified by Parameterized constructor
p1.second:0
Copy constructor //copy p1 to p2
p2.first.v_.size():0  //p2.first.v_ is not modified by Parameterized constructor
p2.second:0
Destructor  //end of the block, destruct p2
Destructor  //end of the block, destruct p1
---------------------------------------------------------------
Q8
Parameterized constructor //with value
Copy constructor //copy to p
Destructor //after copy, destruct temporary 
something 2.  //loop1
something 2.  //loop2
something 2.  //loop3
Destructor  //end of the block, destruct p

---------------------------------------------------------------
Q9
Parameterized constructor //with value
//Memory leak (delete o is missing)
---------------------------------------------------------------
Q10
Parameterized constructor //with value
Destructor  //end of the block, destruct o
//we have delete o in this question.
---------------------------------------------------------------
Q11
Non-parameterized constructor //default constructor
Copy constructor //copy into my_map
Parameterized constructor //with value
Copy constructor //copy into my_map
Parameterized constructor //with value
Copy constructor //copy into my_map
Copy constructor //extra copy (balancing)
Copy constructor //extra copy (balancing)
Copy constructor //extra copy (balancing)
Destructor //destruct extra copy
Destructor //destruct extra copy
Destructor //destruct extra copy
Destructor //destruct temporary my_class(3,4)
Destructor //destruct temporary my_class(1,2)
Destructor //destruct temporary my_class()
Copy constructor //loop 1 copy my class for 0
Destructor //after copy, destruct it
Copy constructor //loop 2 copy my class for 3
Destructor //after copy, destruct it
Copy constructor //loop 3 copy my class for 5
Destructor //after copy, destruct it
Destructor  //end of the block, destruct my_class(3,4)
Destructor  //end of the block, destruct my_class(1,2)
Destructor  //end of the block, destruct my_class()
---------------------------------------------------------------
Q12
Non-parameterized constructor //default constructor
Copy constructor //copy into my_map
Parameterized constructor //with value
Copy constructor //copy into my_map
Parameterized constructor //with value
Copy constructor //copy into my_map
Copy constructor //extra copy (balancing)
Copy constructor //extra copy (balancing)
Copy constructor //extra copy (balancing)
Destructor //destruct extra copy
Destructor //destruct extra copy
Destructor //destruct extra copy
Destructor //destruct temporary my_class(3,4)
Destructor //destruct temporary my_class(1,2)
Destructor //destruct temporary my_class()
Destructor  //end of the block, destruct my_class(3,4)
Destructor  //end of the block, destruct my_class(1,2)
Destructor  //end of the block, destruct my_class()
---------------------------------------------------------------
Q13
Parameterized constructor //with value
Destructor  //end of the block, destruct o
---------------------------------------------------------------
Q14
Parameterized constructor //with value
Operation took: 1390 milliseconds
Copy constructor //copy o to o2
Copy constructor //copy o2
something 1.
Destructor  //after copy, destruct it (pass by value)
o2.v_.size():100000000
Destructor  //end of loop, destruct it
Copy constructor //copy o to o2
Copy constructor //copy o2
something 1.
Destructor  //after copy, destruct it (pass by value)
o2.v_.size():100000000
Destructor  //end of loop, destruct it
Operation took: 999 milliseconds
Destructor  //end of the block, destruct my_class
---------------------------------------------------------------
Q15
Parameterized constructor //with value
Operation took: 1174 milliseconds
Copy constructor //copy o to o2
Something 2.
o2.v_.size(): 100000000
Destructor  //end of loop, destruct it
Copy constructor //copy o to o2
Something 2.
o2.v_.size(): 100000000
Destructor  //end of loop, destruct it
Operation took: 513 milliseconds
Destructor  //end of the block, destruct my_class
---------------------------------------------------------------
Q16
Parameterized constructor //with value
Parameterized constructor //with value
Parameterized constructor //with value
Parameterized constructor //with value
Parameterized constructor //with value
Parameterized constructor //with value
Parameterized constructor //with value
Copy constructor //copy to my_vector
Copy constructor //copy to my_vector
Copy constructor //copy to my_vector
Copy constructor //copy to my_vector
Copy constructor //copy to my_vector
Copy constructor //copy to my_vector
Copy constructor //copy to my_vector
Destructor //after copy, destruct temporary 
Destructor //after copy, destruct temporary 
Destructor //after copy, destruct temporary 
Destructor //after copy, destruct temporary 
Destructor //after copy, destruct temporary 
Destructor //after copy, destruct temporary 
Destructor //after copy, destruct temporary 
Operation took: 4718 milliseconds
Copy constructor //copy my_vector to e (pass by value)
e.v_.size(): 10000000
Destructor //destruct copy e
Copy constructor //copy my_vector to e (pass by value)
e.v_.size(): 20000000
Destructor //destruct copy e
Copy constructor //copy my_vector to e (pass by value)
e.v_.size(): 30000000
Destructor //destruct copy e
Copy constructor //copy my_vector to e (pass by value)
e.v_.size(): 40000000
Destructor //destruct copy e
Copy constructor //copy my_vector to e (pass by value)
e.v_.size(): 50000000
Destructor //destruct copy e
Copy constructor //copy my_vector to e (pass by value)
e.v_.size(): 60000000
Destructor //destruct copy e
Copy constructor //copy my_vector to e (pass by value)
e.v_.size(): 70000000
Destructor //destruct copy e
Operation took: 833 milliseconds
e.v_.size(): 10000000 //pass by reference no copy
e.v_.size(): 20000000
e.v_.size(): 30000000
e.v_.size(): 40000000
e.v_.size(): 50000000
e.v_.size(): 60000000
e.v_.size(): 70000000
Operation took: 0 milliseconds
Destructor  //end of the block, destruct MyClass(70000000)
Destructor  //end of the block, destruct MyClass(60000000)
Destructor  //end of the block, destruct MyClass(50000000)
Destructor  //end of the block, destruct MyClass(40000000)
Destructor  //end of the block, destruct MyClass(30000000)
Destructor  //end of the block, destruct MyClass(20000000)
Destructor  //end of the block, destruct MyClass(10000000)
---------------------------------------------------------------
Question2:
MyVector():O(1) only few line of code.
MyVector(int size):O(n) dynamic memory allocation.
MyVector(const MyVector &rhs):O(n) because iterate through data.
~MyVector():O(1) only few line of code.
void push_back(int value):O(n) because iterate through data.
int pop_back():O(1) decrement only.
void push_front(int value):O(n) iterate through data.
int pop_front():O(n) iterate through data.
void insert(int value, int index):O(n) iterate through data.
int at(int index):O(1) we have location.
int find(int item):O(n) iterate through data.
ErrorCode get_error() const:O(1) return error.
int size() const:O(1) return size.
std::vector<int> MyVector::ConvertToStdVector():O(n) iterate through data.

Question3:
Queue::Queue(const Queue& rhs):O(n) copy constructor iterate through vector.
Queue& Queue::operator=(const Queue& rhs):O(n) copy assignment iterate through vector.
Queue Queue::operator+(const Queue& rhs):O(n) iterate through vector.
bool Queue::Enqueue(int value):O(1) push_back() is O(1) in verctor.
bool Queue::Dequeue():O(n) iterate through vector.
bool Queue::IsEmpty():O(1) return bool.
int Queue::Front():O(1) return first element.

Question4:
DoubleStack::DoubleStack() : evenVec_(), oddVec_(){}:O(1) initialization
void DoubleStack::push(int num):O(1) push_back() is O(1) in verctor.
void DoubleStack::pop():O(1) pop_back() is O(1) in verctor.
int DoubleStack::top():O(1) back is O(1) in verctor.
int DoubleStack::size():O(1) return size.
DoubleStack::empty():O(1) return bool.

Question5:
bool CPPLib::CheckValidExpression(const std::string& input):O(n) iterate throgh the string.
bool CPPLib::IsPalindrome(const std::string& input):O(n) iterate throgh the string.
int CPPLib::OddChar(const std::string& input):O(n) iterate throgh the string.