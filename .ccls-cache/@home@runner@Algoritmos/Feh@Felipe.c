#include "BBT_Felipe.h"
#include <stdio.h>
#include <stdlib.h>
#define tam 20

int main() {

  Lista *L;
  int i = 0;
  char letras;

  L = (Lista *)malloc(tam * sizeof(Lista));

  iniciarLista(L);

  for (i = 0; i < tam; i++) {
    printf("Digite uma Letra: ");
    fflush(stdin);
    scanf("%c", &letras);
    fflush(stdin);
    listaInserir(L, letras);
  }
  return 0;
}