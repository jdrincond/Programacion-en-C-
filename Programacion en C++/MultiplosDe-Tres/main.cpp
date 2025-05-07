/*
Mostrar los múltiplos de 3 entre 1 y 100
Usa un bucle for y una condición con el operador %.
*/

#include <iostream>
using namespace std;

int main() {
    cout << "Múltiplos de 3 del 1 al 100:" << endl;

    // Bucle para recorrer los números del 1 al 100
    for (int c = 1; c <= 100; c++) {
        // Verificar si el número es múltiplo de 3
        if (c % 3 == 0) {
            cout << c << " ";
        }
    }

    cout << endl; // Salto de línea al final
    return 0;
}
