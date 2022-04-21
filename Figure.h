//
// Created by elpil on 09.04.2022.
//

#ifndef CLASSES_FIGURE_H
#define CLASSES_FIGURE_H

#include "Point.h"
#include "PerimeterAware.h"
#include "AreaAware.h"

class Figure : public PerimeterAware, public AreaAware {
protected:
    Point **points;
    int numberOfPoints;
public:

    Figure(Point **points, int size);

    ~Figure();

    int perimeter() override;

};


#endif //CLASSES_FIGURE_H
