#include <stdio.h>
#include <stdlib.h>

int ()
{ 
  float x = 0.0;
  float b = 0.0; 
  printf("Calculo de Raiz Cuadrada\n");
  printf("Ingrese el numero: ");
  scanf("%f",&x);

  cont = 0;
  b = x;
 
  while (!(b == (x/b)))
  {
  cont++;
  b = 0.5*((x/b)+b);
  printf("\nValor x: %f,x");
  printf("\nValor x: %f,b");
  printf("\nValor cont: %i",&cont);
    
   }

 printf("La Raiz cuadrada de %f es: %f",x,b);

  
 return 0; 
}