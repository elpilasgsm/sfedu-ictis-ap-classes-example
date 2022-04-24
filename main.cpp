#include <iostream>
#include <math.h>
#include "Point.h"
#include "Figure.h"
#include "Rectangle.h"
#include "Square.h"
#include "Circle.h"
#include "Triangle.h"


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

    Point* cp = new Point(10, 10);
    Circle *cq = new Circle(cp, 10);
    std::cout << cq->area() << std::endl; //answer near 314
    std::cout << cq->perimeter() << std::endl; //answer near 62,8
    delete cp;
    delete cq;

    Point* tp[] = { new Point(10, 10), new Point(0, 5), new Point(1, 6) };
    Triangle *triangle = new Triangle(tp[0] , tp[1] , tp[2]);
    std::cout << triangle->area() << std::endl; //answer near 2,506819
    std::cout << triangle->perimeter() << std::endl; //answer near 22,4432
    for (int i = 0; i < 3; ++i)
        delete tp[i];
    delete triangle;

    return 0;
}
