//
// Created by Leandro on 3/28/17.
//

#ifndef PROJECTS_OBJECT_H
#define PROJECTS_OBJECT_H

#include "Intersection.h"
#include "Ray.h"
#include "Vector.h"

class Object {
public:
    virtual ~Object() {};
public:
    virtual void show() = 0;
    virtual Intersection calculatesIntersection(Ray) = 0;

};

#endif //PROJECTS_OBJECT_H
