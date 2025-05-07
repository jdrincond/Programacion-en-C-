/*
Adivina el número
El programa genera un número aleatorio entre 1 y 100. El usuario debe adivinarlo. Usa un while y if.
*/

#include <iostream>
#include <cstdlib> // Para srand() y rand()
#include <ctime>   // Para time()
using namespace std;

int main() {
    // Inicializar el generador de números aleatorios
    srand(time(0));
    int NumeroSecreto = rand() % 100 + 1; // Número aleatorio entre 1 y 100
    int intento;

    cout << "Elige un número entre 1 y 100" << endl;

    // Bucle para que el usuario adivine el número
    while (true) {
        cout << "Adivina, adivinador: ";
        cin >> intento;

        if (intento > NumeroSecreto) {
            cout << "El número es menor. Inténtalo de nuevo." << endl;
        } else if (intento < NumeroSecreto) {
            cout << "El número es mayor. Inténtalo de nuevo." << endl;
        } else {
            cout << "¡Felicidades! Adivinaste el número." << endl;
            break; // Salir del bucle
        }
    }

    return 0;
}
