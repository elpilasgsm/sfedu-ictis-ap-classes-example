//
// Created by elpil on 09.04.2022.
//

#ifndef CLASSES_RECTANGLE_H
#define CLASSES_RECTANGLE_H

#include "Figure.h"

class Rectangle : public Figure {

public:
    Rectangle(int a, int b);

    int area() override;

private:
    Point **convertLengthsToPoints(int a, int b);

};


#endif //CLASSES_RECTANGLE_H
