//
// Created by Leandro on 3/14/17.
//

#ifndef PROJECTS_SPHERE_H
#define PROJECTS_SPHERE_H

#include "Object.h"

class Sphere: public Object {

private:
    Vector position;
    double radius, infinity;

public:
    Sphere(Vector, double);
    ~Sphere();
    void show();
    Intersection calculatesIntersection(Ray ray);

};


#endif //PROJECTS_SPHERE_H
