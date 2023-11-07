#pragma once
#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Shape.h"

class Triangle : public Shape {
public:
    Triangle(double side1, double side2, double side3);
    double calculateArea() const override;
    double calculatePerimeter() const override;

private:
    double side1;
    double side2;
    double side3;
};

#endif  // TRIANGLE_H
