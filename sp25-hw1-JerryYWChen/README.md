[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/9yWLqeIe)

# HW1 EE538
## University of Southern California
## Instructor: Arash Saifhashemi

Please clone this repository, edit README.md to answer the questions, and fill up functions to finish the homework.

- Please find each question in a separate folder under [files](/files).
- For non-coding questions, fill out the answers in the README file.
- For coding questions, edit the files and check them in.
- For coding questions unless specified, you should add unit tests to the student_test.cc.
  We will clone and test your repo using your tests and some other tests (that are not provided). Your code should pass all of them.
- For submission, please push your answers to Github before the deadline.
- Rubrics:
  
| Question | Points |
| -------- | ------ |
| 1        | 18     |
| 2        | 18     |
| 3        | 18     |
| 4        | 18     |
| 5        | 18     |
| 6        | 18     |
| 7        | 18     |

- Total: 126 points. 100 points is considered full credit.


See [cpp-template](https://github.com/ourarash/cpp-template) for help on installing bazel and debugging.

# Question
- Please refer to [files](/files).
- For each question, implement and test it in the [files](/files).
- Write the runtime complexity of each question in this README file.

# Answers
[TODO: Should be filled out with runtime complexity of each question with justification.]

1.Reverse:Runtime Complexity O(n)
Because we iterate through array.

1.PlusOne:Runtime Complexity O(n)
Because we iterate through vector from right to left.

2.IsPrime:Runtime Complexity O(sqrt(n))
We only check sqaure root of n because every non-prime number must have at least
one factor less than square root of n.

3.Countnumberofspace:Runtime Complexity O(n)
Because we iterate through each character in the string.

4.Flatten3DVector:Runtime Complexity O(n)
there are total n element across all sub-array.

5.Climbstairs:Runtime Complexity O(3^n)
We recursively call climbstairs(n-1),climbstairs(n-2), and climbstairs(n-3).

6.ErrorCodeCalculator:Runtime Complexity O(1)
Arithmetic operations are both O(1)

7.CanBecome:Runtime Complexity O(n)
Concatenate s+s and iterate through it.