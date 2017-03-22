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
        float angle, distanceToFoV;

    public:
        Camera(Vector, Vector, Vector, float, float);
        Vector wVec();
        Vector uVec();
        Vector vVec();
        Vector calculateRayDirection(float, float, float, float);
};


#endif //PROJECTS_CAMERA_H
