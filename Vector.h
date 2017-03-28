#ifndef VECTOR_H
#define VECTOR_H

#include <math.h>
#include <iostream>
using namespace std;

class Vector
{
    public:
        Vector();
        Vector(double, double, double);
        ~Vector();
        void show();
        Vector sum(Vector);
        Vector difference(Vector);
        double length();
        double dotProduct(Vector);
        Vector crossProduct(Vector);
        Vector numberProduct(double);
        Vector numberDivision(double);
        double getX();
        double getY();
        double getZ();

    private:
        double x, y, z;
};

#endif // VECTOR_H
