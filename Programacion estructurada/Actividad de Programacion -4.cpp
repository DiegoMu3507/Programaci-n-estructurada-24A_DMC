/*Presentacíon
Diego Muñoz Cisneros
06/02/2024
Nombre: Actividad de programación - 3
Centro Universitario De los Altos
Ing en computacion/2do semestre
Profesor:
Descripcion: Solicitar al usuario un valor, y la serie debe llegar a un valor igual o menor al indicado por el usuario

El usuario va a elegir con qué ciclo debe trabajar
El programa debe salir cuando el usuario lo indique*/
#include <iostream>
#include <stdio.h>
using namespace std;
int main() // inicia el programa
{
    char caso; // se declaran variables
    int finalizar = 1;
    int contador = 0;
    int i = 0;
    do // se habre un do while para poder repetir todo
    {

        cout << "For [a] While [b] Do while [c]" << endl; // pregunnta que se desea usar
        cin >> caso;
        switch (caso) // inicia el swich
        {
        case 'a':                             // caso 1
            for (i = 0; (i <= 10); i = i + 1) // imprimir del 0 al 10
            {
                cout << i << endl;
            }
            break;
        case 'b':
            while (contador <= 10) // imprimir del 0 al 10
            {
                for (i = 0; (i <= 10); i = i + 1)
                {
                    cout << i << endl;
                    contador++;
                }
            }
            break;
        case 'c':
            do // imprimir del 0 al 10
            {
                for (i = 0; (i <= 10); i = i + 1)
                {
                    cout << i << endl;
                }
                contador++;

            } while (contador <= 10);
            break;
        default:
            cout << "No sabes leer o q ??" << endl; // mensaje en caso de no seleccionar ningun caso
        }
        cout << "Quieres finalizar NO[1]SI[Presiona cualquier tecla]" << endl; // Pregunta si se quiere finalizar
        cin >> finalizar;
    } while (finalizar == 1);
    return 0; // finaliza el codigo
}