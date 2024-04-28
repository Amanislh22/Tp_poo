//
// Created by amani on 17/02/24.
//

#ifndef TPPOO_POINT_H

class pointEx2 {
public:
    double x;
    double y;
public:
    double getX();
    double getY();
    void setX(double x) ;
    void setY(double y) ;
    pointEx2(double x,double y);
    pointEx2();
    void deplace(double dx,double dy);

};

#endif //TPPOO_POINT_H
