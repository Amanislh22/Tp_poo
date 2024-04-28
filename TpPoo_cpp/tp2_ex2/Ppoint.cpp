//
// Created by amani on 01/03/24.
//

#include "Ppoint.h"
Ppoint::Ppoint(int x, int y) {
    this->x=x;
    this->y=y;
}
int Ppoint::getY() {
    return this->y;
}
int Ppoint::getX() {
    return this->x;
}
void Ppoint::setX(int x) {
    this->x=x;
}
void Ppoint::setY(int y) {
    this->y=y;
}

void Ppoint::afficher(){
    cout<<" abs = "<<x<<endl;
    cout<<" ord = "<<y<<endl;
};
Ppoint operator ++(Ppoint& p){
    p.x++;
    p.y++;
    return p;
};
Ppoint operator --(Ppoint &p){
    p.x--;
    p.y--;
    return p;
};
