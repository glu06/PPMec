#include <stdio.h>

/* Suma pagos.
El programa, al recibir como datos un conjunto de pagos realizados en el ultimo mes, obtiene la suma de los mismos

PAG y SPA: variable de tipo real. */

void main(void)
{
  float PAG, SPA;
  SPA = 0;
  printf("Ingrese el numero de pago:\t");
  scanf("%f", &PAG);
  while (PAG)
    /* Observa que la condicion es verdadera mientras el pago es diferente de cero */ 
  
    {
      SPA = SPA + PAG;
      printf("Ingresee; siguiente pago:\t  " );
      scanf("%f", &PAG);
      /* Observa que la proposicion que modifica la condicion es una lectura. */
      
    }
  printf ("\nEl total de pagos del mes es: %.2f", SPA);
}