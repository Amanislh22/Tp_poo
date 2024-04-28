//
// Created by amani on 16/02/24.
//

#include <iostream>
#include "point.h"

point::point(float x,float y){
        abs=x;
        ord=y;
    }
    void point:: deplace(int dx, int dy){
        abs=abs+dx;
        ord=ord+dy;
    }
    void point :: affiche(){
        std::cout<<"x = "<<abs;
        std::cout<<"\ny = "<<ord;
    }

int main() {

    std::cout<<" ********** Ex1 ************ \n";
    point p (5,7);
    std::cout<<" before calling  deplace function \n";
    p.affiche();
    p.deplace(5,2);
    std::cout<<" \nafter calling  deplace function \n";
    p.affiche();
    return 0;
}





