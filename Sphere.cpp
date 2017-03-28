//
// Created by Leandro on 3/14/17.
//

#include "Sphere.h"

Sphere::Sphere(Vector position, float radius)
{
    this->position = position;
    this->radius = radius;
    infinity = numeric_limits<float>::infinity();
}

float Sphere::calculatesIntersection(Vector rayOrigin, Vector rayDirection)
{
    float a, b, c, discriminant, t0, t1, t = infinity;
    Vector rayOriginMinusCenter = rayOrigin.difference(position);
    a = rayDirection.dotProduct(rayDirection);
    b = rayDirection.numberProduct(2).dotProduct(rayOriginMinusCenter);
    c = rayOriginMinusCenter.dotProduct(rayOriginMinusCenter);

    cout<<"a. "<<a<<" b. "<<b<<" c. "<<c<<endl;

    discriminant = pow(b, 2) - (4 * a * c);
//    cout << discriminant << endl;
    if (discriminant < 0.0)
        return false;

    t0 = ((b * -1) - sqrt(discriminant))/(2 * a);
    t1 = ((b * -1) + sqrt(discriminant)) / (2 * a);
    bool intersection = false;
    if ((t0 > 0.0) && (t0 < t)){
        t = t0;
        intersection = true;
    }
    if ((t1 > 0.0) && (t1 < t)){
        t = t1;
        intersection = true;
    }
    cout << t << endl;
    return intersection;
}