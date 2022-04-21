//
// Created by elpil on 21.04.2022.
//

#ifndef CLASSES_SQUARE_H
#define CLASSES_SQUARE_H

#include "Rectangle.h"

class Square : public Rectangle {
private:
    int side;
public:
    Square(int a);

    int perimeter() override;
    int area() override;
};


#endif //CLASSES_SQUARE_H
