//
// Created by Leandro on 3/21/17.
//

#ifndef PROJECTS_TRIANGLE_H
#define PROJECTS_TRIANGLE_H

#include "Vector.h"
#include "Intersection.h"
#include "Ray.h"

class Triangle {

private:
    Vector a, b, c;

public:
    Triangle(Vector, Vector, Vector);
    Intersection calculatesIntersection(Ray ray);

};


#endif //PROJECTS_TRIANGLE_H
