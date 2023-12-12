#include <stdio.h>
#include <stdlib.h>
typedef struct  {
int x,y;
}
tcoord;

int main (int argc, char *argv[]) {
int *a, *b;
  a=  (int *) malloc(sizeof(int));
   b=  (int *) malloc(sizeof(int));
  *a= 5;
  *b= 10;
  printf("El valor de a es: %d", *a);
   printf("\nEl valor de b es: %d", *b);
   printf("\nEl valor de la suma entre a y be es: %d", (*a + *b ));
  free(a); a=NULL;
  free(b); b=NULL;
  
  tcoord *punto;
  punto = (tcoord *)malloc(sizeof(tcoord));

  printf("\n\nIngrese x: "); scanf("%d", &punto->x);
  printf("\nIngrese y: "); scanf("%d", &punto->y);
  printf("\nvalor de x: %d, valor de y:  %d", punto->x, punto->y);

  free(punto); punto=NULL;
  
  int i, n, *list; 
  
  printf("\n\nIngrese el tamano de la lista:   ");
  scanf("%d",&n );
  list = (int *)malloc(sizeof(int)*n);

  for (i=0 ; i<n ; i++){
    printf("\n\nIngrese el dato %d", i);
    scanf("%d", &list[i]);
  }
    for (i=0 ; i<n ; i++){
    printf("\n\nIngrese el dato %d", i);
    scanf("%d", &list[i]);
    }
  free (list); list=NULL;
  
  return 0;
}