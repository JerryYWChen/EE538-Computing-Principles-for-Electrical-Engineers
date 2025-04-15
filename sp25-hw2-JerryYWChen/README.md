[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/lWdvaK1G)

# HW2 EE538
## University of Southern California
## Instructor: Arash Saifhashemi

Please clone this repository, edit README.md to answer the questions, and fill up functions to finish the homework.

Important: Please use bazel with c++17:

```bash
bazel test --cxxopt="-std=c++17"  {test_target}
```

- Please find each question in a separate folder under [files](/files).
- For non-coding questions, fill out the answers in the README file.
- For coding questions, edit the files and check them in.
- For coding questions unless specified, you should add unit tests to the student_test.cc. We will clone and test your repo using your tests and some other tests (that are not provided). Your code should pass all of them.
- For submission, please push your answers to Github before the deadline.
- Rubrics:
  
| Question | Points |
| -------- | ------ |
| 1        | 10     |
| 2        | 18     |
| 3        | 10     |
| 4        | 20     |
| 5        | 25     |
| 6        | 30     |

- 100 points is considered full credit.


See [cpp-template](https://github.com/ourarash/cpp-template) for help on installing bazel and debugging.

# Question
- Please refer to [files](/files).
- For each question, implement and test it in the [files](/files).
- Write the runtime complexity of each question in this README file.

# Write non-coding answers below
[TODO: Should be filled out with runtime complexity of each question with justification.]
1.Runtime Complexity O(N) because we iterate through a string.

3.Runtime Complexity O(1) because only 3 independent operation.

4.1 UniqueVectorNotBySet:Runtime Complexity O(N^2) because iterate through the vector and use find().

4.2 UniqueVectorBySet:Runtime Complexity O(NlogN) because each set have logN insertion.

4.3 IntersectVectors:Runtime Complexity O(NlogN) because each set have logN insertion.

4.4 DiffVectors:Runtime Complexity O(NlogN) because each set have logN insertion.

5.1 push_back:Runtime Complexity O(N) becasue copy all element.

5.2 pop_back:Runtime Complexity O(N) becasue copy all element.

5.3 insert:Runtime Complexity O(N) becasue copy all element before and after index.

5.4 erase:Runtime Complexity O(N) becasue copy all element before and after index.

5.5 find:Runtime Complexity O(N) because we iterate through a array.

6.1 setDifference:Runtime Complexity O(NlogN) because find function and we iterate through set1.

6.2 areDisjoint:Runtime Complexity O(NlogN) because find function and we iterate through set1.


