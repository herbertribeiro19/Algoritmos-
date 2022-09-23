#include <stdio.h>
#include <stdlib.h>

typedef struct sLista{
    char letras;
    int n;    
  }Lista;


void lista_inicializar(Lista *ptrL){
  ptrL -> n = -1;
}
 
int lista_vazia(Lista *ptrL){
  if (ptrL == "NULL"){
    return 1;
  }
  return 0;
}

void lista_inserirInicio(Lista *ptrL){
//
}

void lista_apagarNos(Lista *ptrL){
  //
}

void lista_imprimirPosVogais(Lista *ptrL){
  
}