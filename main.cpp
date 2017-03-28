#include "RGB.h"
#include "RayTracer.h"
//#include "Camera.h"
#include "Sphere.h"
#include "Triangle.h"

int main() {


//    Vector eye(278,273,-800);
//    Vector center(278,273,-800);
//    Vector up(0, 1, 0);
//    Vector rayDirection;
//
//    double	fieldOfView = 39.31;
//    double	distanceTo = 0.035;
    double	nx = 640.0;
    double	ny = 480.0;
//
//    Camera camera(eye, center, up, fieldOfView, distanceTo);

    Vector spherePosition = Vector(370,120,370);
    double radius = 120.0;
    Sphere sphere(spherePosition, radius);
    Vector aVertix = Vector(552.0 ,8.0, 0.0);
    Vector bVertix = Vector(0.0, 0.0, 0.0);
    Vector cVertix = Vector(0.0, 0.0, 560.0);
    Triangle triangle(aVertix, bVertix, cVertix);

    RayTracer rayTracer(nx, ny);
    rayTracer.insertObject(&sphere);
    rayTracer.insertObject(&triangle);
    rayTracer.showObjects();


//    for (int i = 0; i < nx; i++)
//    {
//        for (int j = 0; j < ny; j++)
//        {
//            rayDirection = camera.calculateRayDirection(i, j, nx, ny);
//            Ray ray(eye, rayDirection);
////            sphere.calculatesIntersection(ray);
//            triangle.calculatesIntersection(ray);
//        }
//    }

    return 0;
}
