//
// Created by elpil on 09.04.2022.
//

#include "Figure.h"
#include <iso646.h>
#include <iostream>

int Figure::perimeter() {
    std::cout << "Figure Implementation perimeter" << std::endl;
    double val = 0;
    if (points == nullptr or numberOfPoints == 0) {
        return 0;
    }
    for (int i = 0; i < this->numberOfPoints - 1; i++) {
        val += this->points[i]->distance(this->points[i + 1]);
    }
    val += this->points[this->numberOfPoints - 1]->distance(this->points[0]);
    return (int) val;
}

Figure::Figure(Point **points, int size) {
    this->points = points;
    this->numberOfPoints = size;
}

Figure::~Figure() {
    if (points != nullptr) {
        for (int i = 0; i < this->numberOfPoints; i++) {
            delete points[i];
        }
    }
    delete[] points;
}


