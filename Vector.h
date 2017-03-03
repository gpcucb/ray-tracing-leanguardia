#ifndef VECTOR_H
#define VECTOR_H

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

    private:
        float x, y, z;
};

#endif // VECTOR_H
