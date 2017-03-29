//
// Created by Leandro on 3/28/17.
//

#ifndef PROJECTS_RAYTRACER_H
#define PROJECTS_RAYTRACER_H

#include "Sphere.h"
#include "Triangle.h"
#include "Camera.h"
#include "RGB.h"
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
    void rayTracing();
    RGB rayTrace(Ray ray);

    RGB calculateColor(Object *pObject, Ray ray);
};


#endif //PROJECTS_RAYTRACER_H
