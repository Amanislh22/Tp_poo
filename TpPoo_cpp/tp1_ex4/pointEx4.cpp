//
// Created by amani on 17/02/24.
//

#include "pointEx4.h"

    pointEx4::pointEx4 ()
    { x=0 ; y=0 ;
        cout<< "** constructeur 0 argument\n" ;
    }
    pointEx4 ::pointEx4 (int abs)
    { x=abs ; y=0 ;
        cout<< "** constructeur 1 argument\n" ;
    }
    pointEx4::pointEx4 (int abs, int ord)
    { x=abs ; y=ord ;
        cout<< "** constructeur 2 arguments\n" ;
    }
    pointEx4::pointEx4 (pointEx4 & p)
    { x=p.x ; y=p.y ;
        cout<< "**constructeur par recopie\n" ;
    }
    void pointEx4::affiche ()
    { std::cout<< "point de coordonnees : " << x << " " << y << "\n" ;
    }
