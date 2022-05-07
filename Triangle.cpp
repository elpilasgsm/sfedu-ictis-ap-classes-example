//
// Created by elpil on 23.04.2022.
//

#include "Triangle.h"


Triangle::Triangle(Point *a1, Point *a2, Point *a3) {
    this->a1 = a1;
    this->a2 = a2;
    this->a3 = a3;
}

int Triangle::Perimeter() {

    double p = this->a1->distance(a2) + this->a1->distance(a3) + this->a2->distance(a3);
    return p;
}

int Triangle::Area(Point *a1, Point *a2, Point *a3) {

    double p = this.Perimeter() / 2;
    double a = this->a1->distance(a2);
    double b = this->a1->distance(a3);
    double c = this->a2->distance(a3);

    double s = sqrt(p * (p - a) * (p - b) * (p - c));
    return s;
}

Triangle::~Triangle() {

}
