#include "dibujos_ahorcado.h"
#include "palabras_ahorcado.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[]) {
  char * palabra = Palabra();
  char letra;
  char tecla;
  int cambios = 0;
  static char comprobador [100];
  static int intentos = 6;
  int longitud = strlen(palabra);
  //---------Comprobador de letras

  while(intentos>0){
    dibujo(intentos);
    for (int i=0;i<longitud;i++){
      if(comprobador[i]=='x'){
        printf("%c",palabra[i]);
      }
      else{

        printf(" _ ");
      }
    }
    printf("\nIntroduzca una letra\t\t\t\tVidas restantes: %d\n",intentos);
    scanf(" %c",&letra);
    system("cls");

    for(int i=0;i<longitud;i++){
      if(palabra[i] == letra && comprobador[i] != 'x'){
        comprobador[i] = 'x';
        cambios++;
      }
    }
    if(cambios != 0){
      printf("Letra correcta\nPresione cualquier tecla para continuar.");
      getch();
      system("cls");
    }
    else{
      printf("Esa letra no esta o ya ha sido adivinada. Pierdes 1 vida.\nPresione cualquier tecla para continuar.");
      intentos--;
      getch();
      system("cls");
      }
      cambios=0;
      for(int i=0;i<longitud;i++){
        if(comprobador[i]=='x'){
          cambios++;
        }
      }
      if(cambios == longitud){
        dibujo(intentos);
        printf("%s\n", palabra);
        printf("Has adivinado la palabra, maquina.\n");
        break;
      }
      else {
        cambios=0;
    }
  }
  if (intentos<=1){
    dibujo(intentos);
    printf("Has perdido el juego amigo.");
  }
  return 0;
}
