#include <iostream>
#include "area.hpp"

void calculateSquareArea();
void calculateRectangleArea();
void calculateTriangleArea();
void calculateTrapezoidArea();
void calculateRhombusArea();
void calculateKiteArea();
void calculateParallelogramArea();
void calculateCircleArea();

int main(int argc, char const *argv[])
{

  int selection;
  
  std::cout << "SELECT TWO DIMENSIONAL FIGURE" << std::endl
            << "=============================" << std::endl
            << "1. Square" << std::endl
            << "2. Rectangle" << std::endl
            << "3. Triangle" << std::endl
            << "4. Trapezoid" << std::endl
            << "5. Rhombus" << std::endl
            << "6. Kite" << std::endl
            << "7. Parallelogram" << std::endl
            << "8. Circle" << std::endl
            << "=============================" << std::endl;
  std::cin >> selection;
  std::cout << std::endl;

  switch (selection) {
    case 1:
      calculateSquareArea();
      break;

    case 2:
      calculateRectangleArea();
      break;

    case 3:
      calculateTriangleArea();
      break;

    case 4:
      calculateTrapezoidArea();
      break;

    case 5:
      calculateRhombusArea();
      break;

    case 6:
      calculateKiteArea();
      break;

    case 7:
      calculateParallelogramArea();
      break;

    case 8:
      calculateCircleArea();
      break;
    
    default:
      std::cout << "Please insert between 1 and 8" << std::endl;
      break;
  }

  return 0;
}

void calculateSquareArea() {
  double a;
  std::cout << "Side length : "; std::cin >> a;
  std::cout << "Area        : " << area::square(a) << std::endl;
}

void calculateRectangleArea() {
  double length, wide;
  std::cout << "Lenght : "; std::cin >> length;
  std::cout << "Wide   : "; std::cin >> wide;
  std::cout << "Area   : " << area::rectangle(length, wide) << std::endl;
}

void calculateTriangleArea() {
  double base, height;
  std::cout << "Base length : "; std::cin >> base;
  std::cout << "Height      : "; std::cin >> height;
  std::cout << "Area        : " << area::triangle(base, height) << std::endl;
}

void calculateTrapezoidArea() {
  double a, b, height;
  std::cout << "A      : "; std::cin >> a;
  std::cout << "B      : "; std::cin >> b;
  std::cout << "Height : "; std::cin >>height;
  std::cout << "Area   : " << area::trapezoid(a, b, height) << std::endl;
}

void calculateRhombusArea() {
  double d1, d2;
  std::cout << "D1   : "; std::cin >> d1;
  std::cout << "D2   : "; std::cin >> d2;
  std::cout << "Area : " << area::rhombus(d1, d2) << std::endl;
}

void calculateKiteArea() {
  double d1, d2;
  std::cout << "D1   : "; std::cin >> d1;
  std::cout << "D2   : "; std::cin >> d2;
  std::cout << "Area : " << area::kite(d1, d2) << std::endl;
}

void calculateParallelogramArea() {
  double height, base;
  std::cout << "Height : "; std::cin >> height;
  std::cout << "Base   : "; std::cin >> base;
  std::cout << "Area   : " << area::parallelogram(height, base) << std::endl;
}

void calculateCircleArea() {
  int radius;
  std::cout << "Radius : "; std::cin >> radius;
  std::cout << "Area   : " << area::circle(radius) << std::endl;
}
