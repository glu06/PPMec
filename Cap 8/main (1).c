#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct 
{
char calle[20];
int numero;
int cp;
char localidad[20];
} domicilio;
struct empleado /* Declaración de la estructura anidada empleado. */
{
char nombre[20];
char departamento[20];
float sueldo;
domicilio direccion; 
};
void Lectura(struct empleado *a)
{
printf("\nIngrese el nombre del empleado: ");
gets(a->nombre);
fflush(stdin);
printf("Ingrese el departamento de la empresa: ");
gets(a->departamento);
printf("Ingrese el sueldo del empleado: ");
scanf("%f", &a->sueldo);
fflush(stdin);
printf("—-Ingrese la dirección del empleado—-");
printf("\n\tCalle: ");
gets(a->direccion.calle);
printf("\tNúmero: ");
scanf("%d", &a->direccion.numero);
printf("\tCódigo Postal: ");
scanf("%d", &a->direccion.cp);
fflush(stdin);
printf("\tLocalidad: ");
  gets(a->direccion.localidad);
  }
  int main(void)
  {
  struct empleado e0 = {"Arturo", "Compras", 15500.75, "San Jerónimo", 120,
  3490, "Toluca"};
  struct empleado *e1, *e2, e3, e4;
  /* Se declaran diferentes variables y apuntadores de la estructura empleado
  para que el lector pueda apreciar también las diferentes formas en que los
  campos reciben valores. */
  /* En el programa principal se leen los campos de una variable, e3, y un
  apuntador de tipo estructura, *e1. */
  e1= new (struct empleado);
  printf("\nIngrese el nombre del empleado 1: ");
  scanf("%s", &(*e1).nombre);
  fflush(stdin);
  printf("Ingrese el departamento de la empresa: ");
  gets(e1->departamento);
  printf("Ingrese el sueldo del empleado: ");
  scanf("%f", &e1->sueldo);
  printf("—-Ingrese la dirección del empleado—-");
  printf("\n\tCalle: ");
  fflush(stdin);
  gets(e1->dirección, calle);
  printf("\tNúmero: ");
  scanf("%d", &e1->direccion.numero);
  printf("\tCódigo Postal: ");
  scanf("%d", &e1->direccion.cp);
  printf("\tLocalidad: ");
  fflush(stdin);
  gets(e1->direccion.localidad);
  printf("\nIngrese el nombre del empleado 3: ");
  scanf("%s", &e3.nombre);
  fflush(stdin);
  printf("Ingrese el departamento de la empresa: ");
  gets(e3.departamento);
  printf("Ingrese el sueldo del empleado: ");
  scanf("%f", &e3.sueldo);
  printf("—-Ingrese la dirección del empleado—-");
  printf("\n\tCalle: ");
  fflush(stdin);
  gets(e3.direccion.calle);
  printf("\tNúmero: ");
  scanf("%d", &e3.direccion.numero);
  printf("\tCódigo Postal: ");
  scanf("%d", &e3.direccion.cp);
  printf("\tLocalidad: ");
  fflush(stdin);
  gets(e3.direccion.localidad);
  8.2.4. Estructuras con arreglos
  Existen numerosos casos en la vida real en los que para resolver un problema de
  manera eficiente necesitamos utilizar estructuras combinadas con arreglos.
  Observemos el siguiente ejemplo, en el que uno de los campos de la estructura
  es a su vez otro arreglo.
  EJEMPLO 8.5
  En una escuela almacenan la información de sus alumnos utilizando arreglos
  unidimensionales. La siguiente información de cada alumno se guarda en una
  estructura:
   Matrícula (entero).
   Nombre y apellido (cadena de caracteres).
   Promedios de las materias (arreglo unidimensional de reales).
  Dato: ARRE[N] (donde ARRE es un arreglo unidimensional de tipo ALUMNO,
  1 ≤ N ≤ 100).
  Escribe un programa en C que obtenga lo siguiente:
  a) La matrícula y el promedio de cada alumno.
  b) Las matrículas de los alumnos cuya calificación en la tercera materia sea
  mayor a 9.
  c) El promedio general de la materia 4.
    /* En la función Lectura se leen los campos de una variable, e4, y un apuntador
    de tipo estructura, *e2. */
    e2= new (struct empleado);
    Lectura(e2);
    Lectura(&e4);
    printf("\nDatos del empleado 1\n");
    printf("%s\t%s\t%.2f\t%s\t%d\t%d\t%s", e1->nombre, e1->departamento,
    e1>sueldo
    e1->direccion.calle, e1->direccion.numero, e1->direccion.cp,
    e1->direccion.localidad);
    printf("\nDatos del empleado 4n");
    printf("%s\t%s\t%.2f\t%s\t%d\t%d\t%s", e4.nombre, e4.departamento, e4.sueldo,
    e4.direccion.calle, e4.direccion.numero, e4.direccion.cp, e4.direccion.localidad);
    }