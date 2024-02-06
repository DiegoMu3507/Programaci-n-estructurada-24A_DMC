/*Presentacíon
Diego Muñoz Cisneros
29/01/2024
Nombre: Actividad de programación - 2
Centro Universitario De los Altos
Ing en computacion/2do semestre
Profesor:
Descripcion: Realizar un programa en
C/C++ en donde pongas en práctica al menos  6
 caracteres de escape y 6 cadenas de control de tipos de salida*/
#include <iostream> // librería correcta
using namespace std;

int main()
{
    //declarar valores
    int a = 10;
    double b = 3.14;
    char c = 'A';
    string d = "Hola";
    bool e = true;
   //imprimir lso valores
    cout << "Este es un programa que usa caracteres de escape y cadenas de control\n";
    cout << "El valor de a es %d  "<<a <<"\n";
    cout << "El valor de b es %fl " << b << "\n";
    cout << "El valor de c es %c " << c << "\n";
    cout << "El valor de d es %s " << d << "\n";
    cout << "El valor de e es %bl " << e << "\n"; //si es verdadero tetorna 1,si no retorna 0
    cout << "Hola \""; // comilla doble escapada
    cout << "Hola\'"; // comilla simple escapada
    cout << "Hola\\"; // barra invertida escapada
    cout << "Hola\t"; // tabulador escapado
    cout << "Hola \b"; // retroceso escapado
    cout << "Hola\f"; // salto de página escapado
    return 0;
}
