//
// Created by elpil on 23.04.2022.
//

#include "Circle.h"


Circle::Circle(Point *center, int radius) {
    this->center = center;
    this.radius = radius;
}

int Circle::perimeter() {
    return 2 * pi * this.radius;
}

int Circle::area() {
    return pi * pow(this.radius, 2);
};

Circle::~Circle() {

}