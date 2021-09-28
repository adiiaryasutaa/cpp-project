#pragma once

#include <math.h>

namespace area {

  double square(double length) {
    return pow(length, 2);
  }

  double rectangle(double length, double wide) {
    return length * wide;
  }

  double triangle(double base, double height) {
    return 0.5 * base * height;
  }

  double trapezoid(double a, double b, double height) {
    return 0.5 * (a + b) * height;
  }

  double rhombus(double d1, double d2) {
    return 0.5 * d1 * d2;
  }

  double kite(double d1, double d2) {
    return 0.5 * d1 * d2;
  }

  double parallelogram(double height, double base) {
    return height * base;
  }

  double circle(int radius) {
    return radius % 7 == 0 ? (3.142857142857143 * pow(radius, 2)) : (3.14 * pow(radius, 2));
  }

}