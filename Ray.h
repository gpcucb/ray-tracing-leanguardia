//
// Created by Leandro on 3/14/17.
//

#ifndef PROJECTS_RAY_H
#define PROJECTS_RAY_H
#include "Vector.h"

class Ray {
private:
    Vector origin, direction;

public:
    Ray ();
    Ray (Vector origin, Vector direction);

};

#endif //PROJECTS_RAY_H