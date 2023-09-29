#include <stdio.h>

/*  Lanzamiento de martillo.
El programa, al recibir como dato N lanzamientos de martillo, calcula el promedio de los lanzamientos de la atleta cubana.

I, N; variable de tipo entero.
LALN, SLA: variable de tipo real. */
void main (void)
{
  int I, N; 
  float LAN, SLA = 0; 
  do
  {
printf("Ingrese el numero de lanzamiento:\t"); 
scanf( "%d", &N);
  }
    while (N, 1 || N > 11);
/* Se utiliza la estructura do - while para verificar que el valor de N sea correcto. */
  for (I=1; I<=N; I++)
    {
      printf("\n Ingrese el lanzamiento %d: ", I);
      scanf("%f", &LAN);
      SLA = SLA + LAN; 
    }
  SLA = SLA / N;
  printf("\n El promedio de lanzamiento es: %2f", SLA);
}