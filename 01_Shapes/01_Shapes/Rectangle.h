#pragma once
#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape {
public:
    Rectangle(double length, double width);
    double calculateArea() const override;
    double calculatePerimeter() const override;

private:
    double length;
    double width;
};

#endif  // RECTANGLE_H
