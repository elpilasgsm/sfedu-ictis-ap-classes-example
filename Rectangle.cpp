//
// Created by elpil on 09.04.2022.
//

#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(int a, int b) : Figure(convertLengthsToPoints(a, b), 4) {

}

Point **Rectangle::convertLengthsToPoints(int a, int b) {
    Point **point = new Point *[4];
    point[0] = new Point(0, 0);
    point[1] = new Point(a, 0);
    point[2] = new Point(a, b);
    point[3] = new Point(0, b);
    return point;
}

int Rectangle::area() {
    std::cout << "Rectangle Implementation area" << std::endl;
    return (int) (this->points[0]->distance(this->points[1]) * this->points[1]->distance(this->points[2]));
}

