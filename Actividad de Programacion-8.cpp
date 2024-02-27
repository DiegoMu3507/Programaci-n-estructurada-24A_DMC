/*Presentacíon
Diego Muñoz Cisneros
26/02/2024
Nombre: Actividad de programación - 5
Centro Universitario De los Altos
Ing en computacion/2do semestre
Profesor:
Descripcion: Elaborar un programa que realice las operaciones de dos conjuntos:

Inserción de valores por parte del usuario (arreglos o vectores)
Pueden ser textuales o numéricos
Borrado y edición de elementos
Vaciado de conjuntos
Operaciones de Unión, Intersección, Diferencia y complemento.de elementos
Vaciado de arreglo*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Función para insertar elementos en un conjunto
void insertarElementos(vector<int>& conjunto) {
    int num;
    cout << "Ingrese los elementos del conjunto (ingrese -1 para finalizar):\n";
    while (true) {
        cin >> num;
        if (num == -1) {
            break;
        }
        conjunto.push_back(num);
    }
}

// Función para mostrar un conjunto
void mostrarConjunto(const vector<int>& conjunto) {
    cout << "Conjunto: { ";
    for (int elem : conjunto) {
        cout << elem << " ";
    }
    cout << "}\n";
}

// Función para eliminar un elemento de un conjunto
void eliminarElemento(vector<int>& conjunto, int elem) {
    auto it = find(conjunto.begin(), conjunto.end(), elem);
    if (it != conjunto.end()) {
        conjunto.erase(it);
        cout << "Elemento " << elem << " eliminado del conjunto.\n";
    } else {
        cout << "El elemento " << elem << " no está presente en el conjunto.\n";
    }
}

// Función para vaciar un conjunto
void vaciarConjunto(vector<int>& conjunto) {
    conjunto.clear();
    cout << "Conjunto vaciado.\n";
}

// Función para calcular la unión de dos conjuntos
vector<int> unionConjuntos(const vector<int>& conjunto1, const vector<int>& conjunto2) {
    vector<int> resultado = conjunto1;
    for (int elem : conjunto2) {
        if (find(resultado.begin(), resultado.end(), elem) == resultado.end()) {
            resultado.push_back(elem);
        }
    }
    return resultado;
}

// Función para calcular la intersección de dos conjuntos
vector<int> interseccionConjuntos(const vector<int>& conjunto1, const vector<int>& conjunto2) {
    vector<int> resultado;
    for (int elem : conjunto1) {
        if (find(conjunto2.begin(), conjunto2.end(), elem) != conjunto2.end()) {
            resultado.push_back(elem);
        }
    }
    return resultado;
}

// Función para calcular la diferencia de dos conjuntos (conjunto1 - conjunto2)
vector<int> diferenciaConjuntos(const vector<int>& conjunto1, const vector<int>& conjunto2) {
    vector<int> resultado;
    for (int elem : conjunto1) {
        if (find(conjunto2.begin(), conjunto2.end(), elem) == conjunto2.end()) {
            resultado.push_back(elem);
        }
    }
    return resultado;
}

// Función para calcular el complemento de un conjunto A respecto a un conjunto B (B - A)
vector<int> complementoConjuntos(const vector<int>& conjuntoA, const vector<int>& conjuntoB) {
    return diferenciaConjuntos(conjuntoB, conjuntoA);
}

int main() {
    vector<int> conjunto1, conjunto2;
    int opcion;

    do {
        cout << "\n1. Insertar elementos en conjunto 1\n";
        cout << "2. Insertar elementos en conjunto 2\n";
        cout << "3. Mostrar conjuntos\n";
        cout << "4. Eliminar elemento de conjunto 1\n";
        cout << "5. Eliminar elemento de conjunto 2\n";
        cout << "6. Vaciar conjuntos\n";
        cout << "7. Calcular la union de conjuntos\n";
        cout << "8. Calcular la interseccion de conjuntos\n";
        cout << "9. Calcular la diferencia entre conjuntos\n";
        cout << "10. Calcular el complemento de conjunto 1 respecto a conjunto 2\n";
        cout << "0. Salir\n";
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                insertarElementos(conjunto1);
                break;
            case 2:
                insertarElementos(conjunto2);
                break;
            case 3:
                mostrarConjunto(conjunto1);
                mostrarConjunto(conjunto2);
                break;
            case 4:
                int elem1;
                cout << "Ingrese el elemento a eliminar del conjunto 1: ";
                cin >> elem1;
                eliminarElemento(conjunto1, elem1);
                break;
            case 5:
                int elem2;
                cout << "Ingrese el elemento a eliminar del conjunto 2: ";
                cin >> elem2;
                eliminarElemento(conjunto2, elem2);
                break;
            case 6:
                vaciarConjunto(conjunto1);
                vaciarConjunto(conjunto2);
                break;
            case 7:
                mostrarConjunto(unionConjuntos(conjunto1, conjunto2));
                break;
            case 8:
                mostrarConjunto(interseccionConjuntos(conjunto1, conjunto2));
                break;
            case 9:
                mostrarConjunto(diferenciaConjuntos(conjunto1, conjunto2));
                break;
            case 10:
                mostrarConjunto(complementoConjuntos(conjunto1, conjunto2));
                break;
            case 0:
                cout << "Saliendo del programa...\n";
                break;
            default:
                cout << "Opción inválida. Por favor, intente de nuevo.\n";
        }

    } while (opcion != 0);

    return 0;
}
