//
// Created by Leandro on 3/28/17.
//

#ifndef PROJECTS_RAYTRACER_H
#define PROJECTS_RAYTRACER_H

#include "Sphere.h"
#include "Triangle.h"
#include "Camera.h"
#include <vector>

class RayTracer {
private:
    double nx, ny;
    Camera camera;
    vector<Object*> objects;
public:
    RayTracer(double, double, Camera);
    void insertObject(Object*);
    void showObjects();
    void rayTrace();
};


#endif //PROJECTS_RAYTRACER_H
