#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

// Funcion para imprimir la palabra oculta con guiones bajos para letras no adivinadas
void imprimirpalabraoculta(const string& palabraseleccionada, const vector<bool>& letrasadivinadas) {
    for (size_t i = 0; i < palabraseleccionada.length(); ++i) {
        if (letrasadivinadas[i]) {
            cout << palabraseleccionada[i] << " ";
        } else {
            cout << "_ ";
        }
    }
    cout << endl;
}

int main() {
    // Banco de palabras
    vector<string> palabras = {"gato", "perro", "casa", "computadora", "programacion",
                               "estudiante", "universidad", "montana", "camino", "ciudad",
                               "telefono", "mesa", "silla", "ventana", "jardin",
                               "libro", "agua", "bosque", "playa", "musica"};

    // Seleccionar una palabra al azar
    srand(time(nullptr));
    string palabraseleccionada = palabras[rand() % palabras.size()];

    // Inicializar letrasadivinadas con false para cada letra de la palabra seleccionada
    vector<bool> letrasadivinadas(palabraseleccionada.length(), false);

    // Contador de intentos
    int intentos = 0;

    // Bucle principal del juego
    while (true) {
        // Imprimir la palabra oculta
        imprimirpalabraoculta(palabraseleccionada, letrasadivinadas);

        // Solicitar una letra al jugador
        cout << "Ingresa una letra: ";
        char letra;
        cin >> letra;

        // Verificar si la letra está en la palabra y actualizar letrasadivinadas
        bool letraadivinada = false;
        for (size_t i = 0; i < palabraseleccionada.length(); ++i) {
            if (palabraseleccionada[i] == letra) {
                letrasadivinadas[i] = true;
                letraadivinada = true;
            }
        }

        // Incrementar el contador de intentos si la letra no está en la palabra
        if (!letraadivinada) {
            ++intentos;
        }

        // Verificar si el jugador ha ganado o perdido
        bool todasadivinadas = true;
        for (size_t i = 0; i < palabraseleccionada.length(); ++i) {
            if (!letrasadivinadas[i]) {
                todasadivinadas = false;
                break;
            }
        }
        if (todasadivinadas) {
            cout << "TU TU TU TUUU  TUU GANASTE SONIDERO PIRATA MAMAMMAMMAAMAMAMMASTER PRO" << palabraseleccionada << endl;
            break;
        } else if (intentos >= 6) {
            cout << "JAJAJAJA FAIL" << palabraseleccionada << endl;
            break;
        }
    }

    return 0;
}
