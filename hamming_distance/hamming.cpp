#include <iostream>
#include <string>
#include <stdexcept>

int hamming_distance(const std::string& strand1, const std::string& strand2) {

    if (strand1.length() != strand2.length()) {
        throw std::invalid_argument("Las cadenas deben tener la misma longitud.");
    }

    int distance = 0;

    for (size_t i = 0; i < strand1.length(); i++) {
        if (strand1[i] != strand2[i]) {
            distance++;
        }
    }

    return distance;
}

int main() {

    std::string dna1;
    std::string dna2;

    std::cout << "Ingrese la primera cadena de ADN: ";
    std::cin >> dna1;

    std::cout << "Ingrese la segunda cadena de ADN: ";
    std::cin >> dna2;

    try {

        int result = hamming_distance(dna1, dna2);

        std::cout << "La distancia de Hamming es: "
                  << result << std::endl;

    } catch (const std::exception& e) {

        std::cout << "Error: "
                  << e.what()
                  << std::endl;
    }

    return 0;
}