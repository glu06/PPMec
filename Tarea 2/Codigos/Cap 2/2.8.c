#include <stdio.h>

/* Asistentes.
El programa, al recibir como dato la matricula, la carrera, el semestre y el promedio de un alumno de una universidad privada, determina si este puede ser asistente de su carrera.

MAT, CAR y SEM:  variable de tipo entero. PRO: variable de tipo real. */

int main(void)

{
  
  int MAT, CAR, SEM;
  float PRO;

  
  printf("Ingrese matricula: ");
  scanf("%d", &MAT);
  printf("Ingrese carrera (1-Industrial 2- Telematica 3- Computacion) : ");
  scanf("%d", &CAR);
  printf("Ingrese semestre: ");
  scanf("%d", SEM);
  printf("Ingrese promedio:  ");
  scanf("%f", &PRO);
  switch (CAR)
    {
      case 1:
      if (SEM >= 6 && PRO >= 8.5)
printf("\n%d %d %5.2f", MAT, CAR, PRO);
      break;
     case 2:
       if (SEM >= 5 && PRO >= 9)
printf("\n%d %d %5.2f", MAT, CAR, PRO);
      break;
     case 3:
       if (SEM >= 6 && PRO >= 8.8)
printf("\n%d %d %5.2f", MAT, CAR, PRO);
      break;
      case 4:
       if (SEM >= 7 && PRO >= 9)
printf("\n%d %d %5.2f", MAT, CAR, PRO);
      break;
      
      default: printf("\n Error en la carrera");
        
      break;
    }
  return 0;
}
