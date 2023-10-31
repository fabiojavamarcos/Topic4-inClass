#include "Circle.h"
#include <cmath>

const double PI = 3.14159265359;

Circle::Circle(double radius)
    : radius(radius) {}

double Circle::calculateArea() const {
    return PI * pow(radius, 2);
}

double Circle::calculatePerimeter() const {
    return 2 * PI * radius;
}
