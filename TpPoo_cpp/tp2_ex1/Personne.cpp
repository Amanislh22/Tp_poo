//
// Created by amani on 01/03/24.
//

#include "Personne.h"
Personne::Personne(int age , string nom) {
    this->nom=nom;
    this->age=age;
}
 int Personne::get_age(){
    return age;
}
string Personne:: get_nom(){
    return nom;
}
void Personne::set_age(int age){
    this->age=age;
}
void Personne:: set_nom(string nom){
    this->nom=nom;
}
void Personne::affiche() {
    cout<<"le nom de la personne est : "<<nom<<endl;
    cout<<"l'age de la personne est : "<<age<<endl;
}