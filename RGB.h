#ifndef PROJECTS_RGB_H
#define PROJECTS_RGB_H

#include <iostream>
using namespace std;

class RGB {

private:
    float red, green, blue;

public:
    RGB(float, float, float);
    ~RGB();

    void show();

};


#endif //PROJECTS_RGB_H
