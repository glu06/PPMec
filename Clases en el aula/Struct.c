#include <stdio.h>
#include <string.h>

#define FILAS 3
#define COLUMNAS 3

// Estructura para almacenar los nombres de los países
struct Pais {
    char nombre[50];
};

// Función para mostrar el menú
void mostrarMenu() {
    printf("1. Ingresar nombres de países\n");
    printf("2. Mostrar nombres de países\n");
    printf("3. Salir\n");
    printf("Selecciona una opción: ");
}

int main() {
    struct Pais tabla[FILAS][COLUMNAS];
    int opcion;
    FILE *archivo;

    do {
        mostrarMenu();
        scanf("%d", &opcion);
        fflush(stdin);  // Limpiar el búfer de entrada

        switch (opcion) {
            case 1:
                // Ingresar nombres de países
                for (int i = 0; i < FILAS; i++) {
                    for (int j = 0; j < COLUMNAS; j++) {
                        printf("Ingresa el nombre del país en la fila %d, columna %d: ", i + 1, j + 1);
                        fgets(tabla[i][j].nombre, sizeof(tabla[i][j].nombre), stdin);
                    }
                }
                break;

            case 2:
                // Mostrar nombres de países
                printf("Nombres de países en la tabla:\n");
                for (int i = 0; i < FILAS; i++) {
                    for (int j = 0; j < COLUMNAS; j++) {
                        printf("Fila %d, Columna %d: %s", i + 1, j + 1, tabla[i][j].nombre);
                    }
                }
                break;

            case 3:
                // Salir del programa
                printf("Saliendo del programa...\n");
                break;

            default:
                printf("Opción no válida. Por favor, elige una opción válida.\n");
        }
    } while (opcion != 3);

    // Guardar la tabla en un archivo
    archivo = fopen("paises_latinoamerica.txt", "w");
    if (archivo) {
        for (int i = 0; i < FILAS; i++) {
            for (int j = 0; j < COLUMNAS; j++) {
                fprintf(archivo, "%s", tabla[i][j].nombre);
            }
        }
        fclose(archivo);
    } else {
        printf("No se pudo abrir el archivo para guardar los datos.\n");
    }

    return 0;
}
