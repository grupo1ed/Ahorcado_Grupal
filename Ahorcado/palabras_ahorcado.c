#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <math.h>

char * Palabra();

void main(){

 char *palabra=Palabra();
 printf("\n%s\n", palabra);
}

char * Palabra(){
  char *lista[10] = {"oso", "amigo", "estornudo", "microondas", "continuacion", "aminoacido", "algoritmo", "inteligencia", "mentecato", "procesos"};
  srand(time(NULL));
  float numero = rand() % (9 - 0) + 0;
  int redondeo = roundf(numero);
  char palabra[50]; strcpy(palabra,lista[redondeo]);
  return palabra;
}
