#include <stdio.h>
#include <stdlib.h>
#include "BBT_Herbert.h"
int main() {
  //Alocando memoria:
  Lista *L;
  L = (Lista *)malloc(sizeof(Lista));
  int op;

  do{
    //Menu
    printf("-------------------------------------------\n");
    printf("\nOPCAO 1: INSERIR ELEMENTO NO FINAL\n");
    printf("\nOPCAO 2: IMPRIMIR LISTA\n");
    printf("\nOPCAO 3: SAIR\n");
    printf("\n-------------------------------------------\n");
    scanf("%d", &op);


    switch (op) {
        case 1:
            printf("INSERIDO COM SUCESSO!\n");
          lista_inserir(&L, 'H');
          lista_inserir(&L, 'B');
          lista_inserir(&L, 'C');
          printf("\n");
          break;
        case 2:
            printf("IMPRIMINDO\n");
          lista_imprimir(&L);
          printf("\n");
          break;
        case 3:
          printf("\nOpcao invalida!\n");
          break;
        default:
          printf("\nSaindo do programa....\n");
    }
  }while (op != 4);

  // desalocando memoria:
  free(L);
  L = NULL;
  return 0;
}
