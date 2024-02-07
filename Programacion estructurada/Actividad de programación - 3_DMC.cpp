/*Presentacíon
Diego Muñoz Cisneros
06/02/2024
Nombre: Actividad de programación - 3
Centro Universitario De los Altos
Ing en computacion/2do semestre
Profesor:
Descripcion: Menus en donde encuentre y separe datos ingresados por el usuario*/
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    // declarar variables
    int x;
    int i;
    int contador;
    int operaciones;

    do
    { // hacer esto
        cout << "Dame un numero" << endl;//pedir el numero 
        cin >> x;
        if (x > 0 && x < 500)//inicia el if 
        {
            while (contador < 100)//conocer el numero de veces 
            {
                x = x + 5;
                contador = contador + 1;
                cout << x << endl;
            }
            operaciones++; //contar el numero de operaciones 
        }
        else if (x > 500 && x < 1000)//inicia el if
        {
            while (contador < 50)
            {
                x = x + 10;
                contador = contador + 1;
                cout << x << endl;
            }
            operaciones++;
        }
        else
        {
            cout << "No se puede calcular el valor" << endl;
            operaciones++;
        }
        operaciones++;
        cout << "Quieres repetir si [1] no [2]" << endl;//PREGUNTA SI QUIERES FINALIZAR 
        cin >> i;
    } while (i == 1); // mientras i sea 2
    cout << "se realizaron " << operaciones << " operaciones" << endl;// imprimir el numero de operaciones 
    return 0;
}