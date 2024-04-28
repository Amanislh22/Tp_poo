//
// Created by amani on 01/03/24.
//
#include <string>
#include <iostream>

using namespace std;
#ifndef TPPOO_PPOINT_H
#define TPPOO_PPOINT_H


class Ppoint {
private:
    int x,y;
public:
    int getX();
    int getY();
    void setX(int x) ;
    void setY(int y) ;
    Ppoint(int x,int y);
    void afficher();
    friend Ppoint operator ++(Ppoint &p);
    friend Ppoint operator --(Ppoint &p);

};

#endif //TPPOO_PPOINT_H
