//
// Created by Leandro on 3/28/17.
//

#ifndef PROJECTS_INTERSECTION_H
#define PROJECTS_INTERSECTION_H


class Intersection {
private:
    bool success;
    double distance;
public:
    Intersection();
    Intersection(bool success);
    Intersection(bool success, double distance);

    bool succeeded();
};


#endif //PROJECTS_INTERSECTION_H
