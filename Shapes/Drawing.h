#pragma once
#include <vector>
#include "Shape.h"
class Drawing {
public:
    void addShape(Shape* shape);

    void draw() const;
private:
    std::vector<Shape*> shapes;
};
