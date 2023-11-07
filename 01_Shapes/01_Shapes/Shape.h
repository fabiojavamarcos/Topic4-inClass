#pragma once
#ifndef SHAPE_H
#define SHAPE_H

#include <string>

class Shape {
public:
    void setColor(const std::string& color);
    std::string getColor() const;
    virtual double calculateArea() const;
    virtual double calculatePerimeter() const;

private:
    std::string color;
};

#endif  // SHAPE_H
