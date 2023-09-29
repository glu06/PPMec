#include <stdio.h>

/*  Suma positivos.
El programa, al recibir como dato N numeros enteros, obtiene la suma de los numeros positivos.

I, N NUM, SUM: variable de tipo entero. */

void main (void)
{
  int I, N, NUM, SUM;
  SUM = 0;
  printf("Ingrese el numero de datos: \t");
  scanf("%d", &N);
  for (I=1; I<=N; I++)
    {
printf("Ingrese el dato nuemro %d:\t", I);
    scanf("%d", &NUM);
    if (NUM > 0)
      SUM = SUM + SUM;
    }
  printf("\nLA suma de los dos numeros es: %d, SUM");
}