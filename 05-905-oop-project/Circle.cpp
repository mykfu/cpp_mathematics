#define _USE_MATH_DEFINES
#include "Circle.h"
#include "cmath"
#include <iostream>


Circle::Circle() {
    this->radius = 0.0;
    this->color = "white";
}

Circle::~Circle()
{
}

//Circle(double radius) {
//    this->radius = radius;
//    this->color = "white";
//}

Circle::Circle(double radius, string color = "white") {
    this->radius = radius;
    this->color = color;
}

double Circle::getRadius() const
{
    return radius;
}

void Circle::setRadius(double radius) {
    this->radius = radius;
}

string Circle::getColor() {
    return color;
}

double Circle::getArea()
{
    return M_PI * getRadius() * getRadius();
}

void Circle::print() {
    std::cout << color << " circle with radius " << radius << ".\n";
}
