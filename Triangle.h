//
// Created by Leandro on 3/21/17.
//

#ifndef PROJECTS_TRIANGLE_H
#define PROJECTS_TRIANGLE_H

#include "Object.h"

class Triangle: public Object {

private:
    Vector a, b, c;

public:
    Triangle(Vector, Vector, Vector);
    ~Triangle();
    Intersection calculatesIntersection(Ray ray);
    void show();
};


#endif //PROJECTS_TRIANGLE_H
