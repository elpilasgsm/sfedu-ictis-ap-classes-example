//
// Created by elpil on 23.04.2022.
//

#ifndef CLASSES_CIRCLE_H
#define CLASSES_CIRCLE_H

#include "Figure.h"
#include <math.h>

/**
 * TODO Implement constructor, destructor,  perimeter and area methods in Circle.cpp file
 *
 */
class Circle :
public:
    Point *center;
    int radius;

        public Figure {
public:
    Circle(Point *center, int radius);
    }

    int perimeter();

    int area();

    ~Circle();

};


#endif //CLASSES_CIRCLE_H
