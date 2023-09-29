#include <stdio.h>

/* Spa.
Elprograma, al recibir como datos el tipo de tratamiento, la edad y el numero de dias de internacion de un cliente en un spa, se calcula el costo total del tratamiento.

TRA, EDA, DIA: variables de tipo entero. 
COS: variable de tipo real. */

void main(void)
{
  int TRA, EDA, DIA;
  float COS;
  printf("Ingresetipo de tratamiento, edad y dias:   ");
  scanf("%d %d %d", &TRA, &EDA, &DIA);
  switch (TRA)
    {
      case 1: COS = DIA * 2800; break;
      case 2: COS = DIA * 1900; break;
2500; break;
      case 4: COS = DIA * 1150; break;
    }
  if (COS != -1)
  {
    if (EDA >= 60)
      COS = COS * 0.75;
    else
      if (EDA <= 25)
        COS = COS * 0.85;
    printf("*\nClave tratamiento: %d\t Dias: %d\t Costo total: %)8.2f", TRA, DIA, COS);
  }
  else
    printf("\nLa Clave del tratamieneto es incorrecta");
}