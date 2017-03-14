#include "RGB.h"
#include "Camera.h"

int main() {

    Vector eye(1, 2, -6);
    Vector center(1, 2, -4);
    Vector	up(0, 1, 0);
    float	fieldOfView = 39.0;
    float	distanceTo = 1.0;
    float	nx = 640.0;
    float	ny = 480.0;

    Camera camera(eye, center, up, fieldOfView, distanceTo);

    for (int i = 0; i < nx; i++)
    {
        for (int j = 0; j < ny; j++)
        {
            camera.calculateRayDirection(i, j, nx, ny).show();
        }
    }

    return 0;
}
