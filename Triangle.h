//
// Created by Leandro on 3/21/17.
//

#ifndef PROJECTS_TRIANGLE_H
#define PROJECTS_TRIANGLE_H

#include "Vector.h"

class Triangle {

private:
    Vector a, b, c;

public:
    Triangle(Vector, Vector, Vector);
    float calculatesIntersection(Vector, Vector);

};


#endif //PROJECTS_TRIANGLE_H
