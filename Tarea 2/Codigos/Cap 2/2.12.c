#include <stdio.h>
#include <math.h>

/* Igualdad de expresiones.
EL programa, al recibir como datos T, P y N, compruebala igualdad de una expresion determinada. 

T, P y N: variable de tipo enterp. */

int main(void)

{

  int T, P, N;
  printf("Inggrese los valores de T, P y N: ");
  scanf("%d %d", &T, &P, &N);
    if (P != 0)
  {
    if (pow(T / P, N) == (pow(T / N)) / pow(P, N))
      
      printf("\nSe comprueba la igualdad");
    else 
      printf ("\nNO se comprueba la igualdad");
      }
  else
    printf ("\nP tiene que ser diferente de cero");
}