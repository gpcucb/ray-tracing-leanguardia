//
// Created by Leandro on 3/14/17.
//

#include "Sphere.h"
#include "Intersection.h"

Sphere::Sphere(Vector position, double radius)
{
    this->position = position;
    this->radius = radius;
    infinity = numeric_limits<double>::infinity();
}

Intersection Sphere::calculatesIntersection(Ray ray)
{
    double a, b, c, discriminant, t0, t1, t = infinity;
    Vector rayOriginMinusCenter = ray.getOrigin().difference(position);

    a = ray.getDirection().dotProduct(ray.getDirection());
    b = 2 * ray.getDirection().dotProduct(rayOriginMinusCenter);
    c = rayOriginMinusCenter.dotProduct(rayOriginMinusCenter) - pow(radius, 2);

//    cout<<"a. "<<a<<" b. "<<b<<" c. "<<c<<endl;

    discriminant = (pow(b, 2) - (4 * a * c));
    bool success = false;
    if (discriminant < 0.0)
        return Intersection(success);

    t0 = (-b + sqrt(discriminant)) / (2 * a);
    t1 = (-b - sqrt(discriminant)) / (2 * a);
    if ((t0 > 0.0) && (t0 < t)){
        t = t0;
        success = true;
    }
    if ((t1 > 0.0) && (t1 < t)){
        t = t1;
        success = true;
    }
    return Intersection(success, t);
}