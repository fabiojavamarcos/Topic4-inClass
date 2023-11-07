#pragma once
#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle : public Shape {
public:
    Circle(double radius);
    double calculateArea() const override;
    double calculatePerimeter() const override;

private:
    double radius;
};

#endif  // CIRCLE_H
