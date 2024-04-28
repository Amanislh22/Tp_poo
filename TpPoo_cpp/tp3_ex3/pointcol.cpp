//
// Created by amani on 28/04/24.
//
#include <iostream>

template<typename CoordType, typename ColorType>
class PointCol {
private:
    CoordType x;
    CoordType y;
    ColorType color;

public:
    // Constructeur
    PointCol(CoordType xCoord, CoordType yCoord, ColorType col) : x(xCoord), y(yCoord), color(col) {}

    // Fonction affiche
    void affiche() const {
        std::cout << "Coordonnées : (" << x << ", " << y << "), Couleur : " << color << std::endl;
    }
};

int main() {
    // Exemple d'utilisation avec des coordonnées entières et une couleur de chaîne de caractères
    PointCol<int, std::string> point1(3, 4, "Rouge");
    point1.affiche();

    // Exemple d'utilisation avec des coordonnées de type double et une couleur de type char
    PointCol<double, char> point2(1.5, 2.5, 'B');
    point2.affiche();

    return 0;
}
