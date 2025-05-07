/*
8. Cálculo de factorial
El usuario ingresa un número, y el programa muestra su factorial. Usa un for y int.
*/

#include <iostream>
using namespace std;

int main() {
    int numero;
    int factorial = 1;

    cout << "Ingrese un número para calcular su factorial: ";
    cin >> numero;

    if (numero < 0) {
        cout << "El factorial no está definido para números negativos." << endl;
    } else {

        for (int c = 1; c <= numero; c++) {
            factorial *= c;
        }

        cout << "El factorial de " << numero << " es: " << factorial << endl;
    }

    return 0;
}
