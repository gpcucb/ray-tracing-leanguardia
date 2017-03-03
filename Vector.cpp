#include "Vector.h"

Vector::Vector(float x, float y, float z)
{
    this -> x = x;
    this -> y = y;
    this -> z = z;
}

Vector::~Vector()
{
    //dtor
}

void Vector::show()
{
    cout<<"X. "<< x << endl
    <<"Y. "<< y << endl
    <<"Z. "<< z << endl;
}

Vector Vector::sum(Vector v)
{
    return Vector(x + v.x,
                  y + v.y,
                  z + v.z);
}

Vector Vector::difference(Vector v)
{
    return Vector(x - v.x,
                  y - v.y,
                  z - v.z);
}
