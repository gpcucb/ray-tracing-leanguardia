//
// CreAted by LeAndro on 3/21/17.
//

#include "Triangle.h"
#include "Intersection.h"
#include "Ray.h"

Triangle::Triangle(Vector a, Vector b, Vector c)
{
    this -> a = a;
    this -> b = b;
    this -> c = c;
}

Triangle::~Triangle() {}

Intersection Triangle::calculatesIntersection(Ray ray)
{
    double A, B, C, D, E, F, G, H, I, J, K, L, M, beta, gama, t;
    A = a.getX() - b.getX();
    B = a.getY() - b.getY();
    C = a.getZ() - b.getZ();
    D = a.getX() - c.getX();
    E = a.getY() - c.getY();
    F = a.getZ() - c.getZ();
    G = ray.getDirection().getX();
    H = ray.getDirection().getY();
    I = ray.getDirection().getZ();
    J = a.getX() - ray.getOrigin().getX();
    K = a.getY() - ray.getOrigin().getY();
    L = a.getZ() - ray.getOrigin().getZ();

    M = A * (E*I - H*F) + B * (G*F - D*I) + C * (D*H - E*G);
    beta = (J*(E*I - H*F) + K*(G*F - D*I) + L*(D*H - E*G)) / M;
    gama = (I*(A*K - J*B) + H*(J*C - A*L) + G*(B*L - K*C)) / M;
    t = -1 * ((F*(A*K - J*B) + E*(J*C - A*L) + D*(B*L - K*C)) / M);

//    cout<<"beta "<<beta<<" - gama "<<gama<<" - t "<<t <<endl;

    bool success = false;

    if ((beta > 0) && (gama > 0) && ((beta + gama) < 1))
    {
        success = true;
        cout<< t<< endl;
    }

    return Intersection(success,t);
}

void Triangle::show() {
    cout << "I'm a Triangle" << endl;
}
