//
// Created by Leandro on 3/7/17.
//

#ifndef PROJECTS_CAMERA_H
#define PROJECTS_CAMERA_H
#include "Vector.h"
#define PI 3.14159265;


class Camera {
    private:
        Vector e, center, up;
        double angle, distanceToFoV;

    public:
        Camera(Vector, Vector, Vector, double, double);
        Vector wVec();
        Vector uVec();
        Vector vVec();
        Vector calculateRayDirection(double, double, double, double);
};


#endif //PROJECTS_CAMERA_H
