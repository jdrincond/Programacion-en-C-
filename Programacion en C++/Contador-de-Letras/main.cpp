/*
7. Contador de letras mayúsculas y minúsculas
El usuario escribe una frase. Cuenta cuántas letras mayúsculas y minúsculas hay (char, string, for).
*/

#include <iostream>
#include <string> // Para usar std::string
using namespace std;

int main() {
    string frase;
    int mayusculas = 0, minusculas = 0, letras;

    cout << "Ingrese una frase: ";
    getline(cin, frase);

    for (char c : frase) {
        if (isupper(c)) {
            mayusculas++;
        } else if (islower(c)) {
            minusculas++;
        }
    }

    letras = mayusculas + minusculas;

    cout << "Cantidad de letras mayúsculas: " << mayusculas << endl;
    cout << "Cantidad de letras minúsculas: " << minusculas << endl;
    cout << "Cantidad total de letras: " << letras << endl;

    return 0;
}
