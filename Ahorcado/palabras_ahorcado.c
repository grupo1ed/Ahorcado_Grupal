#include <stdio.h>
#include <string.h>

char * Palabra();

void main(){

 char *palabra=Palabra();
 printf("\n%s\n", palabra);
 /*

  char* letra = generaPalabra(lista);
  srand(time(NULL));
  float numero = rand() % (9 - 0) + 0;
  int redondeo = roundf(numero);
  char palabra[50]; strcpy(palabra,lista[redondeo]);

  char tecla;
  int cambios = 0;
  static char comprobador [100];
  static int intentos = 4;
  int longitud = strlen(palabra);
  system("cls");
  */
}

char * Palabra(){
  char *lista[10] = {"oso", "amigo", "estornudo", "microondas", "continuacion", "aminoacido", "algoritmo", "inteligencia", "mentecato", "procesos"};
  static char palabra[4] = "oso";
// return palabra[1];
return palabra;
}
