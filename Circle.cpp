//
// Created by elpil on 23.04.2022.
//

#include "Circle.h"
#include <iostream>
Circle::Circle(Point* center, int radius) :Figure(new Point* [1]{ new Point(center->getX(),center->getY()) }, 1), radius(radius) {}


int Circle::perimeter()
{
    std::cout << "Perimeter " << std::endl;
    return 2 * pi * radius;
}

int Circle::area()
{
    std::cout << "Area " << std::endl;
    return pi * pow(radius, 2);
}

Circle::~Circle() {}