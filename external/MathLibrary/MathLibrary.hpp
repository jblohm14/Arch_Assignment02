#pragma once

#include <iostream>

// define callbacks to return computed results
typedef void (*int_callback)(int result);
typedef void (*float_callback)(float result);
typedef void (*double_callback)(double result);
typedef void (*long_callback)(long double result);

namespace MathLibrary {

template <typename Type, typename CallBack>
void add(Type x, Type y, CallBack cb) {
  std::cout << "add:" << std::endl;
  auto result = x + y;
  cb(result);
}

template <typename Type, typename CallBack>
void multiply(Type x, Type y, CallBack cb) {
  std::cout << "multiply:" << std::endl;
  auto result = x * y;
  cb(result);
}

template <typename Type, typename CallBack>
void divide(Type x, Type y, CallBack cb) {
  std::cout << "divide:" << std::endl;
  auto result = x / y;
  cb(result);
}

template <typename Type, typename CallBack>
void modulo(Type x, Type y, CallBack cb) {
  std::cout << "modulo:" << std::endl;
  int result = (int)x % (int)y;
  cb(result);
}

template <typename Type, typename CallBack>
static void factorial_impl(Type n, Type acc, CallBack cb) {
  if (n <= 1) {
    cb(acc);
    return;
  }

  factorial_impl(n - 1, acc * n, cb);
}

template <typename Type, typename CallBack>
void factorial(Type n, CallBack cb) {
  std::cout << "factorial:" << std::endl;
  factorial_impl(n, (Type)1, cb);
}

template <typename Type, typename CallBack>
void pow(Type base, Type exp, CallBack cb) {
  std::cout << "pow:" << std::endl;
  double result = 1.0;

  bool negative = false;
  if (exp < 0) {
    negative = true;
    exp = -exp;
  }

  for (int i = 0; i < exp; ++i) {
    result *= base;
  }

  if (negative)
    result = 1.0 / result;

  cb(result);
}

template <typename Type, typename CallBack> void sqrt(Type value, CallBack cb) {
  std::cout << "sqrt:" << std::endl;
  if (value <= 0.0) {
    cb(0.0);
    return;
  }

  double guess = value;
  double epsilon = 0.000001;

  for (int i = 0; i < 50; ++i) {
    double next = 0.5 * (guess + value / guess);

    if ((next - guess < epsilon) && (guess - next < epsilon))
      break;

    guess = next;
  }

  cb(guess);
}
} // namespace MathLibrary