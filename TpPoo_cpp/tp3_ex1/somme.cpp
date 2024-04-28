//
// Created by amani on 28/04/24.
//
#include <iostream>

template<typename T>
T sumArray(T arr[], int size) {
    T sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    // Exemple d'utilisation avec un tableau d'entiers
    int intArray[] = {1, 2, 3, 4, 5};
    int intArraySize = sizeof(intArray) / sizeof(int);
    std::cout << "Somme du tableau d'entiers : " << sumArray(intArray, intArraySize) << std::endl;

    // Exemple d'utilisation avec un tableau de doubles
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    int doubleArraySize = sizeof(doubleArray) / sizeof(double);
    std::cout << "Somme du tableau de doubles : " << sumArray(doubleArray, doubleArraySize) << std::endl;

    // Exemple d'utilisation avec un tableau de caractères
    char charArray[] = {'a', 'b', 'c', 'd', 'e'};
    int charArraySize = sizeof(charArray) / sizeof(char);
    std::cout << "Somme du tableau de caractères (représentation ASCII) : " << static_cast<int>(sumArray(charArray, charArraySize)) << std::endl;

    return 0;
}
