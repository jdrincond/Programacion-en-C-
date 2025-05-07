/*
10. Calculadora básica
El usuario ingresa dos números y elige una operación (+, -, *, /) usando switch y float.
*/

#include <iostream>
using namespace std;

int main() {
    float num1, num2, resultado;
    char operacion;

    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;
    cout << "Seleccione una operación (+, -, *, /): ";
    cin >> operacion;

    switch (operacion) {
        case '+':
            resultado = num1 + num2;
            cout << "El resultado de " << num1 << " + " << num2 << " es: " << resultado << endl;
            break;
        case '-':
            resultado = num1 - num2;
            cout << "El resultado de " << num1 << " - " << num2 << " es: " << resultado << endl;
            break;
        case '*':
            resultado = num1 * num2;
            cout << "El resultado de " << num1 << " * " << num2 << " es: " << resultado << endl;
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                cout << "El resultado de " << num1 << " / " << num2 << " es: " << resultado << endl;
            } else {
                cout << "Error: No se puede dividir entre 0." << endl;
            }
            break;
        default:
            cout << "Operación no válida. Por favor, seleccione +, -, *, o /." << endl;
    }

    return 0;
}
