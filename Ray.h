//
// Created by Leandro on 3/28/17.
//

#ifndef PROJECTS_RAY_H
#define PROJECTS_RAY_H

#include "Vector.h"

class Ray {
private:
    Vector origin, direction;

public:
    Ray(Vector, Vector);
    Vector getOrigin();
    Vector getDirection();
};


#endif //PROJECTS_RAY_H
