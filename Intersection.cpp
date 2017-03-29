//
// Created by Leandro on 3/28/17.
//

#include "Intersection.h"

Intersection::Intersection() {}

Intersection::Intersection(bool success)
{
    this -> success = success;
}

Intersection::Intersection(bool success, double distance) {
    this -> success = success;
    this -> distance = distance;
}

bool Intersection::succeeded() {
    return success;
}
