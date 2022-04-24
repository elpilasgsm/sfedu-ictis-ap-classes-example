//
// Created by elpil on 23.04.2022.
//

#include "Circle.h"

Circle::Circle(Point* center, int radius) : ir(radius), Figure(new Point*[1]{ new Point(center->getX(), center->getY()) }, 1)
{
	pc = points;
}

int 
Circle::perimeter()
{
	std::cout << "Circle Implementation perimeter" << std::endl;
	return 2 * 3.14 * ir;
}

int 
Circle::area()
{
	std::cout << "Circle Implementation area" << std::endl;
	return 3.14 * ir * ir;
}

Circle::~Circle()
{
}