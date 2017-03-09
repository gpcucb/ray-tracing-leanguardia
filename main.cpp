#include "RGB.h"
#include "Camera.h"

int main() {

//    RGB rgb(12.343, 123.23, 342.342);
//    rgb.show();

    Vector eye (1,1,1);
    Vector center (0,0,0);
    Vector up (0,1,0);

    Camera camera (eye, center, up);

    cout << eye.length() << endl ;

    camera.w().show();
    camera.u().show();
    camera.v().show();

    return 0;
}
