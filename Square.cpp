//
// Created by elpil on 21.04.2022.
//

#include "Square.h"
#include <iostream>

Square::Square(int a) : Rectangle(a, a) {
    this->side = a;
}

int Square::perimeter() {
    std::cout << "Square Implementation perimeter" << std::endl;
    return side * 4;
}

int Square::area() {
    return side * side;
}
