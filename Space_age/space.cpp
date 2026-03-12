#include <iostream>
using namespace std;

const double EARTH_YEAR_SECONDS = 31557600;

double age_on_planet(double seconds, double orbital_period) {
    return seconds / (EARTH_YEAR_SECONDS * orbital_period);
}

int main() {

    double seconds;

    cout << "Ingrese su edad en segundos: ";
    cin >> seconds;

    cout << "\nEdad en diferentes planetas:\n";

    cout << "Mercury: " << age_on_planet(seconds, 0.2408467) << endl;
    cout << "Venus: " << age_on_planet(seconds, 0.61519726) << endl;
    cout << "Earth: " << age_on_planet(seconds, 1.0) << endl;
    cout << "Mars: " << age_on_planet(seconds, 1.8808158) << endl;
    cout << "Jupiter: " << age_on_planet(seconds, 11.862615) << endl;
    cout << "Saturn: " << age_on_planet(seconds, 29.447498) << endl;
    cout << "Uranus: " << age_on_planet(seconds, 84.016846) << endl;
    cout << "Neptune: " << age_on_planet(seconds, 164.79132) << endl;

    return 0;
}