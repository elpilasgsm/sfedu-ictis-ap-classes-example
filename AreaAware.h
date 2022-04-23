//
// Created by elpil on 21.04.2022.
//

#ifndef CLASSES_AREAAWARE_H
#define CLASSES_AREAAWARE_H

#include <string>

class AreaAware {
public:
    virtual int area() { throw std::string("Method not implemented"); }
};

#endif //CLASSES_AREAAWARE_H
