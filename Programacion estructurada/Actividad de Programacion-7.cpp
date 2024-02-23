/*Presentacíon
Diego Muñoz Cisneros
22/02/2024
Nombre: Actividad de programación - 5
Centro Universitario De los Altos
Ing en computacion/2do semestre
Profesor:
Descripcion: Elaborar una calculadora de matrices cuadradas que realice la suma, resta y multiplicación de 2 matrices. Las condiciones son la siguientes:

Matriz cuadrada mínima es de 2x2 y máxima 10x10
El valor los puede meter el usuario e indicar en qué matriz irá dicho valor
Tendrá la opción de ser llenada con valores aleatorios entre - 100  y 100
Realizar la operación que indique el usuario final
Borrado y edición de elementos
Vaciado de matrices*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int tamano = 0; // declarar tamano y opcion
    int opcion = 0;
    cout << "De cuanto espacios quieres tu matris del 2 al 10" << endl; // pedir tamano
    cin >> tamano;
    int matriz1[tamano][tamano]; // declarar las matices
    int matriz2[tamano][tamano];
    int matriz3[tamano][tamano];
    srand(time(0));
    // Funcion para crear numeros aleatorios
    do
    {
        cout << "Primero vaciar las matrices ====== presiona 5" << endl;
        cout << "1. Meter valor" << endl; // preguntar que quiere realizar
        cout << "2. Imprimin Matriz" << endl;
        cout << "3. Llenar matrices con valores aleatorios" << endl;
        cout << "4. Operaciones" << endl;
        cout << "5. Vaciar matriz" << endl;
        cout << "8. Finalizar" << endl;
        cin >> opcion;
        switch (opcion)
        {
        case 1:
        {
            int fila, columna, valor, matriz; // editar lugar especifico de la matriz deseado
            cout << "Matriz 1 o Matriz 2" << endl;
            cin >> matriz;
            if (matriz == 1) // editar matriz 1
            {
                cout << "Introduce la fila: ";
                cin >> fila;
                cout << "Introduce la columna: ";
                cin >> columna;
                cout << "Introduce el valor: ";
                cin >> valor;
                if (fila >= 0 && fila < tamano && columna >= 0 && columna < tamano)
                {
                    matriz1[fila][columna] = valor;
                    cout << "Valor insertado correctamente.\n";
                }

                else
                {
                    cout << "Posición fuera de los límites de la matriz.\n";
                }
            }
            else if (matriz == 2) // editar matriz 2
            {
                cout << "Introduce la fila: ";
                cin >> fila;
                cout << "Introduce la columna: ";
                cin >> columna;
                cout << "Introduce el valor: ";
                cin >> valor;
                if (fila >= 0 && fila < tamano && columna >= 0 && columna < tamano)
                {
                    matriz2[fila][columna] = valor;
                    cout << "Valor insertado correctamente.\n";
                }

                else
                {
                    cout << "Posición fuera de los límites de la matriz.\n";
                }
            }
            else
            {
                cout << "No sabes leer" << endl;
            }
            break;
        }
        case 2:
        {
            int decision; // variable para guardar la repuesta
            cout << "Que matriz quieres imprimir la 1 o la 2 " << endl;
            cin >> decision;
            if (decision == 1) // imprimir la matriz 1
            {
                for (int i = 0; i < tamano; i++)
                {
                    for (int j = 0; j < tamano; j++)
                    {
                        cout << matriz1[i][j] << ' ';
                    }
                    cout << '\n';
                }
            }
            else if (decision == 2) // imprimir la matriz 2
            {
                for (int i = 0; i < tamano; i++)
                {
                    for (int j = 0; j < tamano; j++)
                    {
                        cout << matriz2[i][j] << ' ';
                    }
                    cout << '\n';
                }
            }
            else
            {
                cout << "No sabes leer";
            }
            break;
        }
        case 3:
        {
            int decision;
            cout << "Que matriz quieres llenar la 1 o la 2 " << endl;
            cin >> decision;
            if (decision == 1) // llenar la matriz
            {
                for (int i = 0; i < tamano; i++)
                {
                    for (int j = 0; j < tamano; j++)
                    {
                        matriz1[i][j] = rand() % 201 - 100;
                    }
                }
            }
            else if (decision == 2) // llenar la matriz 2
            {
                for (int i = 0; i < tamano; i++)
                {
                    for (int j = 0; j < tamano; j++)
                    {
                        matriz2[i][j] = rand() % 201 - 100;
                    }
                }
            }
            else
            {
                cout << "No sabes leer";
            }
            break;
        }
        case 4:
        {
            int operacion = 0;
            cout << "Que operacion quieres realiza" << endl; // preguntar que operacion quiere realizar
            cout << "1. Suma" << endl;
            cout << "2. Resta" << endl;
            cout << "3. Multiplicaion" << endl;
            cin >> operacion;
            if (operacion == 1) // suma
            {
                for (int i = 0; i < tamano; i++)
                {
                    for (int j = 0; j < tamano; j++)
                    {
                        matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
                    }
                }
                cout << "Tu matriz resulatante es" << endl;
                for (int i = 0; i < tamano; i++)
                {
                    for (int j = 0; j < tamano; j++)
                    {
                        cout << matriz3[i][j] << ' ';
                    }
                    cout << '\n';
                }
            }
            else if (operacion == 2)
            {
                for (int i = 0; i < tamano; i++)
                {
                    for (int j = 0; j < tamano; j++)
                    {
                        matriz3[i][j] = matriz1[i][j] - matriz2[i][j];
                    }
                }
                cout << "Tu matriz resulatante es" << endl;
                for (int i = 0; i < tamano; i++)
                {
                    for (int j = 0; j < tamano; j++)
                    {
                        cout << matriz3[i][j] << ' ';
                    }
                    cout << '\n';
                }
            }
            else if (operacion == 3)
            {
                for (int i = 0; i < tamano; i++)
                {
                    for (int j = 0; j < tamano; j++)
                    {
                        matriz3[i][j] = matriz1[i][j] * matriz2[i][j];
                    }
                }
                cout << "Tu matriz resulatante es" << endl;
                for (int i = 0; i < tamano; i++)
                {
                    for (int j = 0; j < tamano; j++)
                    {
                        cout << matriz3[i][j] << ' ';
                    }
                    cout << '\n';
                }
            }
            else
            {
                cout << "No sabes leer";
            }
            break;
        }
        case 5:
        {
            int x;
            cout << "que matriz quieres vaciar 1 o 2 " << endl;
            cin >> x;
            if (x == 1)
            {
                for (int i = 0; i < tamano; i++)
                {
                    for (int j = 0; j < tamano; j++)
                    {
                        matriz1[i][j] = 0;
                    }
                }
            }
            else if (x == 2)
            {
                for (int i = 0; i < tamano; i++)
                {
                    for (int j = 0; j < tamano; j++)
                    {
                        matriz2[i][j] = 0;
                    }
                }
            }
            break;
        }
        case 8:
        {
            cout << "FIN";
            break;
        }
        default:
            cout << "-------" << endl;
        }
    } while (opcion != 8);
    return 0;
}