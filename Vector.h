#ifndef VECTOR_H
#define VECTOR_H

#include <math.h>
#include <iostream>
using namespace std;

class Vector
{
    public:
        Vector(float, float, float);
        ~Vector();
        void show();
        Vector sum(Vector);
        Vector difference(Vector);
        float module();
        Vector vectorialProduct(Vector);
        float scalarProduct(Vector);

    private:
        float x, y, z;
};

#endif // VECTOR_H
