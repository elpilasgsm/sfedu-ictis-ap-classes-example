//
// Created by elpil on 23.04.2022.
//

#ifndef CLASSES_TRIANGLE_H
#define CLASSES_TRIANGLE_H


#include <iostream>
#include "Figure.h"

class Triangle : Figure
{
private:
    Point** points;
public:
    Triangle(Point* p1, Point* p2, Point* p3);
    int perimeter() override;
    int area() override;
    ~Triangle();
};


#endif //CLASSES_TRIANGLE_H
