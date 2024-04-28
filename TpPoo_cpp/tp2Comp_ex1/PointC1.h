//
// Created by amani on 17/02/24.
//

#ifndef TPPOO_POINTC1_H
#define TPPOO_POINTC1_H
#include <iostream>
using namespace std ;

class PointC1 {
private :
    double x ,y;
    char name ;

public :
    char getName();

 double getX() ;

 double getY();

 void setName(char name) ;

 void setX(double x) ;

 void setY(double y) ;
 PointC1(double x , double y , char name);
 PointC1();
 void affiche ();

 void translation(double dx , double dy);
 PointC1 milieu(PointC1 p);
 PointC1 symetrique();

 double distance(PointC1 p2);
 void comparer(PointC1 p2);

};


#endif //TPPOO_POINTC1_H
