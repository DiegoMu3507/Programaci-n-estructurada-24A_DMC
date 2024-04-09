#include <iostream>
#include <stack>
using namespace std;

int movimientos = 0; // Variable para contar los movimientos

// Funcion para imprimir el estado actual de las torres
void imprimirTorres(const stack<int>& torreA, const stack<int>& torreB, const stack<int>& torreC) {
    cout << "Torre A:";
    stack<int> torreACopy = torreA;
    while (!torreACopy.empty()) {
        cout << " " << torreACopy.top();
        torreACopy.pop();
    }
    cout << endl;

    cout << "Torre B:";
    stack<int> torreBCopy = torreB;
    while (!torreBCopy.empty()) {
        cout << " " << torreBCopy.top();
        torreBCopy.pop();
    }
    cout << endl;

    cout << "Torre C:";
    stack<int> torreCCopy = torreC;
    while (!torreCCopy.empty()) {
        cout << " " << torreCCopy.top();
        torreCCopy.pop();
    }
    cout << endl;
}

// Funcion para mover un disco de una torre a otra
void moverDisco(stack<int>& torreOrigen, stack<int>& torreDestino) {
    if (!torreOrigen.empty() && (torreDestino.empty() || torreOrigen.top() < torreDestino.top())) {
        torreDestino.push(torreOrigen.top());
        torreOrigen.pop();
        movimientos++; // Aumentar el contador de movimientos
    } else {
        cout << "Movimiento invalido." << endl;
    }
}
