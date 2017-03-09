#ifndef VECTOR_H
#define VECTOR_H

#include <math.h>
#include <iostream>
using namespace std;

class Vector
{
    public:
        Vector();
        Vector(float, float, float);
        ~Vector();
        void show();
        Vector sum(Vector);
        Vector sumToZ(float);
        Vector difference(Vector);
        float length();
        float dotProduct(Vector);
        Vector crossProduct(Vector);
        Vector divide(float);

    private:
        float x, y, z;
};

#endif // VECTOR_H
