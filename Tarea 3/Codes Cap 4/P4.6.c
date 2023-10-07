#include <stdio.h>
/* Prueba de parametro por referencia. */

  void f1 (int *);

/* Prototipo de funcion. EL parametro es de tipo entero y por referencia se observa el suo del operador de indireccion. */

void main (void)

{
  int I, K = 4;
  
for (T = 1; T <= 3; I++ )
  
    {
      printf("\n\nValor de K antes de llamar a la funcion: %d", ++K);
      
      printf("\nValor de K despues de llamar a la funcion: %d", f1(&K));
      
      /*  Llamada a la funcion f1. se pasa la direccion de la variable K, por medio del operador de direccion: &. */
      
    }
}
 void f1 (int *R)  
/* La funcion f1 recibe un parametro por referencia. cada vez que el parametro se utiliza en la funcion debe ir precedido por el operador de indirecciones. */

{
  *R += *R;
}