//
// Created by amani on 01/03/24.
//
#include <string>
#include <iostream>

using namespace std;
#ifndef TPPOO_PERSONNE_H
#define TPPOO_PERSONNE_H


class Personne {
private:
    int age;
    string nom;
public:
    Personne(int age, string nom);
    int get_age();
    string get_nom();
    void set_age(int age);
    void set_nom(string nom);
    void affiche();


};

int main(){
    Personne p1 = Personne(25,"Alex") ;
    Personne p2 = Personne(30,"Bob") ;
    cout<<" ***** Personne 1 **** "<<endl;
    p1.affiche();
    cout<<" ***** Personne 2 **** "<<endl;
    p2.affiche();
    std::cout<<"********aprés l'affectation ********"<<endl;
    p1=p2;
    p1.affiche();
}
#endif //TPPOO_PERSONNE_H
