//
// Created by amani on 17/02/24.
//

#include <iostream>
#include "pointEx3.h"
pointEx3::pointEx3(double x , double y){
    this->x=x;
    this->y=y;
    this->cpt++;

}
pointEx3:: pointEx3(){
    this->x=0;
    this->y=0;
    this->cpt++;
}

void pointEx3::affiche() {
    std::cout<<"x= "<<x<<"\n";
    std::cout<<"x= "<<y<<"\n";
    std::cout<<" le nbr d'objet de type point = "<<cpt<<"\n";

}
int main() {
    std::cout<<" ********** Ex3 ************ \n";
    pointEx3 p (5,7);
    p.affiche();
    pointEx3 p3 (8,2);
    p3.affiche();

    return 0;
}
