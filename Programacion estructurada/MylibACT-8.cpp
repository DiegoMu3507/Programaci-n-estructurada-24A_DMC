#include <iostream>
using namespace std;
void opciones()
{
    int ElementosconjuntoAc, ElementosconjuntoBc;
    int menu, menudeoperaciones;
    cout << "De cuntos elementos quieres tu conjunto A" << endl;
    cin >> ElementosconjuntoAc;
    cout << "De cuntos elementos quieres tu conjunto B" << endl;
    cin >> ElementosconjuntoBc;
    char conjuntoA[ElementosconjuntoAc];
    char conjuntoB[ElementosconjuntoBc];
    do
    {
        cout << "\nQue quieres realizar" << endl;
        cout << "1. Llenar conjunto" << endl;
        cout << "2. Vaciar conjunto" << endl;
        cout << "3. Editar  elementos" << endl;
        cout << "4. Operaciones " << endl;
        cout << "5. Imprimir conjunto " << endl;
        cout << "6. Atras" << endl;
        cin >> menu;
        switch (menu)
        {
        case 1:
            int respuesta;
            cout << "Que conjunto quieres llenar" << endl;
            cout << "[1][2]" << endl;
            cin >> respuesta;
            if (respuesta == 1)
            {
                for (int i = 0; i < ElementosconjuntoAc; i++)
                {
                    cout << "Letra " << (i + 1) << ": ";
                    cin >> conjuntoA[i];
                }
            }
            else if (respuesta == 2)
            {
                for (int i = 0; i < ElementosconjuntoBc; i++)
                {
                    cout << "Letra " << (i + 1) << ": ";
                    cin >> conjuntoB[i];
                }
            }
            break;
        case 2:
            int conjuntoavaciar;
            cout << "Que conjunto quieres vaciar" << endl;
            cout << "[1][2]" << endl;
            cin >> conjuntoavaciar;
            if (conjuntoavaciar == 1)
            {
                for (int i = 0; i < ElementosconjuntoAc; i++)
                {
                    conjuntoA[i] = 0;
                }
            }
            else if (conjuntoavaciar == 2)
            {
                for (int i = 0; i < ElementosconjuntoBc; i++)
                {
                    conjuntoB[i] = 0;
                }
            }
            break;
        case 3:
            int resultado, posicion, valor;
            cout << "Que conjunto quieres editar" << endl;
            cout << "[1][2]" << endl;
            cin >> resultado;
            if (resultado == 1)
            {
                cout << "Los elementos del primer conjunto son: ";
                for (int i = 0; i < ElementosconjuntoAc; i++)
                {
                    cout << conjuntoA[i] << " ";
                }
                cout << endl;
                cout << "Que posicion quieres editar" << endl;
                cin >> posicion;
                cout << "Cual es el valor que quieres poner" << endl;
                cin >> valor;
                conjuntoA[posicion] = valor;
            }
            else if (resultado == 2)
            {
                cout << "Que posicion quieres editar" << endl;
                cin >> posicion;
                cout << "Cual es el valor que quieres poner" << endl;
                cin >> valor;
                conjuntoB[posicion] = valor;
            }
            break;
        case 4:

            cout << "Que quieres realizar" << endl;
            cout << "1. Union" << endl;
            cout << "2. Interseccion" << endl;
            cout << "3. Diferencia" << endl;
            cout << "4. Complemento" << endl;
            cin >> menudeoperaciones;
            switch (menudeoperaciones)
            {
            case 1:
                for (int i = 0; i < ElementosconjuntoAc; i++)
                {
                    cout << "La union es: " << endl;
                    cout << conjuntoA[i];
                    cout << ",";
                    cout << conjuntoB[i];
                    cout << ",";
                }
                break;
            case 2:
                cout << "La Interseccion es: " << endl;
                for (int i = 0; i < ElementosconjuntoAc; i++)
                {
                    for (int j = 0; j < ElementosconjuntoBc; j++)
                    {
                        if (conjuntoA[i] == conjuntoB[j])
                        {

                            cout << conjuntoA[i];
                            cout << ",";
                        }
                    }
                }
                break;
            case 3:
            {
                char diferencia[100];
                int tamDiferencia = 0;

                for (int i = 0; i < ElementosconjuntoAc; ++i)
                {
                    bool encontrado = false;
                    for (int j = 0; j < ElementosconjuntoBc; ++j)
                    {
                        if (conjuntoA[i] == conjuntoB[j])
                        {
                            encontrado = true;
                            break;
                        }
                    }
                    if (!encontrado)
                    {
                        diferencia[tamDiferencia++] = conjuntoA[i];
                    }
                }

                cout << "La diferencia entre el conjuntoA - ConjuntoB :";
                for (int i = 0; i < tamDiferencia; ++i)
                {
                    cout << diferencia[i] << " ";
                }
                cout << endl;
            }
            break;
            case 4:
            {
                cout << "El Complemto del conjuntoA respecto al conjuntoB:" << endl;
                char diferencia[100];
                int tamDiferencia = 0;
                for (int i = 0; i < ElementosconjuntoBc; ++i)
                {
                    bool encontrado = false;
                    for (int j = 0; j < ElementosconjuntoAc; ++j)
                    {
                        if (conjuntoB[i] == conjuntoA[j])
                        {
                            encontrado = true;
                            break;
                        }
                    }
                    if (!encontrado)
                    {
                        diferencia[tamDiferencia++] = conjuntoB[i];
                    }
                }
                cout << "Elementos en arreglo2 pero no en arreglo1: ";
                for (int i = 0; i < tamDiferencia; ++i)
                {
                    cout << diferencia[i] << " ";
                }
                cout << endl;
            }
            break;
            default:
                cout << "leee";
                break;
            }
            break;
        case 5:
            cout << "Los elementos del primer conjunto son: ";
            for (int i = 0; i < ElementosconjuntoAc; i++)
            {
                cout << conjuntoA[i] << " ";
            }
            cout << endl;

            cout << "Los elementos del segundo arreglo son: ";
            for (int i = 0; i < ElementosconjuntoBc; i++)
            {
                cout << conjuntoB[i] << " ";
            }
            cout << endl;
            break;
        case 6:
            cout << "Regresando al menu anterior " << endl;
            break;
        default:
            cout << "leeeeeee" << endl;

            break;
        }
    } while (menu != 6);
}