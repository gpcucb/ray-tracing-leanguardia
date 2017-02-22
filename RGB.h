//
// Created by Leandro on 2/21/17.
//

#ifndef PROJECTS_RGB_H
#define PROJECTS_RGB_H

#include <iostream>
using namespace std;

class RGB {
private:
    float red, green, blue;

public:
    RGB();
    ~RGB();

    RGB(float, float, float);
    void show();

};


#endif //PROJECTS_RGB_H
