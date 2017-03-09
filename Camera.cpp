//
// Created by Leandro on 3/7/17.
//

#include "Camera.h"


Camera::Camera(Vector e, Vector center, Vector up)
{
    this -> e = e;
    this -> center = center;
    this -> up = up;
}

Camera::~Camera() {}

Vector Camera::w()
{
    return e.divide(e.length());
}

Vector Camera::u()
{
    Vector t = up;
    Vector txw = t.crossProduct(w());
    return txw.divide(txw.length());
}

Vector Camera::v()
{
    return w().crossProduct(u());
}