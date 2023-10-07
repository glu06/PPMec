#include <stdio.h>
#include <math.h>



/* Temperaturas. 
El programa recibe como dato 24 numeros reales que repreentan las temperaturas en el exterior en un periodo de 24 horas. Calcula el promedio del dia y la temperaturas maxima y minima con la la hora en el que se registraron. */

void Acutem(float);
void Maxima (float, int); /* Prototipos de funciones. */
void Minima (float, int);

float ACT = 0.0;
float MAX = 50.0; /* Variables globales. */
float MIN = 60.0; 
int HMAX; 
int HMIN; 

 
/* Variables globales. ACT se utiliza para acumular las temperaturas, por esa razon se inicializa en cero. MAX se utiliza para calcular la maxima; se inicializa en -50 para que el primer valor que se ingrese modifique su contenido. MIN se utiliza para calcular la minima; se inicializa con un valor muy alto para que el primer valor ingresado modifique su contenido. HMAX y HMIN se utilizan para almacenar el horario en que se produjeron las temperaturas maxima y minima, respectivamente. */

void main (void)
{
  float FTEM[24];
  int ARRAY_HORA[24];
  float TEM; 
  int I; 
  for (I = 1; I <= 24; I++)
    {
      printf("Ingresa la temperatura de la hora %d: ", I);
      scanf("%f", &TEM);
      FTEM[I-1]=TEM;
      ARRAY_HORA[I-1] = I;
      
      Acutem(TEM);
      Maxima (TEM, I);  /* 
 Llamada  a las funciones. Paso de parametros por valor. */
      Minima(TEM, I);
    }
  printf("\nPromedio del dia: %5.2f", (ACT/ 24));
    printf("\nMaxima del dia: %5.2f, \tHora: %d",MAX, HMAX);
    printf("\nMinima del dia: %5.2f, \tHora: %d",MIN, HMIN);
}
void Acutem(float T)
/* Esta funcion acumula las temperaturas en la variable globales ACT para posteriormente calcular el promedio. */

{
  ACT += T;
  
}


void Maxima(float T, int H)
/* Esta funcion almaacena la temperatura maxima y la hora en que se produjo en las variables globales MAX y HMAX, respectivamente. */
{
  if (MAX < T)
  {
    MAX = T;
    HMAX = H; 
  
  }
}
void Minima (float T, int H)
/*  Esta funcion almacena la temperatura minima y la hora en que se produjo en las variables globales MIN y HMIN. */
{
  if (MIN > T)
  {
    MIN = T;
    HMIN = H;
  }
}

