/*
6. Convertidor de divisas
Menú para convertir de dólares a pesos, euros o yenes. Usa switch, float, do...while.
*/

#include <iostream>
using namespace std;

int main() {
    float dolares, resultado;
    int opcion;

    // Tasas de conversión (puedes actualizarlas según las tasas actuales)
    const float DOLAR_A_PESO = 58.84;  // 1 dólar = 58.84 pesos
    const float DOLAR_A_EURO = 0.85;  // 1 dólar = 0.85 euros
    const float DOLAR_A_YEN = 110.00; // 1 dólar = 110 yenes

    do {
        // Mostrar menú
        cout << "\n--- Convertidor de Divisas ---" << endl;
        cout << "1. Convertir de dólares a pesos" << endl;
        cout << "2. Convertir de dólares a euros" << endl;
        cout << "3. Convertir de dólares a yenes" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;

        // Procesar la opción seleccionada
        switch (opcion) {
            case 1:
                cout << "Ingrese la cantidad en dólares: ";
                cin >> dolares;
                resultado = dolares * DOLAR_A_PESO;
                cout << dolares << " dólares son " << resultado << " pesos." << endl;
                break;
            case 2:
                cout << "Ingrese la cantidad en dólares: ";
                cin >> dolares;
                resultado = dolares * DOLAR_A_EURO;
                cout << dolares << " dólares son " << resultado << " euros." << endl;
                break;
            case 3:
                cout << "Ingrese la cantidad en dólares: ";
                cin >> dolares;
                resultado = dolares * DOLAR_A_YEN;
                cout << dolares << " dólares son " << resultado << " yenes." << endl;
                break;
            case 4:
                cout << "Saliendo del programa. ¡Gracias por usar el convertidor Rincon!" << endl;
                break;
            default:
                cout << "Opción no válida. Intente de nuevo." << endl;
        }
    } while (opcion != 4); // Repetir mientras la opción no sea salir

    return 0;
}
