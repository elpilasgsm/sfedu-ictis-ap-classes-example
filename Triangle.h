//
// Created by elpil on 23.04.2022.
//

#ifndef CLASSES_TRIANGLE_H
#define CLASSES_TRIANGLE_H

#include "Figure.h"
#include <math.h>

/**
 * TODO extend this Class from Figure class and Implement constructor, destructor,  perimeter and area methods in Triangle.cpp file
 */
class Triangle:
public:
        Point a1, a2, a3;
        public Figure {
//TODO put your code here
//you should define methods and constructor/destructor prototypes here and implement them in Triangle.cpp file
//constructor must use the pointers to 3 apexes of the triangle.
public:
    Triangle(Point *a1, Point *a2, Point *a3);

    int Perimeter();

    int Area(Point *a1, Point *a2, Point *a3);
};


#endif //CLASSES_TRIANGLE_H
