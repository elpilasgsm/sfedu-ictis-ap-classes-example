//
// Created by elpil on 23.04.2022.
//

#include "Triangle.h"

Triangle::Triangle(Point* p1, Point* p2, Point* p3):Figure(new Point* [3]{ new Point(p1->getX() , p1->getY()) , new Point(p2->getX() , p2->getY()) , new Point(p3->getX() , p3->getY()) }, 3)
{
    points = Figure::points;
}

int Triangle::perimeter()
{
    std::cout << "Triangle Implementation perimeter" << std::endl;
    double a = sqrt(pow(points[0]->getX() - (double)points[1]->getX(), 2) + pow(points[0]->getY() - (double)points[1]->getY(), 2));
    double b = sqrt(pow(points[1]->getX() - (double)points[2]->getX(), 2) + pow(points[1]->getY() - (double)points[2]->getY(), 2));
    double c = sqrt(pow(points[2]->getX() - (double)points[0]->getX(), 2) + pow(points[2]->getY() - (double)points[0]->getY(), 2));
    return a + b + c;
}

int Triangle::area()
{
    std::cout << "Triangle Implementation area" << std::endl;
    double a = sqrt(pow(points[0]->getX() - (double)points[1]->getX(), 2) + pow(points[0]->getY() - (double)points[1]->getY(), 2));
    double b = sqrt(pow(points[1]->getX() - (double)points[2]->getX(), 2) + pow(points[1]->getY() - (double)points[2]->getY(), 2));
    double c = sqrt(pow(points[2]->getX() - (double)points[0]->getX(), 2) + pow(points[2]->getY() - (double)points[0]->getY(), 2));
    return (double)1 / 4 * sqrt(pow(a * a + b * b + c * c, 2) - 2 * (pow(a, 4) + pow(b, 4) + pow(c, 4)));
}

Triangle::~Triangle() {}