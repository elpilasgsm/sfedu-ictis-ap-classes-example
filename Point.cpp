//
// Created by elpil on 02.04.2022.
//

#include "Point.h"
#include <iostream>

int Point::getY() {
    return this->y;
}

int Point::getX() {
    return this->x;
}

double Point::rVector() {
    return sqrt(pow(this->x, 2.0) + pow(this->y, 2.0));
}

Point::~Point() {

}

Point::Point(int x, int y) {
    this->x = x;
    this->y = y;
}

void Point::print() {
    std::cout
            << "(x,y): "
            << "(" << this->x
            << ", "
            << this->y
            << ")" << std::endl;
}

Point::Point() {
    this->x = 0;
    this->y = 0;
}

double Point::distance(Point *p2) {
    return sqrt(pow(this->x - p2->getX(), 2.0) + pow(this->y - p2->getY(), 2.0));
}
