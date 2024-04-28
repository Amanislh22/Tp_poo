//
// Created by amani on 17/02/24.
//

#include "PointC1.h"
#include <cmath>

char PointC1::getName() {
        return this->name;
    }

    double  PointC1:: getX() {
        return this->x;
    }

    double  PointC1:: getY() {
        return this->y;
    }

    void  PointC1:: setName(char name) {
        this->name = name;
    }

    void  PointC1:: setX(double x) {
        this->x = x;
    }


    void  PointC1:: setY(double y) {
        this->y = y;
    }

PointC1:: PointC1(double x , double y , char name){
        this->x=x;
        this->y=y;
        this->name=name;
    }
PointC1::PointC1(){
        this->x=0;
        this->y=0;
        this->name='O';
    }
 void  PointC1:: affiche (){
        std::cout<<"x = " <<x<<"\n";
        cout<<"y = " <<y<<"\n";
        cout<<"name = " <<name<<"\n";
    }
    void PointC1::translation(double dx , double dy){
        this->x=this->x+dx;
        this->y=this->y+dy;
    }
PointC1 PointC1:: milieu(PointC1 p){
PointC1 m;
        m.x=(this->x+p.x)/2;
        m.y=(this->y+p.y)/2;
        return m;
    }
PointC1 PointC1:: symetrique(){
    PointC1 s;
        s.x = -this->x;
        s.y = -this->y;
        return s;
    }

 double PointC1:: distance(PointC1 p2){
        return sqrt((p2.y - this->y) * (p2.y - this->y) + (p2.x - this->x) * (p2.x - this->x));
    }
 void PointC1 ::comparer(PointC1 p2){
        if ( this->x==p2.x && this->y ==p2.y){
            cout<<"identique"<<"\n";
        }else{
            cout<<"pas identique"<<"\n";
        }
    }
int main1(){
    PointC1 p =PointC1(5,4,'A');
    cout<<"point A : \n";
    p.affiche();
    p.translation(1,1);
    cout<<"after translation\n";
    p.affiche();

    PointC1 p2 (6.1,8,'B');
    cout<<" point B :\n";
    p2.affiche();

    cout<<" Distance entre A et B\n";
    cout<<p.distance(p2)<<"\n";

    cout<<"le point milieu de point A et B\n";
    PointC1 m = p.milieu(p2);
    m.setName('m');
    m.affiche();

    cout<<"le point symetrique de  A\n";
    PointC1 s = p.symetrique();
    s.setName('s');
    s.affiche();

    cout<<" comparaison between A nd B\n";
    p.comparer(p2);

   cout<<" creation d'une point identique a A \n";
    PointC1 I =PointC1();
    I=p;
    p.comparer(I);
}