//
// Created by Leandro on 3/14/17.
//

#include "Ray.h"

Ray::Ray()
{}

Ray::Ray(Vector origin, Vector direction)
{
    this -> origin = origin;
    this -> direction = direction;
}