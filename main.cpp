#include "RGB.h"
#include "Vector.h"

int main() {

    RGB rgb(12.343, 123.23, 342.342);
    rgb.show();

    Vector v (1,2,3);
    v.show();

    Vector v2 (3,2,1);
    v2.show();

    Vector v3 = v.sum(v2);
    v3.show();

    v3 = v.difference(v2);
    v3.show();
    return 0;
}
