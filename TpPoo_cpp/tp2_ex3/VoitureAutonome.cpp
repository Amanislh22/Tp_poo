#include <iostream>

class VoitureAutonome {
private:
    double position;
    double vitesse;
    double distanceParcourue;

public:
    VoitureAutonome(double pos, double vit) : position(pos), vitesse(vit), distanceParcourue(0.0) {}

    friend bool operator ==(const VoitureAutonome &v1, const VoitureAutonome &v2);
    friend bool operator !=(const VoitureAutonome &v1, const VoitureAutonome &v2);
    friend bool operator <(const VoitureAutonome &v1, const VoitureAutonome &v2);
    friend bool operator >(const VoitureAutonome &v1, const VoitureAutonome &v2);
    friend bool operator <=(const VoitureAutonome &v1, const VoitureAutonome &v2);
    friend bool operator >=(const VoitureAutonome &v1, const VoitureAutonome &v2);
    friend VoitureAutonome operator +(const VoitureAutonome &v1, const VoitureAutonome &v2);
    friend VoitureAutonome operator ++(VoitureAutonome &v1);
    friend VoitureAutonome operator -(const VoitureAutonome &v1, const VoitureAutonome &v2);
    friend VoitureAutonome operator *(const VoitureAutonome &v1, const VoitureAutonome &v2);
    friend VoitureAutonome operator /(const VoitureAutonome &v1, const VoitureAutonome &v2);

    friend std::ostream& operator<<(std::ostream& os, const VoitureAutonome &car);
};


bool operator ==(const VoitureAutonome &v1, const VoitureAutonome &v2) {
    return v1.position == v2.position && v1.vitesse == v2.vitesse;
}

bool operator !=(const VoitureAutonome &v1, const VoitureAutonome &v2) {
    return !(v1 == v2);
}

bool operator <(const VoitureAutonome &v1, const VoitureAutonome &v2) {
    return v1.position < v2.position;
}

bool operator >(const VoitureAutonome &v1, const VoitureAutonome &v2) {
    return v1.position > v2.position;
}

bool operator <=(const VoitureAutonome &v1, const VoitureAutonome &v2) {
    return !(v1 > v2);
}

bool operator >=(const VoitureAutonome &v1, const VoitureAutonome &v2) {
    return !(v1 < v2);
}

VoitureAutonome operator +(const VoitureAutonome &v1, const VoitureAutonome &v2) {
    VoitureAutonome result = v1;
    result.distanceParcourue += v2.distanceParcourue;
    return result;
}

VoitureAutonome operator ++(VoitureAutonome &v1) {
    v1.vitesse++;
    return v1;
}

VoitureAutonome operator -(const VoitureAutonome &v1, const VoitureAutonome &v2) {
    VoitureAutonome result = v1;
    result.distanceParcourue -= v2.distanceParcourue;
    return result;
}

VoitureAutonome operator *(const VoitureAutonome &v1, const VoitureAutonome &v2) {
    VoitureAutonome result = v1;
    return result;
}

VoitureAutonome operator /(const VoitureAutonome &v1, const VoitureAutonome &v2) {
    VoitureAutonome result = v1;
    return result;
}

std::ostream& operator<<(std::ostream& os, const VoitureAutonome &car) {
    os << "Position: " << car.position << ", Vitesse: " << car.vitesse << ", Distance Parcourue: " << car.distanceParcourue;
    return os;
}

int main() {
    VoitureAutonome car1(0.0, 50.0);
    VoitureAutonome car2(10.0, 60.0);

    if (car1 == car2) {
        std::cout << "Les voitures sont identiques." << std::endl;
    } else {
        std::cout << "Les voitures sont différentes." << std::endl;
    }
    VoitureAutonome totalDistance = car1 + car2;
    std::cout << "Distance totale parcourue : " << totalDistance << std::endl;

    ++car1;
    std::cout << "Nouvelle vitesse de car1 : " << car1 << std::endl;

    VoitureAutonome remainingDistance = car1 - car2;
    std::cout << "Distance restante : " << remainingDistance << std::endl;

    VoitureAutonome resultMultiply = car1 * car2;
    VoitureAutonome resultDivide = car1 / car2;

    std::cout << "Résultat de la multiplication : " << resultMultiply << std::endl;
    std::cout << "Résultat de la division : " << resultDivide << std::endl;

    return 0;
}
