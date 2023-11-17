#include <stdio.h>

/* Busqueda secuencial en arreglos desordenados. */
const int MAX = 100;
void Lectura (int, int);
int Busca (int *, int, int);
int main (void)
{ 
  int RES, ELE, TAM, VEC[MAX];
  { 
    printf("Ingreseel tamano del arreglo: ");
    scanf("%d", &TAM);

  }
  while(TAM>MAX || TAM<1);
  Lectura(TAM, VEC);
  printf("\nIngrese el elemento a buscar: ");
  scanf ("%d", &ELE);
  RES= Busca(VEC, TAM, ELE);
  if
    (RES)
  else
    
  pritnf("\nEl elemento no se encuentra en la posicion %d.");
  
  else  
  
pritnf("\nEl elemento  se encuentra en el arrreglo.");
  
}
  