/*Presentacíon
Diego Muñoz Cisneros
20/02/2024
Nombre: Actividad de programación - 6
Centro Universitario De los Altos
Ing en computacion/2do semestre
Profesor:
Descripcion: VECTORES */
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> miVector; // Creamos un vector de enteros

    char opcion;
    do
    {
        cout << "1. Agregar un valor al vector" << endl;
        cout << "2. Mostrar la lista de valores" << endl;
        cout << "3. Mostrar la sumatoria de los elementos" << endl;
        cout << "4. Borrar un elemento del vector" << endl;
        cout << "5. Vaciar el vector" << endl;
        cout << "6. Salir" << endl;
        cin >> opcion;

        switch (opcion)
        {
        case '1':
        {
            int valor;
            cout << "Ingresa un valor: ";
            cin >> valor;
            miVector.push_back(valor); 
            break;
        }
        case '2':
        {
            cout << "Lista de valores:" << endl;
            for (int i = 0; i < miVector.size(); i++)
            {
                cout << miVector[i] << endl;
            }
            break;
        }
        case '3':
        {
            int suma = 0;
            for (int i = 0; i < miVector.size(); i++)
            {
                  suma = suma + miVector[i];
            }
            cout << "Sumatoria de los elementos: " << suma << endl;
            break;
        }
        case '4':
        {
            int posicion;
            cout << "Ingresa la posición del elemento a borrar: ";
            cin >> posicion;
            if (posicion >= 0 && posicion < miVector.size())
            {
                miVector.erase(miVector.begin() + posicion); // Borramos el elemento en la posición indicada
            }
            else
            {
                cout << "Posición inválida." << endl;
            }
            break;
        }
        case '5':
        {
            miVector.clear(); // Vaciamos el vector
            cout << "Vector vaciado." << endl;
            break;
        }
        case '6':
            cout << "FIN" << endl;
            break;
        default:
            cout << "No sabes leer o que?" << endl;
        }
    } while (opcion != '6');

    return 0;
}
