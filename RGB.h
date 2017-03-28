#ifndef PROJECTS_RGB_H
#define PROJECTS_RGB_H

#include <iostream>
using namespace std;

class RGB {

private:
    double red, green, blue;

public:
    RGB(double, double, double);
    ~RGB();

    void show();

};


#endif //PROJECTS_RGB_H
