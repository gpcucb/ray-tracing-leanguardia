//
// Created by Leandro on 3/7/17.
//

#include "Camera.h"

Camera::Camera(Vector e, Vector center, Vector up, double angle, double distanceToFoV)
{
    this -> e = e;
    this -> center = center;
    this -> up = up;
    this -> angle = angle;
    this -> distanceToFoV = distanceToFoV;
}

Vector Camera::wVec()
{
    return e.numberDivision(e.length());
}

Vector Camera::uVec()
{
    Vector t = up;
    Vector txw = t.crossProduct(wVec());
    return txw.numberDivision(txw.length());
}

Vector Camera::vVec()
{
    return wVec().crossProduct(uVec());
}

Vector Camera::calculateRayDirection(double i, double j, double nx, double ny)
{
    double angleTimesPI = angle * (double)PI;
    double angleInRadians = (double) (angleTimesPI / 180.0);
    double top = (double)tan((angleInRadians) / 2) * distanceToFoV;
    double bottom = -top;

    double right = (((nx * top) / ny ));
    double left = -right;

    double u = (double) (left + ((right - left) * (i + 0.5)) / nx);
    double v = (double) (bottom + ((top - bottom) * (j + 0.5)) / ny);

    Vector uU = uVec().numberProduct(u);
    Vector vV = vVec().numberProduct(v);
    Vector minusW = wVec().numberProduct(-distanceToFoV);

    return uU.sum(vV).sum(minusW);
}