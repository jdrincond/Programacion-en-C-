/*
Contador regresivo
Pide un número y muestra una cuenta regresiva hasta 0.
*/

#include <iostream>

using namespace std;

int main() {
    int numero;
    cout << "Ingrese un número para iniciar la cuenta regresiva: ";
    cin >> numero;

    for (int contador = numero; contador >= 0; contador--) {
        cout << contador << endl;
    }

    cout << "Cuenta regresiva finalizada" << endl;

    return 0;
}
