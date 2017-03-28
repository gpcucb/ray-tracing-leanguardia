//
// Created by Leandro on 3/28/17.
//

#include "Ray.h"

Ray::Ray(Vector origin, Vector direction)
{
    this -> origin = origin;
    this -> direction = direction;
}

Vector Ray::getOrigin() {
    return origin;
}

Vector Ray::getDirection() {
    return direction;
}
