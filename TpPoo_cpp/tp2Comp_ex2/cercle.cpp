//
// Created by amani on 24/02/24.
//

#include <valarray>
#include "cercle.h"

cercle::cercle() {
    this->rayon=0;
    this->centre=  PointC1();
}

cercle::cercle(PointC1 centre, float rayon) {
    this->centre=centre;
    this->rayon=rayon;
}

float cercle::getRayon() {
    return rayon;
}

PointC1 cercle::getCentre() {
    return centre;
}

void cercle::setCentre() {
    this->centre = centre;
}

void cercle::setRayon() {
    this->rayon = rayon;
}

void cercle::afficher() {
    cout<<"rayon = " <<rayon<<"\n";
    cout<<"le point centre a pour coordonnée : \n";
    centre.affiche();
}

double cercle::surface() {
    return pow(this->rayon,2)*3.14;
}

double cercle::perimetre() {
    return 2*this->rayon*3.14;
}

void cercle::equal(cercle c) {
if ((this->rayon==c.rayon ) && (this->centre.getX()==c.centre.getX())&& (this->centre.getY()==c.centre.getY())){
    cout<<"equal";
}else
    cout<<"not equal";
}

void cercle::agrandir(float r) {
    if(r<=0){
        cout<<"Le facteur d'agrandissement doit être supérieur à zéro.";
        return;
    }
    this->rayon*=r;
}

int main(){
    cercle c1= cercle( PointC1(5,4,'A'),4);
    c1.afficher();
    cout<<"surface = "<<c1.surface()<<'\n';
   cout<<"perimetre = "<<c1.perimetre()<<'\n';
   cout<<"perimetre = "<<c1.perimetre()<<'\n';
    cout<<"calling agrandir funtion"<<'\n';
    c1.agrandir(4);
    c1.afficher();
    cercle c2=  cercle( PointC1(5,4,'B'),4);
    c1.equal(c2);
    return 0;
}
