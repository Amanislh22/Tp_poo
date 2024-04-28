//
// Created by amani on 28/04/24.
//
#include <iostream>

template <class T>
class point {
    T x, y; // coordonnées
public:
    point(T abs, T ord) { x = abs; y = ord; }
    void affiche() {
        std::cout << "Coordonnées : " << x << " " << y << "\n";
    }

    void affiche2() {
        std::cout << "Coordonnées : " << static_cast<int>(x) << " " << static_cast<int>(y) << "\n";
    }
};

int main() {
    // Case 1: Using char
    point<char> p_char(60, 65);
    p_char.affiche();

    // Case 2: Using int
    point<int> p_int(3, 4);
    p_int.affiche();

    // Case 3: Using double
    point<double> p_double(1.5, 2.5);
    p_double.affiche();

    point<char> p(60, 65);
    p.affiche2();

    return 0;
}
