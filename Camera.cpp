//
// Created by Leandro on 3/7/17.
//

#include "Camera.h"

#define PI 3.14159265;


Camera::Camera(Vector e, Vector center, Vector up, float angle, float distanceToFoV)
{
    this -> e = e;
    this -> center = center;
    this -> up = up;
    this -> angle = angle;
    this -> distanceToFoV = distanceToFoV;
}

Camera::~Camera() {}

Vector Camera::wVec()
{
    return e.divide(e.length());
}

Vector Camera::uVec()
{
    Vector t = up;
    Vector txw = t.crossProduct(wVec());
    return txw.divide(txw.length());
}

Vector Camera::vVec()
{
    return wVec().crossProduct(uVec());
}

Vector Camera::calculateRayDirection(float i, float j, float nx, float ny)
{
    float angleTimesPI = angle * (float)PI;
    float angleInRadians = angleTimesPI / 180.0;
    float top = (float)tan((angleInRadians) / 2) * distanceToFoV;
    float bottom = -top;

    float right = (((nx * top) / ny ));
    float left = -right;

    float u = left + ((right - left) * (i + 0.5))/nx;
    float v = bottom + ((top - bottom) * (j + 0.5))/ny;

    Vector uDirection = uVec().numberProduct(u);
    Vector vDirection = vVec().numberProduct(v);
    Vector wDirection = wVec().numberProduct(-distanceToFoV);

    return uDirection.sum(vDirection).sum(wDirection);
}