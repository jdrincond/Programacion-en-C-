/*
9. Verificar si una palabra es palíndromo
El usuario ingresa una palabra y el programa dice si se lee igual al revés (string, if, for).
*/

#include <iostream>
#include <string> // Para usar std::string
using namespace std;

int main() {
    string palabra;
    bool es_palindromo = true;

    // Solicitar al usuario que ingrese una palabra
    cout << "Ingrese una palabra: ";
    cin >> palabra;

    // Verificar si la palabra es un palíndromo
    int longitud = palabra.length();
    for (int c = 0; c < longitud / 2; c++) {
        if (palabra[c] != palabra[longitud - 1 - c]) {
            es_palindromo = false;
            break;
        }
    }

    if (es_palindromo) {
        cout << "La palabra \"" << palabra << "\" es un palíndromo." << endl;
    } else {
        cout << "La palabra \"" << palabra << "\" no es un palíndromo." << endl;
    }

    return 0;
}
