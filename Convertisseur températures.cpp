#include "iostream"
using namespace std;

int main() {
    char UniteTemperature;
    double temperature;

    cout << "Entrez une unite de temperature (C (pour degres Celsius) ou F (pour degres Fahrenheit) : ";
    cin >> UniteTemperature;

    cout << "Entrez une temperature : ";
    cin >> temperature;

    double resultat;

    switch (UniteTemperature) {
        case 'C':
           resultat = (temperature * 9/5) + 32;
                   break;
        case 'F':
            resultat = (temperature - 32) * 5/9;
                    break;
        default:
            cout << "L'unite de temperature entree est incorrecte";
            return 1;// Quitte le programme
    }

    cout << "Le resultat est " << resultat;

    return 0;
}
