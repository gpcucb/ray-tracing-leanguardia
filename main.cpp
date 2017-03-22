#include "RGB.h"
#include "Camera.h"
#include "Sphere.h"
#include "Triangle.h"

int main() {

    Vector eye(1, 2, -6);
    Vector center(1, 2, -4);
    Vector	up(0, 1, 0);
    Vector rayDirection;

    float	fieldOfView = 39.0;
    float	distanceTo = 1.0;
    float	nx = 640.0;
    float	ny = 480.0;

    Vector spherePosition = Vector(370,120,370);
    float radius = 120.0;

    Camera camera(eye, center, up, fieldOfView, distanceTo);

    Sphere sphere(spherePosition, radius);
    Vector aCorner = Vector(552.0,8,0.0);
    Vector bCorner = Vector(0.0,0.0,0.0);
    Vector cCorner = Vector(0.0,0.0,560.0);
    Triangle triangle(aCorner, bCorner, cCorner);

    for (int i = 0; i < nx; i++)
    {
        for (int j = 0; j < ny; j++)
        {
            rayDirection = camera.calculateRayDirection(i, j, nx, ny);
            sphere.calculatesIntersection(eye, rayDirection);
//            triangle.calculatesIntersection(eye, rayDirection);
        }
    }

    return 0;
}
