//
// Created by Leandro on 3/7/17.
//

#ifndef PROJECTS_CAMERA_H
#define PROJECTS_CAMERA_H
#include "Vector.h"

class Camera {
    private:
        Vector e, center, up;

    public:
        Camera(Vector, Vector, Vector);
        ~Camera();
        Vector w();
        Vector u();
        Vector v();
};


#endif //PROJECTS_CAMERA_H
