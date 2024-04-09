#include <iostream>
#include <stack>
using namespace std;
#include "libcod12.cpp"
int main() {
    int numDiscos;
    cout << "Ingrese el numero de discos para jugar: ";
    cin >> numDiscos;

    // Inicializar torres
    stack<int> torreA, torreB, torreC;
    for (int i = numDiscos; i >= 1; --i)
        torreA.push(i);

    while (torreC.size() != numDiscos) {
        // Imprimir el estado actual de las torres
        imprimirTorres(torreA, torreB, torreC);

        // Solicitar al usuario el movimiento
        char origen, destino;
        cout << "Ingrese la torre de origen (A, B o C): ";
        cin >> origen;
        cout << "Ingrese la torre de destino (A, B o C): ";
        cin >> destino;

        // Realizar el movimiento
        switch (origen) {
            case 'A':
                switch (destino) {
                    case 'B':
                        moverDisco(torreA, torreB);
                        break;
                    case 'C':
                        moverDisco(torreA, torreC);
                        break;
                    default:
                        cout << "Torre de destino invalida." << endl;
                }
                break;
            case 'B':
                switch (destino) {
                    case 'A':
                        moverDisco(torreB, torreA);
                        break;
                    case 'C':
                        moverDisco(torreB, torreC);
                        break;
                    default:
                        cout << "Torre de destino invalida." << endl;
                }
                break;
            case 'C':
                switch (destino) {
                    case 'A':
                        moverDisco(torreC, torreA);
                        break;
                    case 'B':
                        moverDisco(torreC, torreB);
                        break;
                    default:
                        cout << "Torre de destino invalida." << endl;
                }
                break;
            default:
                cout << "Torre de origen invalida." << endl;
        }
    }

    cout << "¡Felicidades! Has ganado el juego." << endl;
    cout << "Numero de movimientos realizados: " << movimientos << endl;

    return 0;
}
