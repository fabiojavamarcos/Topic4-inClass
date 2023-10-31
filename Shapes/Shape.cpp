#include "Shape.h"


void Shape::setColor(const std::string& color) {
    this->color = color;
}

std::string Shape::getColor() const {
    return color;
}

double Shape::calculateArea() const {
    return 0.0;  // Default implementation for the base class
}

double Shape::calculatePerimeter() const {
    return 0.0;  // Default implementation for the base class
}
