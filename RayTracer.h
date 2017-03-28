//
// Created by Leandro on 3/28/17.
//

#ifndef PROJECTS_RAYTRACER_H
#define PROJECTS_RAYTRACER_H

#include "Sphere.h"
#include "Triangle.h"
#include <vector>

class RayTracer {
private:
    double nx, ny;
    vector<Object*> objects;
public:
    RayTracer(double, double);
    void insertObject(Object*);
    void showObjects();
};


#endif //PROJECTS_RAYTRACER_H
