#include <stdio.h>

/* Empresa textil. 
El programa, al recibir como datos decisivos la categoria y la antiguedad de un empleado, determina si el mismo reune las condiciones establecidas por la empresa para ocupar un nuevo carso en una sucursal.

CLA, CAT, ANT, RES: variable de tipo entero. 
SAL: variable de tipo real. 
 */

void main(void)
{
  int CLA, CAT, ANT, RES;
  printf("*\nIngrese la clave, la catagoria y la antiguedad del trabajador: "); 
  scanf("%d %d %d", &CLA, &CAT, &ANT);
  switch (CAT)
    {
    case 3:
    case 4: if (ANT >= 5)
    RES = 1; 
  else
RES = 0; 
  break;
      case 2: if (ANT >= 7)
    RES = 1; 
  else 
    RES = 0;
  break; 
  default: RES = 0;
    break; 
    
    }
if (RES)
  printf("\nEl trabajador cpn clave %d reune las condiciones para el puesto", CLA);
else
  printf("\nEl trabajador con clave %d no reune las condiciones para el puesto",CLA);
    }
  
    