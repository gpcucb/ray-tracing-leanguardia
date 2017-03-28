//
// Created by Leandro on 3/14/17.
//

#ifndef PROJECTS_SPHERE_H
#define PROJECTS_SPHERE_H

#include "Vector.h"
#include "Ray.h"
#include "Intersection.h"

class Sphere {

private:
    Vector position;
    double radius, infinity;

public:
    Sphere(Vector, double);
    Intersection calculatesIntersection(Ray ray);

};


#endif //PROJECTS_SPHERE_H
