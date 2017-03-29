//
// Created by Leandro on 3/28/17.
//

#include "RayTracer.h"

RayTracer::RayTracer(double width, double height, Camera camera) {
    nx = width;
    ny = height;
    this -> camera = camera;
}

void RayTracer::insertObject(Object *object)
{
    objects.push_back(object);
}

void RayTracer::showObjects()
{
    for (auto &&object : objects) {
        object->show();
    }
}

void RayTracer::rayTrace()
{
    Vector rayDirection;
    for (int i = 0; i < nx; i++)
    {
        for (int j = 0; j < ny; j++)
        {
            rayDirection = camera.calculateRayDirection(i, j, nx, ny);
            Ray ray = camera.createRay(rayDirection);
            objects[0]->calculatesIntersection(ray);
            objects[1]->calculatesIntersection(ray);
        }
    }
}