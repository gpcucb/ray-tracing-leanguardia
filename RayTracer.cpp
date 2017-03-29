//
// Created by Leandro on 3/28/17.
//

#include "RayTracer.h"
#include "RGB.h"

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

void RayTracer::rayTracing()
{
    for (int i = 0; i < nx; i++)
    {
        for (int j = 0; j < ny; j++)
        {
            Vector rayDirection = camera.calculateRayDirection(i, j, nx, ny);
            Ray ray = camera.createRay(rayDirection);
            RGB pixelColor = rayTrace(ray);
        }
    }
}

RGB RayTracer::rayTrace(Ray ray)
{
    for (Object* object : objects) {
        Intersection intersection = object -> calculatesIntersection(ray);
        if (intersection.succeeded())
            return calculateColor(object, ray);
        else
            return RGB(0,0,0);
    }

}

RGB RayTracer::calculateColor(Object *object, Ray ray) {
    return RGB(256, 256, 256);
}
