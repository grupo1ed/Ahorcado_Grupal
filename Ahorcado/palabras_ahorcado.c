#include <stdio.h>
#include <string.h>

char * Palabra();

void main(){

 char *palabra=Palabra();
 printf("\n%s\n", palabra);
}

char * Palabra(){
 static char palabra[4] = "oso";
// return palabra[1];
return palabra;
}

