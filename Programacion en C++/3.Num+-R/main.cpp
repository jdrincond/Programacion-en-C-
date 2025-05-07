/*
Número positivo o negativo (con repetición)
Repite hasta que el usuario escriba 0. Muestra si el número ingresado es positivo o negativo.
*/

#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingrese un número (0 para salir):" << endl;

    do {
        cout << "Número: ";
        cin >> numero;

        if (numero > 0) {
            cout << "El número es positivo." << endl;
        } else if (numero < 0) {
            cout << "El número es negativo." << endl;
        } else {
            cout << "Has ingresado 0. Finalizando programa." << endl;
        }
    } while (numero != 0);

    return 0;
}
