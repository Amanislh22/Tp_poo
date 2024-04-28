//
// Created by amani on 17/02/24.
//
#include <iostream>
#include "pointEx2.h"

pointEx2::pointEx2(double x,double y){
    x=x;
    this->y=y;
}
pointEx2::pointEx2() {
    this->x=0.0;
    this->y=0.0;
}
void pointEx2:: deplace(double dx,double dy){
    this->x=this->x+dx;
    this->y=this->y+dy;
}
double pointEx2::getX(){
    return this->x;
}

double pointEx2::getY(){
    return this->y;
}
void pointEx2::setX(double x){
    this->x=x;
}
void setY(double y){
    y=y;
}


int main() {
    std::cout<<" ********** Ex2 ************ \n";
    pointEx2 p (5,7);
    std::cout<<" before calling  deplace function \n";
    std::cout<<"x = "<<p.getX()<<"\n";
    std::cout<<"y = "<<p.getY()<<"\n";

    p.deplace(5,5);
    std::cout<<" \nafter calling  deplace function \n";
    std::cout<<"x = "<<p.getX()<<"\n";
    std::cout<<"y = "<<p.getY()<<"\n";

    return 0;
}

