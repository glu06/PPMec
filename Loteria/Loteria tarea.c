#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_TIRADAS 3

int tiradasRealizadas = 0;  // Variable global para contar las tiradas

// Prototipos de funciones
void tirarDados(int resultados[MAX_TIRADAS]);
void imprimirResultados(int resultados[MAX_TIRADAS]);
void jugarNumeros(int resultados[MAX_TIRADAS]);
void introducirJugada(int* jugada);
void introducirApuesta(int* apuesta);
int calcularGanancias(int opcionJuego, int* jugada, int apuesta);

int main() {
    int opcion;
    int resultados[MAX_TIRADAS] = {0};
    int jugada[3] = {0};
    int apuesta = 0;
    time_t t;

    srand((unsigned)time(&t));

    do {
        // Menú
        printf("\nMenú:\n");
        printf("0 - Jugar\n");
        printf("1 - Introducir su jugada\n");
        printf("2 - Introducir su apuesta ($DOP)\n");
        printf("3 - Tirar los dados\n");
        printf("4 - Imprimir resultados\n");
        printf("5 - Calcular Ganancias\n");
        printf("6 - Salir\n");
        printf("Ingrese su opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 0:
                printf("Seleccionaste Jugar.\n");
                printf("\n--- Opciones de Juego ---\n");
                printf("1. Numeros\n");
                printf("2. Palé\n");
                printf("3. Tripleta\n");
                printf("Seleccione el tipo de juego: ");
                scanf("%d", &opcion);
                switch (opcion) {
                    case 1:
                        jugarNumeros(resultados);
                        break;
                    case 2:
                        // Lógica para jugar al Palé
                        break;
                    case 3:
                        // Lógica para jugar a la Tripleta
                        break;
                    default:
                        printf("Opción no válida.\n");
                        break;
                }
                break;
            case 1:
                introducirJugada(jugada);
                break;
            case 2:
                introducirApuesta(&apuesta);
                break;
            case 3:
                tirarDados(resultados);
                printf("Tirada realizada y resultados guardados.\n");
                tiradasRealizadas++;  // Incrementar el contador de tiradas
                break;
            case 4:
                imprimirResultados(resultados);
                break;
            case 5:
                printf("Ganancias: %d\n", calcularGanancias(opcion, jugada, apuesta));
                break;
            case 6:
                printf("Saliendo del programa.\n");
                break;
            default:
                printf("Opción no válida. Inténtelo de nuevo.\n");
                break;
        }
    } while (opcion != 6);

    return 0;
}

void tirarDados(int resultados[MAX_TIRADAS]) {
    printf("Realizando tirada de dados...\n");

    for (int i = 0; i < MAX_TIRADAS; ++i) {
        resultados[i] = rand() % 100; // Números aleatorios entre 0 y 99
    }
}

void imprimirResultados(int resultados[MAX_TIRADAS]) {
    // Obtener la fecha y hora del sistema
    time_t rawtime;
    struct tm* timeinfo;
    time(&rawtime);
    timeinfo = localtime(&rawtime);

    printf("Resultados de las tiradas:\n");

    // Imprimir la tabla con la fecha y hora
    printf("| Tirada | Resultado |\n");
    printf("|--------|-----------|\n");
    for (int i = 0; i < MAX_TIRADAS; ++i) {
        printf("|   %d    |     %d     |\n", i + 1, resultados[i]);
    }

    // Imprimir el contador de tiradas
    printf("\nNúmero total de tiradas: %d\n", tiradasRealizadas);

    // Imprimir la fecha y hora
    printf("\nFecha y Hora: %s", asctime(timeinfo));
}

void jugarNumeros(int resultados[MAX_TIRADAS]) {
    printf("Seleccionaste Numeros. ¡Buena suerte!\n");
    for (int i = 0; i < MAX_TIRADAS; ++i) {
        printf("Resultado de la tirada %d: %d\n", i + 1, resultados[i]);
    }
}

void introducirJugada(int* jugada) {
    printf("Introduce tus tres jugadas (números del 0 al 99):\n");
    for (int i = 0; i < 3; ++i) {
        printf("Jugada %d: ", i + 1);
        scanf("%d", &jugada[i]);
    }
}

void introducirApuesta(int* apuesta) {
    printf("Ingrese la cantidad de apuesta: ");
    scanf("%d", apuesta);
}

int calcularGanancias(int opcionJuego, int* jugada, int apuesta) {
    // Lógica para calcular ganancias
    return 0; // Placeholder, debes implementar la lógica real aquí
}

