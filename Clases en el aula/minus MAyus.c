#include <stdio.h>
#include <ctype.h>

int min = 0; // Variable global para minúsculas
int may = 0; // Variable global para mayúsculas

void minymay(FILE *archivo);

int main(void) {
    char c;
    FILE *archivo;
    int confirmacion = 0;
  
    if ((archivo = fopen("tarea2.2.c", "r")) != NULL) {
        minymay(archivo);
        /* Se llama a la función minymay. Se pasa el archivo como parámetro. */
        fclose(archivo);
    } else {
        printf("No se pudo abrir el archivo\n");
    }

    printf("¿Desea grabar los resultados? (1 para Sí, 0 para No): ");
    scanf("%d", &confirmacion);

    if (confirmacion) {
        archivo = fopen("resultados.txt", "w");
        if (archivo != NULL) {
            fprintf(archivo, "Minúsculas: %d\n", min);
            fprintf(archivo, "Mayúsculas: %d\n", may);
            fclose(archivo);
            printf("Resultados grabados en 'resultados.txt'\n");
        } else {
            printf("No se pudo abrir el archivo para grabar los resultados\n");
        }
    }

    return 0;
}

void minymay(FILE *archivo) {
    int c;

    while ((c = fgetc(archivo)) != EOF) {
        if (islower(c)) {
            min++;
        } else if (isupper(c)) {
            may++;
        }
    }

    printf("Minúsculas: %d\n", min);
    printf("Mayúsculas: %d\n", may);
}
