/*Presentacíon
Diego Muñoz Cisneros
06/02/2024
Nombre: Actividad de programación - 4
Centro Universitario De los Altos
Ing en computacion/2do semestre
Profesor:
Descripcion: Solicitar al usuario un valor, y la serie debe llegar a un valor igual o menor al indicado por el usuario

El usuario va a elegir con qué ciclo debe trabajar
El programa debe salir cuando el usuario lo indique*/
#include <iostream>
using namespace std;
int main() // inicia el programa
{
    char caso; // se declaran variables
    int finalizar = 1;
    int n = 0;
    int t1 = 1;
    int t2 = 0;
    int i = 0;
    do // se habre un do while para poder repetir todo
    {
        cout << "Dime el numero max de la serie que quieres realizar" << endl; // Pregunta cual numeros sera el maximo
        cin >> n;
        cout << "For [a] While [b] Do while [c]" << endl; // pregunnta que se desea usar
        cin >> caso;
        switch (caso) // inicia el swich
        {
        case 'a': // caso for
            for (i = 0; i <= n; i = t1 + t2)
            {
                cout << i << endl;
                t2 = t1;
                t1 = i;
            }
            break;
        case 'b':
            i = 0;
            while (n >= i) // caso while
            {
                cout << i << endl;
                t2 = t1;
                t1 = i;
                i = t1 + t2;
            }
            break;
        case 'c':
            i = 0;
            do // caso do while
            {
                cout << i << endl;
                t2 = t1;
                t1 = i;
                i = t2 + t1;

            } while (n >= i);
            break;
        default:
            cout << "No sabes leer o q ??" << endl; // mensaje en caso de no seleccionar ningun caso
        }
        cout << "Quieres finalizar NO[1]SI[Presiona cualquier tecla]" << endl; // Pregunta si se quiere finalizar
        cin >> finalizar;
    } while (finalizar == 1);
    return 0; // finaliza el codigo
}
