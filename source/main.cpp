#include <MathLibrary.hpp>
#include <iostream>

// print result as integer
void MathResult1(int result) {
  std::cout << "Math Result1: " << result << std::endl;
}

// print result as integer divided by 3
void MathResult2(int result) {
  std::cout << "Divide by 3: " << result / 3 << std::endl;
}

// print result as float
void MathResult3(float result) {
  std::cout << "Math Result3: " << result << std::endl;
}

// print result as double
void MathResult4(double result) {
  std::cout << "Math Result4: " << result << std::endl;
}

// print result as long double
void MathResult5(long double result) {
  std::cout << "Math Result5: " << result << std::endl;
}

static void test_1() {
  MathLibrary::add(10, 20, MathResult1);    // expect 30
  MathLibrary::multiply(5, 6, MathResult1); // expect 30
  MathLibrary::divide(5, 6, MathResult1);   // expect 0
  MathLibrary::modulo(20, 6, MathResult1);  // expect 2
  MathLibrary::pow(2, 3, MathResult1);      // expect 8
  MathLibrary::sqrt(8, MathResult1);        // expect 2
  MathLibrary::factorial(5, MathResult1);   // expect 120
}

static void test_2() {
  MathLibrary::add(10, 20, MathResult2);    // expect 10
  MathLibrary::multiply(5, 6, MathResult2); // expect 10
  MathLibrary::divide(5, 6, MathResult2);   // expect 0
  MathLibrary::modulo(20, 6, MathResult2);  // expect 0
  MathLibrary::pow(2, 3, MathResult2);      // expect 2
  MathLibrary::sqrt(8, MathResult2);        // expect 0
  MathLibrary::factorial(5, MathResult2);   // expect 40
}

static void test_floats() {
  MathLibrary::add(10.0f, 20.0f, MathResult3);    // expect 30
  MathLibrary::multiply(5.0f, 6.0f, MathResult3); // expect 30
  MathLibrary::divide(5.0f, 6.0f, MathResult3);   // expect 0.833
  MathLibrary::modulo(5.0f, 6.0f, MathResult3);   // expect 5
  MathLibrary::pow(2.0f, 3.0f, MathResult3);      // expect 8
  MathLibrary::sqrt(16.0f, MathResult3);          // expect 4
  MathLibrary::factorial(5.0f, MathResult3);      // expect 120
}

static void test_doubles() {
  MathLibrary::add(10.0, 20.0, MathResult4);    // expect 30
  MathLibrary::multiply(5.0, 6.0, MathResult4); // expect 30
  MathLibrary::divide(5.0, 6.0, MathResult4);   // expect 0.833
  MathLibrary::modulo(5.0, 6.0, MathResult4);   // expect 5
  MathLibrary::pow(2.0, 3.0, MathResult4);      // expect 8
  MathLibrary::sqrt(16.0, MathResult4);         // expect 4
  MathLibrary::factorial(5.0, MathResult4);     // expect 120
}

static void test_longs() {
  MathLibrary::add(10.0L, 20.0L, MathResult4);    // expect 30
  MathLibrary::multiply(5.0L, 6.0L, MathResult4); // expect 30
  MathLibrary::divide(5.0L, 6.0L, MathResult4);   // expect 0.833
  MathLibrary::modulo(5.0L, 6.0L, MathResult4);   // expect 5
  MathLibrary::pow(2.0L, 3.0L, MathResult4);      // expect 8
  MathLibrary::sqrt(16.0L, MathResult4);          // expect 4
  MathLibrary::factorial(5.0L, MathResult4);      // expect 120
}

int main() {
  std::cout << "Run MathLibrary with Callbacks..." << std::endl;

  test_1();
  test_2();
  test_floats();
  test_doubles();
  test_longs();

  return 0;
}