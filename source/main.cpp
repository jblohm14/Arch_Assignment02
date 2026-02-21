#include <MathLibrary.hpp>
#include <iostream>

void MathResult1(int result) {
  std::cout << "Math Result1: " << result << std::endl;
}

void MathResult2(int result) {
  std::cout << "Divide by 3: " << result / 3 << std::endl;
}

void MathResult3(float result) {
  std::cout << "Math Result3: " << result << std::endl;
}

void MathResult4(double result) {
  std::cout << "Math Result4: " << result << std::endl;
}

void MathResult5(long double result) {
  std::cout << "Math Result5: " << result << std::endl;
}

static void test_1() {
  MathLibrary::add(10, 20, MathResult1);
  MathLibrary::multiply(5, 6, MathResult1);
  MathLibrary::divide(5, 6, MathResult1);
  MathLibrary::modulo(5, 6, MathResult1);
  MathLibrary::pow(2, 3, MathResult1);
  MathLibrary::sqrt(16, MathResult1);
  MathLibrary::factorial(5, MathResult1);
}

static void test_2() {
  MathLibrary::add(10, 20, MathResult2);
  MathLibrary::multiply(5, 6, MathResult2);
  MathLibrary::divide(5, 6, MathResult2);
  MathLibrary::modulo(5, 6, MathResult2);
  MathLibrary::pow(2, 3, MathResult2);
  MathLibrary::sqrt(16, MathResult2);
  MathLibrary::factorial(5, MathResult2);
}

static void test_floats() {
  MathLibrary::add(10.0f, 20.0f, MathResult3);
  MathLibrary::multiply(5.0f, 6.0f, MathResult3);
  MathLibrary::divide(5.0f, 6.0f, MathResult3);
  MathLibrary::modulo(5.0f, 6.0f, MathResult3);
  MathLibrary::pow(2.0f, 3.0f, MathResult3);
  MathLibrary::sqrt(16.0f, MathResult3);
  MathLibrary::factorial(5.0f, MathResult3);
}

static void test_doubles() {
  MathLibrary::add(10.0, 20.0, MathResult4);
  MathLibrary::multiply(5.0, 6.0, MathResult4);
  MathLibrary::divide(5.0, 6.0, MathResult4);
  MathLibrary::modulo(5.0, 6.0, MathResult4);
  MathLibrary::pow(2.0, 3.0, MathResult4);
  MathLibrary::sqrt(16.0, MathResult4);
  MathLibrary::factorial(5.0, MathResult4);
}

static void test_longs() {
  MathLibrary::add(10.0L, 20.0L, MathResult4);
  MathLibrary::multiply(5.0L, 6.0L, MathResult4);
  MathLibrary::divide(5.0L, 6.0L, MathResult4);
  MathLibrary::modulo(5.0L, 6.0L, MathResult4);
  MathLibrary::pow(2.0L, 3.0L, MathResult4);
  MathLibrary::sqrt(16.0L, MathResult4);
  MathLibrary::factorial(5.0L, MathResult4);
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