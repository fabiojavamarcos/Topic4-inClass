#include <iostream>
#include "Drawing.h"
#include "Shape.h"
#include "Rectangle.h"


void Drawing::addShape(Shape* shape) {
	shapes.push_back(shape);
}

void Drawing::draw() const {
	for (const auto& shape : shapes) {
		std::cout << "Shape: " << typeid(*shape).name() << std::endl;
		std::cout << "Area: " << shape->calculateArea() << std::endl;
		std::cout << "Perimeter: " << shape->calculatePerimeter() << std::endl;
		std::cout << "Color: " << shape->getColor() << std::endl;
		std::cout << "---------------------------" << std::endl;
	}
}

