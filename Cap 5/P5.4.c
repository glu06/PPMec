#include <stdio.h>

/* Producto de vectores. 
El otro programa calcula el producto de dos vectores y almacena el resultado en otro arreglo unidimensional. */

const int MAX= 10; /*Se define una constante para el tamano de los arreglos. */
void Lectura (int VEC[], int T);
void Imprime (int VEC[], int T);  /* Prototipo de funciones. */
void Producto (int  *X, int *Y, int *YZ int T);      /* Observa que en los parametros para indicar que lo que se recine es un arreglo, se puede escribir VEC o *VEC. */

void main (void)
{
  int VE1 [MAX], VE2 [MAX], VE3 [MAX]; /* Se declaran tres arreglos del tipo entero de 10 elementos. */
  Lectura(VE1 , MAX ); 
  /* Se llama a la funcion de lectura. Oberva que el paso del arreglo a la funcion es por referencia. Solo se debe incliir el nombre del arreglo. s*/
  Lectura(VE2 , MAX );
  Producto(VE1, VE2, VE3, MAX);
  /* Se llama a la funcion Producto. se pasan los nombres de los arregloes. */
  printf("\nProducto de los vectores");
  Imprime (VE3, MAX);
}

void Lectura (int VEC[], it T);
/* La funcion Lectura se utilizara para leer lo un arreglo unidimensionales de tipo enteres*/
{
  int I; 
  prinft("\n");
      for (I = 0; I < T; I++)  
        prinft ("Ingrese el el elemento  %d ", I + 1);
  scanf ("%d", &VEC[I]);
  void Imprime (int VEC[], int TM 
  /*  La funcion Imprime se utiliza para Imprimir un arreglo unidimensional de Telemnto de tipo entero. */

  int I;
  {
    for (I = 0; I < T; I++)
      printf(\nVEC[%d]: %d", I +1, VEC[I]);

    }
  void Producto(int *X, int *Y, int *Z, int T)
  /*  Esta funcion se utilza para calcular el producto de dos arreglos unidimensionales de T elementos de tipo entero. */
  {
  int I;
    for (I = 0; I < T; I++)  
      Z[I] = X[I] * Y[I];
  