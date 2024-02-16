/*Presentacíon
Diego Muñoz Cisneros
13/02/2024
Nombre: Actividad de programación - 5
Centro Universitario De los Altos
Ing en computacion/2do semestre
Profesor:
Descripcion: Elaborar una suma de un arreglo con las siguientes características

Tener máximo 10 espacios
El usuario final debe elegir cuando entra un valor a cada posición (no es meter todos los datos al mismo tiempo)
Mostrar lista de valores
Mostrar sumatoria de todos los elementos
Borrado y edición de elementos
Vaciado de arreglo*/
#include <iostream>
using namespace std;

int main()
{
    // variables inicializadas en 0
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;
    int f = 0;
    int g = 0;
    int h = 0;
    int i = 0;
    int j = 0;
    int casilla, finalizar, suma, vaciar;

    do // se abre el do para finalizar cuando se quiera
    {
        cout << "Que casilla quieres llenar o presiona 0 para vaciar el arreglo" << endl;
        cin >> casilla;
        if (casilla == 0) // opción para vaciar el arreglo
        {
            a = b = c = d = e = f = g = h = i = j = 0;
            cout << "El arreglo ha sido vaciado." << endl;
        }
        else if (casilla == 1) // seleccion de casilla en cada lugar
        {
            cout << "Dame el valor para la casilla 1 " << endl;
            cin >> a;

            cout << "Quieres finalizar NO[1]SI[Presiona cualquier tecla]" << endl; // Pregunta si se quiere finalizar
            cin >> finalizar;
        }
        else if (casilla == 2)
        {
            cout << "Dame el valor para la casilla 2" << endl;
            cin >> b;
            cout << "Quieres finalizar NO[1]SI[Presiona cualquier tecla]" << endl; // Pregunta si se quiere finalizar
            cin >> finalizar;
        }
        else if (casilla == 3)
        {
            cout << "Dame el valor para la casilla 3 " << endl;
            cin >> c;
            cout << "Quieres finalizar NO[1]SI[Presiona cualquier tecla]" << endl; // Pregunta si se quiere finalizar
            cin >> finalizar;
        }
        else if (casilla == 4)
        {
            cout << "Dame el valor para la casilla 4 " << endl;
            cin >> d;
            cout << "Quieres finalizar NO[1]SI[Presiona cualquier tecla]" << endl; // Pregunta si se quiere finalizar
            cin >> finalizar;
        }
        else if (casilla == 5)
        {
            cout << "Dame el valor para la casilla 5 " << endl;
            cin >> e;
            cout << "Quieres finalizar NO[1]SI[Presiona cualquier tecla]" << endl; // Pregunta si se quiere finalizar
            cin >> finalizar;
        }
        else if (casilla == 6)
        {
            cout << "Dame el valor para la casilla 6 " << endl;
            cin >> f;
            cout << "Quieres finalizar NO[1]SI[Presiona cualquier tecla]" << endl; // Pregunta si se quiere finalizar
            cin >> finalizar;
        }
        else if (casilla == 7)
        {
            cout << "Dame el valor para la casilla 7 " << endl;
            cin >> g;
            cout << "Quieres finalizar NO[1]SI[Presiona cualquier tecla]" << endl; // Pregunta si se quiere finalizar
            cin >> finalizar;
        }
        else if (casilla == 8)
        {
            cout << "Dame el valor para la casilla 8 " << endl;
            cin >> h;
            cout << "Quieres finalizar NO[1]SI[Presiona cualquier tecla]" << endl; // Pregunta si se quiere finalizar
            cin >> finalizar;
        }
        else if (casilla == 9)
        {
            cout << "Dame el valor para la casilla 9 " << endl;
            cin >> i;
            cout << "Quieres finalizar NO[1]SI[Presiona cualquier tecla]" << endl; // Pregunta si se quiere finalizar
            cin >> finalizar;
        }
        else if (casilla == 10)
        {
            cout << "Dame el valor para la casilla 10 " << endl;
            cin >> j;
            cout << "Quieres finalizar NO[1]SI[Presiona cualquier tecla]" << endl; // Pregunta si se quiere finalizar
            cin >> finalizar;
        }

        int arreglo[10] = {a, b, c, d, e, f, g, h, i, j}; // se declara el arreglo
        for (int i = 0; i < 10; i++)                      // se imprimen los valores del arreglo
        {
            cout << arreglo[i] << endl;
            cout << endl;
        }
    } while (finalizar == 1);
    suma = a + b + c + d + e + f + g + h + j + i + j;  // suma de todos los valores
    cout << "Tu suma del arreglo es " << suma << endl; // resultado
    return 0;
}