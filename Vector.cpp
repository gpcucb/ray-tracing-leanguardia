#include "Vector.h"

Vector::Vector() {

}

Vector::Vector(double x, double y, double z)
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

double Vector::length()
{
    return (double)sqrt(x*x + y*y + z*z);
}

Vector Vector::crossProduct(Vector v)
{
    return Vector (y*v.z - z*v.y,
                   z*v.x - x*v.z,
                   x*v.y - y*v.x);
}

double Vector::dotProduct(Vector v)
{
    return x*v.x + y*v.y + z*v.z;
}

Vector Vector::numberProduct(double n)
{
    return Vector(x * n, y * n, z * n);
}

Vector Vector::numberDivision(double n) {
    return Vector(x/n, y/n, z/n);
}

double Vector::getX()
{
    return x;
}

double Vector::getY()
{
    return y;
}

double Vector::getZ()
{
    return z;
}
