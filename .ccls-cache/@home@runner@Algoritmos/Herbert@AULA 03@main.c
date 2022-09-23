#include <stdio.h>
#include <stdlib.h>
#include "bbt.h"


int main(){
    int op;
    NO *ptrList;

    ptrList = (NO*) malloc(sizeof(NO));
    ptrList -> tam = -1; //Iniciar a lista na posicao -1

    if (ptrList != NULL){
          do{
            printf ("-------------- MENU --------------\n");
            printf ("Informe uma das opcoes abaixo:\n");
            printf ("1 - Inserir elemento (inicio da lista)\n");
            printf ("2 - Remover todos os elementos\n");
            printf ("3 - Imprimir posicao das vogais\n");
            printf ("4 - Sair\n");
            printf ("----------------------------------\n");
            printf ("DIGITE A OPCAO: ");
            scanf ("%d", &op);
            fflush (stdin);

            switch(op){
                case 1:
                        printf ("\n----> A OPCAO 1 FOI ESCOLHIDA <----\n");
                        ptrList = inserirInicio (ptrList);
                        printf ("----------------------------\n");
                        printf ("INSERIDA COM SUCESSO!\n");
                        printf ("----------------------------\n\n");
                        system("pause");
                        printf ("\n");
                        break;
                case 2:
                        printf ("\n----> A OPCAO 2 FOI ESCOLHIDA <----\n");
                        removeNo (ptrList);
                        system("pause");
                        printf ("\n");
                        break;
                /*case 3:
                        printf ("\n----> A OPCAO 3 FOI ESCOLHIDA <----\n");
                        ptrList = imprimeLista (ptrList);
                        printf ("----------------------------\n");
                        printf ("MUSICA REMOVIDA COM SUCESSO!\n");
                        printf ("----------------------------\n\n");
                        system("pause");
                        printf ("\n");
                        break;
                case 4:
                        printf ("\n----> A OPCAO 4 FOI ESCOLHIDA <----\n");
                        printf ("----------------------\n");
                        printf ("SAINDO DA APLICACAO...\n");
                        printf ("----------------------\n");
                        printf ("\n");
                        break;
                */
                default:
                        printf ("\n---->ESTA OPCAO NAO EXISTE!<----\n");
                        printf ("Escolha Invalida!\n\n");
                        system ("pause");
                        break;
            }
          }while(op!=4);

    free(ptrList);
    ptrList=NULL;

    }else{
        printf ("ERRO!");
    }
return 0;
}
