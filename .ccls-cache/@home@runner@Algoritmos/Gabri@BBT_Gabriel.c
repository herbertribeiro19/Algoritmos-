#include <stdio.h>
#include <stdlib.h>
#define TAML 20

typedef struct sLista{
char letras[TAML];
  int n;  
} LISTA;

void lista_inicializar(LISTA *ptrl){
  ptrl->n - 1;  
}

void lista_cheia(){
  if(ptrL-> n < TAML-1){
    return 0;
  }  
  return 1;
}

void lista_insereFim(lista *ptrL, char c){
  if(lista_cheia(ptrL)==0){
    ptrL->n = ptrL ->n+1;
    ptrL->letras[ptrL->n] = c;
  }
}
 void lista_imprimir(LISTA *ptrL){
    int i;
   for (i=0, i<=ptrL->n; i++){
     printf("%c, ", ptrL->letras[i]);
   }
   }