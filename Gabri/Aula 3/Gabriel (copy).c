#include <stdio.h>
#include <stdlib.h>
#include "BBT_Gabriel.C"
int main() {
  Lista *l;
  l = (Lista *)malloc(sizeof(Lista));
  int operacao;
  do{
    printf("\nDigite 1 para inserir no final\n");
    printf("\n Digite 2 para imprimir a lista\n");
    printf("\n Digite 3 para sair\n");
    scanf("%d", &operacao);


    switch (operacao) {
        case 1:
            printf("INSERIDO COM SUCESSO!\n");
          lista_inserir(&l, 'H');
          lista_inserir(&l, 'B');
          lista_inserir(&l, 'C');
          printf("\n");
          break;
        case 2:
            printf("IMPRIMINDO\n");
          lista_imprimir(&l);
          printf("\n");
          break;
        case 3:
          printf("\nOpcao invalida!\n");
          break;
        default:
          printf("\nSaindo do programa....\n");
    }
  }while (operacao != 4);
  free(l);
  l = NULL;
  return 0;
}
