//
// Created by Leandro on 3/28/17.
//

#include "RayTracer.h"

RayTracer::RayTracer(double width, double height)
{
    nx = width;
    ny = height;
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

