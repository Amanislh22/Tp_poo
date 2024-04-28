//
// Created by amani on 24/02/24.
//

#ifndef TPPOO_CERCLE_H
#define TPPOO_CERCLE_H
#include <iostream>
#include "../tpComp_ex1/PointC1.h"
#include "../tpComp_ex1/PointC1.cpp"

using namespace std ;

class cercle {
private :
    PointC1 centre;
    float rayon;
public:
    cercle();
    cercle(PointC1 centre, float rayon);
    float getRayon();
    PointC1 getCentre();
    void setCentre();
    void setRayon();
    void afficher();
    double surface();
    double perimetre();
    void equal(cercle c);
    void agrandir(float r);

};


#endif //TPPOO_CERCLE_H
