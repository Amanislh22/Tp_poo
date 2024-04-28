//
// Created by amani on 16/02/24.
//

#ifndef TPPOO_POINT_H
#define TPPOO_POINT_H
#include <iostream>


class point {
public:
    float abs;
    float ord;
public:
    point(float x,float y);
    void deplace(int dx,int dy );
    void affiche();

};


#endif //TPPOO_POINT_H
