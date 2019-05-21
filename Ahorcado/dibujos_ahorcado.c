#include <stdio.h>
#include <string.h>
void dibujo(int);

int main(int argc, char const *argv[]) {}

// DIBUJO DE AHORCADO
void dibujo(int intentos) {

  if (intentos == 6) {
    printf("                                       \n");
    printf("                      |                \n");
    printf("                      |                \n");
    printf("                      |                \n");
    printf("                      |                \n");
    printf("                      |                \n");
    printf("                      |                \n");
    printf("                      |                \n");
    printf("                    __|__              \n");
  } else if (intentos == 5) {
    printf("                      ___________      \n");
    printf("                      |                \n");
    printf("                      |                \n");
    printf("                      |                \n");
    printf("                      |                \n");
    printf("                      |                \n");
    printf("                      |                \n");
    printf("                      |                \n");
    printf("                    __|__              \n");
  } else if (intentos == 4) {
    printf("                      ___________      \n");
    printf("                      |         |      \n");
    printf("                      |                \n");
    printf("                      |                \n");
    printf("                      |                \n");
    printf("                      |                \n");
    printf("                      |                \n");
    printf("                      |                \n");
    printf("                    __|__              \n");
  } else if (intentos == 3) {
    printf("                      ___________      \n");
    printf("                      |         |      \n");
    printf("                      |        ( )     \n");
    printf("                      |                \n");
    printf("                      |                \n");
    printf("                      |                \n");
    printf("                      |                \n");
    printf("                      |                \n");
    printf("                    __|__              \n");
  } else if (intentos == 2) {
    printf("                      ___________      \n");
    printf("                      |         |      \n");
    printf("                      |        ( )     \n");
    printf("                      |         |      \n");
    printf("                      |         |      \n");
    printf("                      |                \n");
    printf("                      |                \n");
    printf("                      |                \n");
    printf("                    __|__              \n");
  } else if (intentos == 1) {
    printf("                      ___________      \n");
    printf("                      |         |      \n");
    printf("                      |        ( )     \n");
    printf("                      |        /|\\    \n");
    printf("                      |         |      \n");
    printf("                      |                \n");
    printf("                      |                \n");
    printf("                      |                \n");
    printf("                    __|__              \n");
  } else {
    printf("                    -----GAME OVER-----\n");
    printf("                      ___________      \n");
    printf("                      |         |      \n");
    printf("                      |        ( )     \n");
    printf("                      |        /|\\    \n");
    printf("                      |         |      \n");
    printf("                      |        / \\    \n");
    printf("                      |       /   \\   \n");
    printf("                      |                \n");
    printf("                    __|__              \n");
  }
}
