// Shapes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Drawing.h"
#include "Rectangle.h"
#include <iostream>
#include <iomanip> 

#include "Triangle.h"
#include "Circle.h"

using namespace std;

int main() {
    Drawing drawing;
    
    Shape shape;
    cout << "Shape Area: " << shape.calculateArea() << endl;

    Rectangle rectangle(5.0, 3.0);
    rectangle.setColor("Red");
    cout << "Rectangle Area: " << rectangle.calculateArea() << endl;

    Circle circle(2.5);
    circle.setColor("Blue");
    cout << "Circle Area: " << circle.calculateArea() << endl;

    Triangle triangle(3.0, 4.0, 5.0);
    triangle.setColor("Green");
    cout << "Triangle Area: " << triangle.calculateArea() << endl;


    drawing.addShape(&rectangle);
    drawing.addShape(&circle);
    drawing.addShape(&triangle);

    drawing.draw();

    return 0;
}
