#include <stdio.h>

/* Parametro y funciones. */

int f1 (void);
int f2 (void);   
/* Prototipos de funciones. */
int f3  (void);
int f4 (void);
int k = 5; 

void main (void)
{
  int I;
  for (I = 1 ; I <= 4; I++)
    {
      printf("\n\nEl resultado de la funcion f1 es: %d", f1());
       printf("\nEl resultado de la funcion f1 es: %d", f2());
       printf("\nEl resultado de la funcion f1 es: %d", f3()); printf("\nEl resultado de la funcion f1 es: %d", f4());
      
    }
}
int f1 (void)
{
  k *= k;
return(k);
   
}

int f2(void)
{
  int k = 3; 
  k++; 
  return (k);
  
}
int f3(void)
{
  static int K = 6;
  k += 3; 
  return (k);
}
int f4 (void )
{
  int k = 4; 
  k = k + k;
  return (k);
}