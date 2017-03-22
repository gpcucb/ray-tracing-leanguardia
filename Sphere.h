//
// Created by Leandro on 3/14/17.
//

#ifndef PROJECTS_SPHERE_H
#define PROJECTS_SPHERE_H

#include "Vector.h"

class Sphere {

private:
    Vector position;
    float radius, infinity;

public:
    Sphere(Vector, float);
    float calculatesIntersection(Vector, Vector);

};


#endif //PROJECTS_SPHERE_H
