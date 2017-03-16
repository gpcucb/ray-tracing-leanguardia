//
// Created by Leandro on 3/14/17.
//

#include "Sphere.h"

Sphere::Sphere(Vector position, float radius)
{
    this->position = position;
    this->radius = radius;
}

float Sphere::calculatesIntersection(Vector rayOrigin, Vector rayDirection)
{
    float a, b, c;
    Vector rayOriginMinusCenter = rayOrigin.difference(position);
    a = rayDirection.dotProduct(rayDirection);
    b = rayDirection.numberProduct(2).dotProduct(rayOriginMinusCenter);
    c = rayOriginMinusCenter.dotProduct(rayOriginMinusCenter);
    cout<<"a. "<<a<<" b. "<<b<<" c. "<<c<<endl;
    return 0;
}