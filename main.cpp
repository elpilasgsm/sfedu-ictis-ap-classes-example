#include <iostream>
#include <math.h>
#include "Point.h"
#include "Figure.h"
#include "Rectangle.h"
#include "Square.h"


int main() {
    Point **point = new Point *[4];
    point[0] = new Point(0, 0);
    point[1] = new Point(10, 0);
    point[2] = new Point(10, 4);
    point[3] = new Point(0, 4);
    try {
        Figure *f1 = new Figure(point, 4);
        std::cout << f1->area() << std::endl;
        std::cout << f1->perimeter() << std::endl;
        delete f1;
    } catch (std::string i) {
        std::cout << "Catch exception: " << i << std::endl;
    }
    Rectangle *r = new Rectangle(10, 4);
    std::cout << r->area() << std::endl;
    std::cout << r->perimeter() << std::endl;
    delete r;

    Square *sq = new Square(10);
    std::cout << sq->area() << std::endl;
    std::cout << sq->perimeter() << std::endl;
    delete sq;

    return 0;
}
