#include <iostream>
#include <set>
#include <vector>
// - Run the following code with Address Sanitizer enabled:
//   - bazel run //files/3:non_coding_q --config=asan
//   - Note: the program might crash!
// - What is wrong with each piece of code below?
// - For each case modify the code so that the issue is fixed.

void Question1() {
  // vector element is empty -> resize to 10
  //int element is redundant -> remove it 
  std::vector<int> elements;
  elements.resize(10);

  // Number of values to read from the input
  const int number_of_items = 10;

  // Initializing the elements vector.
  for (int i = 0; i < number_of_items; i++) {
    elements[i] = 0;
  }
}

void Question2() {
  // int* a is an uninitialized pointer, point to garbage value, 
  // leads to undefined behavior
  int i = 12;
  int* a = &i;
  (*a)++;
  std::cout << "(*a): " << (*a) << std::endl;
}

void Question3() {
  // memory leak -> missing delete
  int* a = new int;
  int* b = new int;
  (*a) = 1;
  (*b) = 2;

  std::cout << "(*a) + (*b): " << (*a) + (*b) << std::endl;

  delete a;
  delete b;
}

void Question4() {
  // Memory leak : missing delete
  // move pointer a and b to invalid memory location
  int* a = new int;
  int* b = new int;
  (*a) = 1;
  (*b) = 2;
  std::cout << "(*a) + (*b): " << (*a) + (*b) << std::endl;

  delete a;
  delete b;
}

void Question5() {
  //Infinite loop
  for (int i = 0; i < 10; i++) {
    std::cout << "i: " << i << std::endl;
  }
}

void Question6() {
  //The set cause infinite loop or undefined behavior
    std::set<int> elements = {0, 1, 2, 3, 4, 5};
    std::set<int> new_elements;

    for (auto it = elements.begin(); it != elements.end(); ++it) {
        new_elements.insert((*it) + 1);
    }

    elements = new_elements;

    for (auto e : elements) {
        std::cout << "e: " << e << std::endl;
    }
}



int main() {
  int user_choice;

  bool run_the_loop = true;
  while (run_the_loop) {
    std::cout << "Please enter a value between 1 to 6 to run a function. Any "
                 "other value to exit."
              << std::endl;
    std::cin >> user_choice;
    switch (user_choice) {
      case 1:
        Question1();
        break;
      case 2:
        Question2();
        break;
      case 3:
        Question3();
        break;
      case 4:
        Question4();
        break;
      case 5:
        Question5();
        break;
      case 6:
        Question6();
        break;
      default:
        std::cout << "Invalid value entered. Exit the program!" << std::endl;
        run_the_loop = false;
        break;
    }
  }
  return 0;
}