//
// Created by Leandro on 2/21/17.
//

#include "RGB.h"

RGB::RGB(float red, float green, float blue)
{
    this -> red = red;
    this -> green = green;
    this -> blue = blue;git
}

RGB::~RGB() {}

void RGB::show()
{
    cout<<"R. "<< red << endl
        <<"G. "<< green << endl
        <<"B. "<< blue << endl;
}
