#include "Triangle.h"
#include <cmath>

Triangle::Triangle(double side1, double side2, double side3)
    : side1(side1), side2(side2), side3(side3) {}

double Triangle::calculateArea() const {
    // Heron's formula to calculate the area of a triangle
    double semiPerimeter = calculatePerimeter() / 2;
    return sqrt(semiPerimeter *
        (semiPerimeter - side1) *
        (semiPerimeter - side2) *
        (semiPerimeter - side3));
}

double Triangle::calculatePerimeter() const {
    return side1 + side2 + side3;
}
