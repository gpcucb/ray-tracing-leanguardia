#include "Vector.h"

Vector::Vector() {

}

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
    cout<<"X. "<< x <<" Y. "<< y <<" Z. "<< z << endl;
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

float Vector::length()
{
    return (float)sqrt(x*x + y*y + z*z);
}

Vector Vector::numberProduct(float n)
{
    return Vector(x * n, y * n, z * n);
}

Vector Vector::crossProduct(Vector v)
{
    return Vector (y*v.z - z*v.y,
                   z*v.x - x*v.z,
                   x*v.y - y*v.x);
}

float Vector::dotProduct(Vector v)
{
    return x*v.x + y*v.y + z*v.z;
}

Vector Vector::divide(float num)
{
    return Vector(x/num, y/num, z/num);
}