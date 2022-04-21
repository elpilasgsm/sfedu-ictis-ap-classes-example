//
// Created by elpil on 02.04.2022.
//
#ifndef CLASSES_POINT_H
#define CLASSES_POINT_H

#include <math.h>


class Point {
private:
    int x;
    int y;
protected:
    //
public:
    double rVector();

    Point();

    Point(int, int);

    ~Point();

    int getX();

    double distance(Point *p2);

    void print();

    int getY();
};


#endif //CLASSES_POINT_H
