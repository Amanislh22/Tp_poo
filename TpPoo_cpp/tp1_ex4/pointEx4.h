//
// Created by amani on 17/02/24.
//

#ifndef TPPOO_POINTEX4_H
#define TPPOO_POINTEX4_H
#include <iostream>
using namespace std ;

class pointEx4 {
    int x, y ;
public :
    pointEx4 ();
    pointEx4 (int abs);
    pointEx4 (int abs, int ord);
    pointEx4 (pointEx4 & p);
    void affiche ();
};

int main()
{ pointEx4 a(10,20) ;
    pointEx4 b(30,40) ;
    pointEx4 courbe[6] = { 4, a, 0, b} ;
    for (int i=0 ; i<6 ; i++){
        courbe[i].affiche() ;}
    return 0;
}


#endif //TPPOO_POINTEX4_H
