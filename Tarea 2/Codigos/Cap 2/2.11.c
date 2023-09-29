#include <stdio.h>

/* Billete de ferrocarril.
El programa calcula el costo de un billete de un ferrocarril teniendo en cuenta la distancia entre las dos ciudades y el tiempo de permanencia del pasajero.

  DIS y TIE: variable de tipo entero.
BIl: variable de tipo real */

void main(void)
{
  int DIS, TIE;
  float BIL; 
  printf("Ingresela distancia entre ciudades y el teimpo de estancia: ");
  scanf("%d %d", &DIS, &TIE);
  if ((DIS*2 > 500) && (TIE > 10)) 
    BIL = DIS * 2 * 0.19 * 0.8;
  else
    BIL = DIS * 2 * 0.19;
  printf("*\n\nCosto del billete:  %7.2f", BIL);
  
}