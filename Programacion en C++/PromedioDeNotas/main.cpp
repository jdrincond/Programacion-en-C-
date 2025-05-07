/*
2. Promedio de notas
Pide al usuario ingresar 5 notas (float), y calcula su promedio con un bucle.
*/

#include <iostream>
using namespace std;

int main() {
    float nota, suma = 0.0;
    int n = 5;

    cout << "Ingrese " << n << " notas para calcular el promedio:" << endl;

    // Bucle para ingresar las notas
    for (int c = 1; c <= n; c++) {
        cout << "Nota " << c << ": ";
        cin >> nota;
        suma += nota; // Sumar cada nota ingresada
    }

    // Calcular el promedio
    float promedio = suma / n;

    // Mostrar el promedio
    cout << "El promedio de las notas es: " << promedio << endl;

    return 0;
}
